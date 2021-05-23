/*
 Image: /System/Library/Frameworks/SafariServices.framework/SafariServices
 */

#import <Foundation/NSObject.h>

@class _SFAppleConnectExtensionContext;

__attribute__((visibility("hidden")))
@interface _SFSafariPage : NSObject

{
    _SFAppleConnectExtensionContext *_extensionContext;
}

@property (nonatomic, readonly) _SFAppleConnectExtensionContext *_extensionContext;

- (id)_remoteObjectProxy;
- (id)_initWithExtensionContext:(id)arg1;
- (void)presentExtensionUI;
- (void)dismissExtensionUI;
- (void)dispatchMessageToScriptWithName:(id)arg1 userInfo:(id)arg2;

@end
