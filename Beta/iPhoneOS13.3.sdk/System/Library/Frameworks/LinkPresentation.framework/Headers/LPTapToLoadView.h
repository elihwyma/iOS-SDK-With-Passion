/*
 Image: /System/Library/Frameworks/LinkPresentation.framework/LinkPresentation
 */

@class LPTapToLoadViewStyle, LPTextView, NSString, UILongPressGestureRecognizer, UIView;

@protocol LPTapToLoadViewDelegate;

__attribute__((visibility("hidden")))
@interface LPTapToLoadView

{
    LPTextView *_captionView;
    UIView *_progressView;
    LPTapToLoadViewStyle *_style;
    UIView *_highlightView;
    UILongPressGestureRecognizer *_highlightGestureRecognizer;
    _Bool _wasTapped;
    CDUnknownBlockType _animateOutCompletionHandler;
    id <LPTapToLoadViewDelegate> _delegate;
}

@property (weak, nonatomic) id <LPTapToLoadViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (id)initWithStyle:(id)arg1;
- (void)_didScroll;
- (void)animationDidStop:(id)arg1 finished:(_Bool)arg2;
- (_Bool)gestureRecognizer:(id)arg1 canPreventGestureRecognizer:(id)arg2;
- (void)_highlightLongPressRecognized:(id)arg1;
- (void)_tapRecognized:(id)arg1;
- (void)layoutComponentView;
- (void)animateOutWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)_buildViews;
- (id)_createIndeterminateProgressIndicator;
- (void)_animateToProgressView;

@end
