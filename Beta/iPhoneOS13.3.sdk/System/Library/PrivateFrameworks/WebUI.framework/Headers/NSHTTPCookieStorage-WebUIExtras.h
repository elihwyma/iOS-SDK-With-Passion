/*
 Image: /System/Library/PrivateFrameworks/WebUI.framework/WebUI
 */

#import <NSHTTPCookieStorage.h>

@interface NSHTTPCookieStorage (WebUIExtras)

@property (readonly) _Bool webui_trackerProtectionEnabled;
@property (readonly) unsigned long long webui_safariCookieAcceptPolicyEnumValue;

- (float)_safariCookieAcceptPolicyFloatValue;
- (id)webui_safariCookieAcceptPolicy;
- (void)webui_applySafariCookieAcceptPolicy;

@end
