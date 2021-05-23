/*
 Image: /System/Library/PrivateFrameworks/MusicCarDisplayUI.framework/MusicCarDisplayUI
 */

#import <UIKit/UIButton.h>

@class CALayer;

@interface MCDButton : UIButton

{
    CALayer *_focusColorLayer;
    _Bool _showBezelInTouch;
    _Bool _showHighlight;
}

@property (nonatomic, getter=isSelected) _Bool selected;
@property (nonatomic) _Bool showBezelInTouch;
@property (nonatomic) _Bool showHighlight;

- (void)setHidden:(_Bool)arg1;
- (struct CGSize)intrinsicContentSize;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;
- (_Bool)canBecomeFocused;
- (void)layoutSubviews;
- (void)willMoveToWindow:(id)arg1;
- (void)_updateButtonStyle;
- (_Bool)canShowHighlight;
- (id)tintColorForUnhighlightedTextLabel;
- (double)focusLayerCornerRadius;
- (id)colorForKnobFocusLayer;
- (id)colorForKnobFocusLayerSelected;
- (_Bool)shouldUpdateButtonOpacityForKnobUnfocused;
- (void)updateButtonOpacityForKnobUnfocused;
- (id)colorForKnobContentSelected;
- (id)colorForKnobFocused;
- (id)colorForTouchContentSelected;
- (id)colorForTouchFocusLayerSelected;
- (id)colorForTouchFocusLayer;
- (id)_buttonBackGroundColorTouch;

@end
