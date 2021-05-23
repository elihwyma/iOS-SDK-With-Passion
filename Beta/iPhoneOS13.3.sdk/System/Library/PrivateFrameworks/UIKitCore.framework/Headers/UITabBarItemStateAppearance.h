/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class NSArray, NSDictionary, UIColor, UITabBarItemAppearance, _UITabBarItemData;

@interface UITabBarItemStateAppearance : NSObject

{
    UITabBarItemAppearance *_owner;
    long long _state;
    _UITabBarItemData *_data;
    NSArray *_itemEffects;
}

@property (retain, nonatomic, setter=_setData:) _UITabBarItemData *_data;
@property (copy, nonatomic) NSArray *itemEffects;
@property (copy, nonatomic) NSDictionary *titleTextAttributes;
@property (nonatomic) struct UIOffset titlePositionAdjustment;
@property (copy, nonatomic) UIColor *iconColor;
@property (nonatomic) struct UIOffset badgePositionAdjustment;
@property (copy, nonatomic) UIColor *badgeBackgroundColor;
@property (copy, nonatomic) NSDictionary *badgeTextAttributes;
@property (nonatomic) struct UIOffset badgeTitlePositionAdjustment;

- (id)init;
- (void)_writeToStorage:(CDUnknownBlockType)arg1;
- (id)_initWithOwner:(id)arg1 data:(id)arg2 state:(long long)arg3;
- (void)_clearOwner;

@end
