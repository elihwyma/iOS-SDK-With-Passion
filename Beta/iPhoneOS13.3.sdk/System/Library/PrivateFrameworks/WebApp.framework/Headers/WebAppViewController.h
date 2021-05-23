/*
 Image: /System/Library/PrivateFrameworks/WebApp.framework/WebApp
 */

#import <UIKit/UIViewController.h>

@class LoadingViewController, NSString, NSTimer, UIWebClip, _SFWebAppViewController, _UIAsyncInvocation;

__attribute__((visibility("hidden")))
@interface WebAppViewController : UIViewController

{
    _SFWebAppViewController *_contentViewController;
    _UIAsyncInvocation *_cancelViewServiceRequest;
    _Bool _hasShownLoadingViewController;
    LoadingViewController *_loadingViewController;
    long long _orientation;
    NSTimer *_hideSnapshotTimer;
    UIWebClip *_webClip;
}

@property (nonatomic, readonly) UIWebClip *webClip;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (void)viewDidAppear:(_Bool)arg1;
- (id)childViewControllerForStatusBarStyle;
- (id)childViewControllerForStatusBarHidden;
- (id)childViewControllerForWhitePointAdaptivityStyle;
- (id)childViewControllerForScreenEdgesDeferringSystemGestures;
- (id)childViewControllerForHomeIndicatorAutoHidden;
- (void)_connectToService;
- (void)webAppViewController:(id)arg1 didChangeLoadingState:(_Bool)arg2;
- (void)webAppViewControllerDidFinishInitialLoad:(id)arg1;
- (void)webAppViewController:(id)arg1 viewServiceDidTerminateWithError:(id)arg2;
- (void)timeLimitForLoadCompletionExpired;
- (void)_cancelHideSnapshotTimer;
- (void)_setUpContentViewController:(id)arg1;
- (void)hideLoadingView;
- (void)_removeRemoteView;
- (id)initWithWebClip:(id)arg1;

@end
