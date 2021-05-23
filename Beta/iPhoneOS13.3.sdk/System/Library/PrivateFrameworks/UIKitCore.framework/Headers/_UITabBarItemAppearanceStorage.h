/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/_UIBarItemAppearanceStorage.h>

@class NSMutableDictionary, UIColor;

__attribute__((visibility("hidden")))
@interface _UITabBarItemAppearanceStorage : _UIBarItemAppearanceStorage

{
    NSMutableDictionary *_badgeTextAttributesForState;
    UIColor *_badgeColor;
    struct UIOffset _titleOffset;
}

@property (nonatomic) struct UIOffset titleOffset;
@property (copy, nonatomic) UIColor *badgeColor;

- (id)badgeTextAttributesForState:(unsigned long long)arg1;
- (void)setBadgeTextAttributes:(id)arg1 forState:(unsigned long long)arg2;
- (void)enumerateBadgeTextAttributesWithBlock:(CDUnknownBlockType)arg1;

@end
