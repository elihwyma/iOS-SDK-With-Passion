/*
 Image: /System/Library/Frameworks/WebKit.framework/WebKit
 */

#import <UIKit/UIView.h>

__attribute__((visibility("hidden")))
@interface WKApplicationStateTrackingView : UIView

{
    struct WeakObjCPtr<WKWebView> _webViewToTrack;
    struct unique_ptr<WebKit::ApplicationStateTracker, std::__1::default_delete<WebKit::ApplicationStateTracker>> _applicationStateTracker;
}

@property (nonatomic, readonly) _Bool isBackground;
@property (nonatomic, readonly) UIView *_contentView;

- (id).cxx_construct;
- (void)didMoveToWindow;
- (void)willMoveToWindow:(id)arg1;
- (void)_applicationDidEnterBackground;
- (id)initWithFrame:(struct CGRect)arg1 webView:(id)arg2;
- (void)_applicationDidFinishSnapshottingAfterEnteringBackground;
- (void)_applicationWillEnterForeground;

@end
