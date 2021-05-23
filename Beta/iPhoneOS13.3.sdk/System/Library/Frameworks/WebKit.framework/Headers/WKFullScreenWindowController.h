/*
 Image: /System/Library/Frameworks/WebKit.framework/WebKit
 */

#import <Foundation/NSObject.h>

@class NSString, UIView, WKWebView;

__attribute__((visibility("hidden")))
@interface WKFullScreenWindowController : NSObject

{
    struct RetainPtr<WKFullScreenPlaceholderView> _webViewPlaceholder;
    long long _fullScreenState;
    struct WKWebViewState _viewState;
    struct RetainPtr<UIWindow> _window;
    struct RetainPtr<UIViewController> _rootViewController;
    struct RefPtr<WebKit::GenericCallback<>, WTF::DumbPtrTraits<WebKit::GenericCallback<>>> _repaintCallback;
    struct RetainPtr<UIViewController> _viewControllerForPresentation;
    struct RetainPtr<WKFullScreenViewController> _fullscreenViewController;
    struct RetainPtr<UISwipeGestureRecognizer> _startDismissGestureRecognizer;
    struct RetainPtr<UIPanGestureRecognizer> _interactivePanDismissGestureRecognizer;
    struct RetainPtr<UIPinchGestureRecognizer> _interactivePinchDismissGestureRecognizer;
    struct RetainPtr<WKFullScreenInteractiveTransition> _interactiveDismissTransitionCoordinator;
    struct CGRect _initialFrame;
    struct CGRect _finalFrame;
    struct RetainPtr<NSString> _EVOrganizationName;
    _Bool _EVOrganizationNameIsValid;
    _Bool _inInteractiveDismiss;
    _Bool _exitRequested;
    struct RetainPtr<id> _notificationListener;
    WKWebView *__webView;
}

@property (weak, nonatomic) WKWebView *_webView;
@property (retain, nonatomic, readonly) UIView *webViewPlaceholder;
@property (nonatomic, readonly) _Bool isFullScreen;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (void)close;
- (struct WebFullScreenManagerProxy *)_manager;
- (id).cxx_construct;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3;
- (id)animationControllerForDismissedController:(id)arg1;
- (id)interactionControllerForDismissal:(id)arg1;
- (_Bool)_isSecure;
- (void)videoControlsManagerDidChange;
- (void)webViewDidRemoveFromSuperviewWhileInFullscreen;
- (id)initWithWebView:(id)arg1;
- (void)enterFullScreen;
- (void)exitFullScreen;
- (void)beganEnterFullScreenWithInitialFrame:(struct CGRect)arg1 finalFrame:(struct CGRect)arg2;
- (void)beganExitFullScreenWithInitialFrame:(struct CGRect)arg1 finalFrame:(struct CGRect)arg2;
- (void)placeholderWillMoveToSuperview:(id)arg1;
- (void)_invalidateEVOrganizationName;
- (void)requestExitFullScreen;
- (void)_updateLocationInfo;
- (void)_startToDismissFullscreenChanged:(id)arg1;
- (void)_interactiveDismissChanged:(id)arg1;
- (void)_interactivePinchDismissChanged:(id)arg1;
- (void)_exitFullscreenImmediately;
- (void)_dismissFullscreenViewController;
- (void)_completedExitFullScreen;
- (struct __SecTrust *)_serverTrust;
- (id)_EVOrganizationName;

@end
