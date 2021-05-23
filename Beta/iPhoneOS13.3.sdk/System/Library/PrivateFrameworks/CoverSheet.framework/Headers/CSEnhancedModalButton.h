/*
 Image: /System/Library/PrivateFrameworks/CoverSheet.framework/CoverSheet
 */

#import <UIKit/UIButton.h>

@class UIView, UIVisualEffectView;

@interface CSEnhancedModalButton : UIButton

{
    UIVisualEffectView *_effectView;
    UIView *_highlightedView;
}

- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)_setContinuousCornerRadius:(double)arg1;
- (void)_buttonPressed:(id)arg1;
- (void)_buttonReleased:(id)arg1;
- (void)_addVisualEffect;
- (void)_addBackgroundHighlightView;

@end
