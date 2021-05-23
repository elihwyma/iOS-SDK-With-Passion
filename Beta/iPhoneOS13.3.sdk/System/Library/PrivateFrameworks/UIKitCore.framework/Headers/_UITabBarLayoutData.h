/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/_UIBarAppearanceData.h>

@class UIColor, UIImage;

__attribute__((visibility("hidden")))
@interface _UITabBarLayoutData : _UIBarAppearanceData

{
    UIColor *_selectionIndicatorTintColor;
    UIImage *_selectionIndicatorImage;
    long long _itemPositioning;
    double _itemWidth;
    double _itemSpacing;
}

@property (copy, nonatomic) UIColor *selectionIndicatorTintColor;
@property (retain, nonatomic) UIImage *selectionIndicatorImage;
@property (nonatomic) long long itemPositioning;
@property (nonatomic) double itemWidth;
@property (nonatomic) double itemSpacing;

+ (id)decodeFromCoder:(id)arg1 prefix:(id)arg2;
+ (id)standardLayoutData;

- (void)encodeToCoder:(id)arg1 prefix:(id)arg2;
- (void)describeInto:(id)arg1;
- (id)replicate;
- (long long)hashInto:(long long)arg1;
- (_Bool)checkEqualTo:(id)arg1;
- (long long)positioningForTraitCollection:(id)arg1;

@end
