/*
 Image: /System/Library/Frameworks/ARKit.framework/ARKit
 */

#import <UIKit/UIVisualEffectView.h>

@interface ARCoachingControlBlurredBackgroundView : UIVisualEffectView

{
    _Bool _highlighted;
    _Bool _selected;
    _Bool _enabled;
    long long _controlStyle;
    long long _backgroundStyle;
}

@property (nonatomic) long long backgroundStyle;
@property (nonatomic) long long controlStyle;
@property (nonatomic, getter=isHighlighted) _Bool highlighted;
@property (nonatomic, getter=isSelected) _Bool selected;
@property (nonatomic, getter=isEnabled) _Bool enabled;

+ (id)selectedEffectsForARDarkStyle;
+ (id)normalEffectsForARDarkStyle;
+ (id)selectedEffectsForDarkModeStyle;
+ (id)normalEffectsForDarkModeStyle;
+ (id)selectedEffects;
+ (id)disabledSelectedEffects;
+ (id)disabledEffectsForStudioStyle;
+ (id)disabledEffectsForARStyle;
+ (id)highlightedEffectsForStudioStyle;
+ (id)highlightedEffectsForARStyle;
+ (id)normalEffectsForStudioStyle;
+ (id)normalEffectsForARStyle;

- (void)updateBackgroundEffects;
- (id)initWithFrame:(struct CGRect)arg1 backgroundStyle:(long long)arg2 controlStyle:(long long)arg3;

@end
