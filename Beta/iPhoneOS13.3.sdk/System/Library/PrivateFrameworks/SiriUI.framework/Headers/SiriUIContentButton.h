/*
 Image: /System/Library/PrivateFrameworks/SiriUI.framework/SiriUI
 */

#import <UIButton.h>

@class UIColor;

@interface SiriUIContentButton : UIButton

{
    _Bool _isRenderingImageTemplate;
    UIColor *_defaultColorForTemplate;
    UIColor *_highlightColorForTemplate;
    UIColor *_overrideTextColor;
    _Bool _usePlatterStyle;
    struct UIEdgeInsets _hitTestEdgeInsets;
}

@property (nonatomic) _Bool usePlatterStyle;
@property (nonatomic) struct UIEdgeInsets hitTestEdgeInsets;

+ (id)button;
+ (id)buttonWithLightWeightFont;
+ (id)buttonWithMediumWeightFont;
+ (id)buttonWithImageMask:(id)arg1 style:(long long)arg2;
+ (id)buttonWithImageTemplate:(id)arg1 style:(long long)arg2;
+ (id)buttonWithImageMask:(id)arg1;
+ (id)buttonWithImageTemplate:(id)arg1;

- (id)initWithFrame:(struct CGRect)arg1;
- (void)setHighlighted:(_Bool)arg1;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)_updateTintColor;
- (void)_updateStyling;
- (void)_setIsRenderingImageTemplate:(_Bool)arg1;
- (void)setDefaultColorForTemplate:(id)arg1;
- (void)setHighlightColorForTemplate:(id)arg1;
- (void)setOverrideTextColor:(id)arg1;

@end
