/*
 Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

#import <UIKit/UIView.h>

@class HULegibilityLabel, NSArray, NSString, UIVisualEffectView, _UILegibilitySettings;

@interface HUCameraBadgeView : UIView

{
    unsigned long long _size;
    HULegibilityLabel *_label;
    _UILegibilitySettings *_legibilitySettings;
    UIVisualEffectView *_blurEffectView;
    UIVisualEffectView *_vibrancyEffectView;
    NSArray *_staticConstraints;
    NSArray *_labelConstraints;
}

@property (nonatomic, readonly) unsigned long long size;
@property (nonatomic, readonly) HULegibilityLabel *label;
@property (nonatomic, readonly) _UILegibilitySettings *legibilitySettings;
@property (nonatomic, readonly) UIVisualEffectView *blurEffectView;
@property (nonatomic, readonly) UIVisualEffectView *vibrancyEffectView;
@property (retain, nonatomic) NSArray *staticConstraints;
@property (retain, nonatomic) NSArray *labelConstraints;
@property (copy, nonatomic) NSString *labelText;

+ (_Bool)requiresConstraintBasedLayout;

- (id)initWithSize:(unsigned long long)arg1;
- (void)updateConstraints;

@end
