/*
 Image: /System/Library/Frameworks/SafariServices.framework/SafariServices
 */

#import <SafariServices/SFSafariViewController.h>

@class NSString, UIWindow, _UIFallbackPresentationViewController;

@protocol SFAuthenticationViewControllerPresentationDelegate;

__attribute__((visibility("hidden")))
@interface SFAuthenticationViewController : SFSafariViewController

{
    _UIFallbackPresentationViewController *_fallbackPresentationViewController;
    NSString *_callbackURLScheme;
    UIWindow *_presentationContextWindow;
    id <SFAuthenticationViewControllerPresentationDelegate> _presentationDelegate;
    CDUnknownBlockType _dismissCompletionHandler;
}

@property (copy, nonatomic) CDUnknownBlockType dismissCompletionHandler;
@property (weak, nonatomic) id <SFAuthenticationViewControllerPresentationDelegate> presentationDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dismissViewControllerAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)setDefersAddingRemoteViewController:(_Bool)arg1;
- (id)initWithURL:(id)arg1 callbackURLScheme:(id)arg2 usingEphemeralSession:(_Bool)arg3 presentationContextWindow:(id)arg4;
- (void)_presentViewController;
- (void)_restartServiceViewController;
- (void)remoteViewController:(id)arg1 hostApplicationOpenURL:(id)arg2;
- (void)remoteViewController:(id)arg1 didDecideCookieSharingForURL:(id)arg2 shouldCancel:(_Bool)arg3;

@end
