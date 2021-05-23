/*
 Image: /System/Library/Frameworks/SafariServices.framework/SafariServices
 */

#import <Foundation/NSExtensionContext.h>

@class UIViewController;

@protocol _SFAppleConnectExtensionPageDelegate;

__attribute__((visibility("hidden")))
@interface _SFAppleConnectExtensionHostContext : NSExtensionContext

{
    id <_SFAppleConnectExtensionPageDelegate> _delegate;
    UIViewController *_remoteViewController;
}

@property (weak, nonatomic) id <_SFAppleConnectExtensionPageDelegate> delegate;
@property (retain, nonatomic) UIViewController *remoteViewController;

+ (id)_extensionAuxiliaryHostProtocol;
+ (id)_extensionAuxiliaryVendorProtocol;

- (void)dealloc;
- (void)dispatchMessageToContentScriptWithName:(id)arg1 userInfo:(id)arg2;
- (void)presentExtensionUI;
- (void)dismissExtensionUI;

@end
