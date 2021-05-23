/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIView.h>

@class NSString, UIVisualEffectView;

__attribute__((visibility("hidden")))
@interface _UIDimmingKnockoutBackdropView : UIView

{
    UIView *dimmingKnockoutView;
    UIVisualEffectView *backdropView;
    double _alpha;
    double _currentCornerRadius;
    double _cornerRadius;
    long long _style;
}

@property (nonatomic) double cornerRadius;
@property (nonatomic) long long style;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)setBounds:(struct CGRect)arg1;
- (void)setAlpha:(double)arg1;
- (void)setHighlighted:(_Bool)arg1;
- (void)setPressed:(_Bool)arg1;
- (id)initWithStyle:(long long)arg1;
- (void)_setContinuousCornerRadius:(double)arg1;
- (void)setRoundedCornerPosition:(unsigned long long)arg1;
- (void)_configureViewsWithStyle:(long long)arg1;
- (id)_dimmingKnockoutFilterForBackdropStyle:(long long)arg1;
- (id)_dimmingKnockoutBackgroundColorForBackdropStyle:(long long)arg1;
- (id)_visualEffectForStyle:(long long)arg1;
- (void)_updateBackdropViewWithStyle:(long long)arg1 alpha:(double)arg2;
- (id)_vibrancyEffectForStyle:(long long)arg1;
- (void)_updateCornerRadius;

@end
