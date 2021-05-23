/*
 Image: /System/Library/Frameworks/LinkPresentation.framework/LinkPresentation
 */

#import <UIKit/UIControl.h>

@class LPMusicPlayButtonStyle, LPPlayButtonShapeView, NSString, UIImageView, UILongPressGestureRecognizer, UIView;

__attribute__((visibility("hidden")))
@interface LPPlayButtonControl : UIControl

{
    LPMusicPlayButtonStyle *_style;
    LPPlayButtonShapeView *_borderView;
    LPPlayButtonShapeView *_innerProgressView;
    LPPlayButtonShapeView *_outerProgressView;
    LPPlayButtonShapeView *_highlightView;
    UILongPressGestureRecognizer *_highlightRecognizer;
    UIView *_backgroundView;
    UIImageView *_imageView;
    _Bool _indeterminate;
    float _progress;
    _Bool _showingProgress;
}

@property (retain, nonatomic) UIImageView *imageView;
@property (nonatomic, readonly, getter=isIndeterminate) _Bool indeterminate;
@property (nonatomic) float progress;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)setEnabled:(_Bool)arg1;
- (struct CGSize)intrinsicContentSize;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (id)initWithStyle:(id)arg1;
- (void)_didScroll;
- (void)setProgress:(float)arg1 animated:(_Bool)arg2;
- (void)_createBorderView;
- (void)buttonPressed:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 canPreventGestureRecognizer:(id)arg2;
- (void)hideProgressAnimated:(_Bool)arg1;
- (id)defaultBackgroundColor;
- (void)_highlightLongPressRecognized:(id)arg1;
- (void)_createBackgroundView;
- (void)endIndeterminateAnimation;
- (void)showPlayIndicator:(_Bool)arg1;
- (void)setPlayButtonState:(unsigned long long)arg1;
- (void)beginIndeterminateAnimation;
- (void)_createImageView;
- (void)_createOuterProgressView;
- (void)_createInnerProgressView;
- (void)_createHighlightView;
- (void)setShowOuterBorder:(_Bool)arg1;
- (void)setShowBorder:(_Bool)arg1;
- (struct CGSize)buttonSize;
- (void)_hideTapHighlight;
- (void)_updateEnabledState;
- (void)_updateOuterProgressLayerStroke;
- (void)_showPlayIndicator:(_Bool)arg1;
- (void)_toggleToPlayState;
- (id)outerBorderColor;
- (id)_createProgressIndicatorViewWithBounds:(struct CGRect)arg1 lineWidth:(double)arg2;
- (float)buttonCornerRadius;
- (void)_updateInnerProgressLayerStroke;
- (id)playImage;
- (id)pauseImage;
- (void)installRecognizersOnView:(id)arg1;

@end
