#import "PlaybasisWrapper.h"
#import "Playbasis.h" // your actual iOS library header

// Converts C style string to NSString
NSString* CreateNSString (const char* string)
{
	if (string)
		return [NSString stringWithUTF8String: string];
	else
		return [NSString stringWithUTF8String: ""];
}

// Helper method to create C string copy
char* MakeStringCopy (const char* string)
{
	if (string == NULL)
		return NULL;
	
	char* res = (char*)malloc(strlen(string) + 1);
	strcpy(res, string);
	return res;
}

int _getOne() {
	return 1;
}

const char* _version() {
	return MakeStringCopy([[Playbasis version] UTF8String]);
}

void _auth(const char* apikey, const char* apisecret, const char* bundleId) {
	[[Playbasis sharedPB] authWithApiKey:CreateNSString(apikey) apiSecret:CreateNSString(apisecret) bundleId:CreateNSString(bundleId) andBlock:^(PBAuth_Response *auth, NSURL *url, NSError *error) {
        NSLog(@"%@", auth);
    }];
}