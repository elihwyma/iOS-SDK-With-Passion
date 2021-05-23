/*
 Image: /System/Library/Frameworks/SafariServices.framework/SafariServices
 */

#import <Foundation/NSObject.h>

@class NSArray, NSExtension, WKUserContentController;

@interface _SFAppleConnectExtensionManager : NSObject

{
    NSExtension *_appleConnectExtension;
    id _extensionDiscoveryToken;
    WKUserContentController *_userContentController;
    NSArray *_injectedUserScripts;
}

@property (nonatomic, readonly, getter=isAppleConnectExtensionInstalled) _Bool appleConnectExtensionInstalled;

+ (id)sharedManager;

- (void)_loadAppleConnectExtension:(id)arg1;
- (id)_findAppleConnectExtension;
- (void)_startListeningForExtensionUpdates;
- (void)loadAppleConnectExtensionWithUserContentController:(id)arg1;
- (void)appleConnectExtensionEnabledPreferenceChanged;
- (void)dispatchMessageToAppleConnectExtension:(id)arg1 fromPageDelegate:(id)arg2 userInfo:(id)arg3;

@end
