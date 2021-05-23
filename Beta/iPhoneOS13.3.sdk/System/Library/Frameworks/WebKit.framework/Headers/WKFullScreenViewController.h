/*
 Image: /System/Library/Frameworks/WebKit.framework/WebKit
 */

#import <UIKit/UIViewController.h>

@class NSString, WKWebView;

__attribute__((visibility("hidden")))
@interface WKFullScreenViewController : UIViewController

{
    struct RetainPtr<UILongPressGestureRecognizer> _touchGestureRecognizer;
    struct RetainPtr<UIView> _animatingView;
    struct RetainPtr<WKFullscreenStackView> _stackView;
    struct RetainPtr<_WKExtrinsicButton> _cancelButton;
    struct RetainPtr<_WKExtrinsicButton> _pipButton;
    struct RetainPtr<UIButton> _locationButton;
    struct RetainPtr<UILayoutGuide> _topGuide;
    struct RetainPtr<NSLayoutConstraint> _topConstraint;
    struct FullscreenTouchSecheuristic _secheuristic;
    struct WKFullScreenViewControllerPlaybackSessionModelClient _playbackClient;
    struct WKFullScreenViewControllerVideoFullscreenModelClient _videoFullscreenClient;
    double _nonZeroStatusBarHeight;
    _Bool _prefersStatusBarHidden;
    _Bool _prefersHomeIndicatorAutoHidden;
    _Bool _playing;
    _Bool _pictureInPictureActive;
    _Bool _animating;
    id _target;
    SEL _action;
    NSString *_location;
    WKWebView *__webView;
}

@property (weak, nonatomic) WKWebView *_webView;
@property (nonatomic, readonly) struct WebFullScreenManagerProxy *_manager;
@property (nonatomic, readonly) RectEdges_0629eaa8 _effectiveFullscreenInsets;
@property (retain, nonatomic) id target;
@property (nonatomic) SEL action;
@property (copy, nonatomic) NSString *location;
@property (nonatomic) _Bool prefersStatusBarHidden;
@property (nonatomic) _Bool prefersHomeIndicatorAutoHidden;
@property (nonatomic, getter=isPlaying) _Bool playing;
@property (nonatomic, getter=isPictureInPictureActive) _Bool pictureInPictureActive;
@property (nonatomic, getter=isAnimating) _Bool animating;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (id).cxx_construct;
- (void)loadView;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)viewDidLayoutSubviews;
- (long long)preferredStatusBarStyle;
- (void)videoControlsManagerDidChange;
- (id)initWithWebView:(id)arg1;
- (void)_statusBarFrameDidChange:(id)arg1;
- (void)hideUI;
- (void)_updateWebViewFullscreenInsets;
- (void)showUI;
- (void)_cancelAction:(id)arg1;
- (void)_togglePiPAction:(id)arg1;
- (void)_touchDetected:(id)arg1;
- (void)_showPhishingAlert;
- (void)willEnterPictureInPicture;
- (void)didEnterPictureInPicture;
- (void)failedToEnterPictureInPicture;

@end
