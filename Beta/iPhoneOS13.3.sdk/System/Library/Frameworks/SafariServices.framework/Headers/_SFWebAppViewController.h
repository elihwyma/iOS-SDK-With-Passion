/*
 Image: /System/Library/Frameworks/SafariServices.framework/SafariServices
 */

#import <UIKit/_UIRemoteViewController.h>

@class NSString;

@protocol _SFWebAppViewControllerDelegate;

@interface _SFWebAppViewController : _UIRemoteViewController

{
    id <_SFWebAppViewControllerDelegate> _delegate;
}

@property (weak, nonatomic) id <_SFWebAppViewControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)exportedInterface;
+ (id)serviceViewControllerInterface;
+ (id)requestViewControllerWithConnectionHandler:(CDUnknownBlockType)arg1;

- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)viewServiceDidTerminateWithError:(id)arg1;
- (void)willDismissServiceViewController;
- (void)didLoadWebView;
- (void)didFinishInitialLoad:(_Bool)arg1;
- (void)fetchActivityViewControllerInfoForURL:(id)arg1 title:(id)arg2;
- (void)executeCustomActivityProxyID:(id)arg1;
- (void)setRemoteSwipeGestureEnabled:(_Bool)arg1;
- (void)willOpenURLInHostApplication:(id)arg1;
- (void)didDecideCookieSharingForURL:(id)arg1 shouldCancel:(_Bool)arg2;
- (void)initialLoadDidRedirectToURL:(id)arg1;
- (void)didChangeFullScreen:(_Bool)arg1;
- (void)didResolveRedirectionWithURL:(id)arg1 appLink:(id)arg2;
- (void)didDecideShouldShowLinkPreviews:(_Bool)arg1;
- (void)didChangeLoadingState:(_Bool)arg1;
- (void)loadWebAppWithIdentifier:(id)arg1;

@end
