/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/_UIBarAppearanceData.h>

@class NSDictionary, UIColor, UIImageSymbolConfiguration;

__attribute__((visibility("hidden")))
@interface _UITabBarItemData : _UIBarAppearanceData

{
    long long _style;
    NSDictionary *_titleTextAttributes[5];
    NSDictionary *_badgeTextAttributes[5];
    UIColor *_iconColor[5];
    UIColor *_badgeBackgroundColor[5];
    struct UIOffset _titlePositionAdjustment[5];
    struct UIOffset _badgePositionAdjustment[5];
    struct UIOffset _badgeTitlePositionAdjustment[5];
    struct {
        unsigned int hasUserTitleFont:1;
        unsigned int hasUserTitleColor:1;
        unsigned int hasUserTitlePosition:1;
        unsigned int hasUserIconColor:1;
        unsigned int hasUserBadgePosition:1;
        unsigned int hasUserBadgeBackgroundColor:1;
        unsigned int hasUserBadgeTitleFont:1;
        unsigned int hasUserBadgeTitleColor:1;
        unsigned int hasUserBadgeTitlePosition:1;
    } _stateFlags[5];
}

@property (nonatomic, readonly) UIImageSymbolConfiguration *preferredSymbolConfiguration;

+ (id)decodeFromCoder:(id)arg1 prefix:(id)arg2;
+ (id)standardItemDataForStyle:(long long)arg1;

- (void)encodeToCoder:(id)arg1 prefix:(id)arg2;
- (void)describeInto:(id)arg1;
- (id)replicate;
- (long long)hashInto:(long long)arg1;
- (_Bool)checkEqualTo:(id)arg1;
- (struct UIOffset)titlePositionAdjustmentForState:(long long)arg1;
- (id)titleTextAttributesForState:(long long)arg1;
- (void)setTitleTextAttributes:(id)arg1 forState:(long long)arg2;
- (id)badgeTextAttributesForState:(long long)arg1;
- (void)setBadgeTextAttributes:(id)arg1 forState:(long long)arg2;
- (id)iconColorForState:(long long)arg1;
- (struct UIOffset)badgePositionAdjustmentForState:(long long)arg1;
- (id)badgeBackgroundColorForState:(long long)arg1;
- (struct UIOffset)badgeTitlePositionAdjustmentForState:(long long)arg1;
- (_Bool)titleTextAttributesSpecifyColorForState:(long long)arg1;
- (void)setTitlePositionAdjustment:(struct UIOffset)arg1 forState:(long long)arg2;
- (void)setIconColor:(id)arg1 forState:(long long)arg2;
- (void)setBadgeTitlePositionAdjustment:(struct UIOffset)arg1 forState:(long long)arg2;
- (void)setBadgeBackgroundColor:(id)arg1 forState:(long long)arg2;
- (void)setBadgePositionAdjustment:(struct UIOffset)arg1 forState:(long long)arg2;
- (void)_decodeTitleTextAttributesFromCoder:(id)arg1 prefix:(id)arg2;
- (void)_decodeTitlePositionAdjustmentsFromCoder:(id)arg1 prefix:(id)arg2;
- (void)_decodeBadgeTextAttributesFromCoder:(id)arg1 prefix:(id)arg2;
- (void)_decodeIconColorFromCoder:(id)arg1 prefix:(id)arg2;
- (void)_decodeBadgeBackgroundColorFromCoder:(id)arg1 prefix:(id)arg2;
- (void)_decodeBadgePositionAdjustmentsFromCoder:(id)arg1 prefix:(id)arg2;
- (void)_decodeBadgeTitlePositionAdjustmentsFromCoder:(id)arg1 prefix:(id)arg2;
- (id)_fallbackTitleFontForState:(long long)arg1;
- (id)_fallbackTitleColorForState:(long long)arg1;
- (id)_fallbackBadgeTitleFontForState:(long long)arg1;
- (id)_fallbackBadgeTitleColorForState:(long long)arg1;

@end
