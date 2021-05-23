/*
 Image: /System/Library/Frameworks/QuickLook.framework/QuickLook
 */

@class NSLayoutConstraint, WKWebView;

__attribute__((visibility("hidden")))
@interface QLWebLocationItemViewController

{
    WKWebView *_webView;
    CDUnknownBlockType _loadingHandler;
    NSLayoutConstraint *_leftConstraint;
    NSLayoutConstraint *_rightConstraint;
}

- (void)dealloc;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)loadView;
- (id)scrollView;
- (_Bool)canSwipeToDismiss;
- (void)loadPreviewControllerWithContents:(id)arg1 context:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (_Bool)canPinchToDismiss;
- (_Bool)canEnterFullScreen;
- (void)setAppearance:(id)arg1 animated:(_Bool)arg2;
- (void)_updateConstraintConstants:(_Bool)arg1;
- (_Bool)automaticallyUpdateScrollViewContentOffset;
- (_Bool)automaticallyUpdateScrollViewContentInset;
- (_Bool)automaticallyUpdateScrollViewIndicatorInset;

@end
