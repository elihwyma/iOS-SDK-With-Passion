/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIBarAppearance.h>

@class UIColor, UIImage, UITabBarItemAppearance, _UITabBarLayoutData;

@interface UITabBarAppearance : UIBarAppearance

{
    _UITabBarLayoutData *_layoutData;
    UITabBarItemAppearance *_stackedLayoutAppearance;
    UITabBarItemAppearance *_inlineLayoutAppearance;
    UITabBarItemAppearance *_compactInlineLayoutAppearance;
}

@property (copy, nonatomic) UITabBarItemAppearance *stackedLayoutAppearance;
@property (copy, nonatomic) UITabBarItemAppearance *inlineLayoutAppearance;
@property (copy, nonatomic) UITabBarItemAppearance *compactInlineLayoutAppearance;
@property (copy, nonatomic) UIColor *selectionIndicatorTintColor;
@property (retain, nonatomic) UIImage *selectionIndicatorImage;
@property (nonatomic) long long stackedItemPositioning;
@property (nonatomic) double stackedItemWidth;
@property (nonatomic) double stackedItemSpacing;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (void)_setupDefaults;
- (void)_completeInit;
- (void)_copyFromAppearance:(id)arg1;
- (unsigned long long)_hashInto:(unsigned long long)arg1;
- (_Bool)_checkEqualTo:(id)arg1;
- (void)_describeInto:(id)arg1;
- (void)_decodeFromCoder:(id)arg1;
- (id)_stackedTabButtonAppearanceData;
- (id)_inlineTabButtonAppearanceData;
- (id)_compactInlineTabButtonAppearanceData;
- (id)_tabLayoutAppearanceData;
- (id)_dataForItemStyle:(long long)arg1;
- (void)_tabBarItemDataChanged:(id)arg1;

@end
