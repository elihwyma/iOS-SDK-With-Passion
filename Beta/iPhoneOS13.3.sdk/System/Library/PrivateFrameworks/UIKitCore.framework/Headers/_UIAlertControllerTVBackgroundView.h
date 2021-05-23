/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIView.h>

@class NSMutableDictionary, NSString, _UIFloatingShadowView;

__attribute__((visibility("hidden")))
@interface _UIAlertControllerTVBackgroundView : UIView

{
    _Bool _isHighlighted;
    _Bool _isPressed;
    UIView *_backgroundView;
    _UIFloatingShadowView *_shadowView;
    NSMutableDictionary *_alphas;
    _Bool _shouldUseTintColorAsBackgroundColor;
    _Bool _shouldShowShadow;
}

@property (nonatomic) _Bool shouldShowShadow;
@property (nonatomic) _Bool shouldUseTintColorAsBackgroundColor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (struct CGSize)backgroundInsetAmount;

- (id)initWithFrame:(struct CGRect)arg1;
- (void)setCornerRadius:(double)arg1;
- (void)layoutSubviews;
- (void)setAlpha:(double)arg1 forState:(unsigned long long)arg2;
- (void)setHighlighted:(_Bool)arg1;
- (void)setPressed:(_Bool)arg1;
- (void)_setContinuousCornerRadius:(double)arg1;
- (void)setRoundedCornerPosition:(unsigned long long)arg1;
- (void)tintColorDidChange;
- (double)_alphaForHighlighted:(_Bool)arg1 pressed:(_Bool)arg2;
- (double)alphaForState:(unsigned long long)arg1;
- (id)_displayedBackgroundColor;

@end
