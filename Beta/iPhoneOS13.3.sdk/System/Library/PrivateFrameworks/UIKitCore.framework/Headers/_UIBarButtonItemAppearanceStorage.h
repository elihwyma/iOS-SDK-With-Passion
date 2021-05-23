/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/_UIBarItemAppearanceStorage.h>

@class NSMutableDictionary, NSValue, UIColor, _UIBarBackButtonItemAppearanceStorage;

__attribute__((visibility("hidden")))
@interface _UIBarButtonItemAppearanceStorage : _UIBarItemAppearanceStorage

{
    NSMutableDictionary *backgroundImages;
    NSMutableDictionary *miniBackgroundImages;
    UIColor *tintColor;
    NSValue *titlePositionOffset;
    NSValue *miniTitlePositionOffset;
    NSMutableDictionary *backgroundVerticalAdjustmentsForBarMetrics;
    _UIBarBackButtonItemAppearanceStorage *backButtonAppearance;
}

@property (retain, nonatomic) UIColor *tintColor;
@property (retain, nonatomic) NSValue *titlePositionOffset;
@property (retain, nonatomic) NSValue *miniTitlePositionOffset;
@property (retain, nonatomic) NSValue *backButtonTitlePositionOffset;
@property (retain, nonatomic) NSValue *miniBackButtonTitlePositionOffset;

- (id)backgroundImageForState:(unsigned long long)arg1 style:(long long)arg2 isMini:(_Bool)arg3;
- (id)backButtonBackgroundImageForState:(unsigned long long)arg1 isMini:(_Bool)arg2;
- (double)backgroundVerticalAdjustmentForBarMetrics:(long long)arg1;
- (double)backButtonBackgroundVerticalAdjustmentForBarMetrics:(long long)arg1;
- (id)anyBackgroundImage;
- (void)setBackgroundImage:(id)arg1 forState:(unsigned long long)arg2 style:(long long)arg3 isMini:(_Bool)arg4;
- (void)setBackgroundVerticalAdjustment:(double)arg1 forBarMetrics:(long long)arg2;
- (void)setBackButtonBackgroundVerticalAdjustment:(double)arg1 forBarMetrics:(long long)arg2;
- (void)setBackButtonBackgroundImage:(id)arg1 forState:(unsigned long long)arg2 isMini:(_Bool)arg3;
- (id)anyBackButtonBackgroundImage;

@end
