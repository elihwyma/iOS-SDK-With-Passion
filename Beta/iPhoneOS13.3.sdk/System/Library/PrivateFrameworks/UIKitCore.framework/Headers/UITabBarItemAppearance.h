/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

#import <UIKitCore/Swift-Protocol.h>

@class UITabBarAppearance, UITabBarItemStateAppearance, _UITabBarItemData;

@interface UITabBarItemAppearance : NSObject <Swift>

{
    UITabBarItemStateAppearance *_states[5];
    _UITabBarItemData *_data;
    UITabBarAppearance *_owningAppearance;
}

@property (retain, nonatomic, setter=_setData:) _UITabBarItemData *_data;
@property (weak, nonatomic, setter=_setOwningAppearance:) UITabBarAppearance *_owningAppearance;
@property (nonatomic, readonly) UITabBarItemStateAppearance *highlighted;
@property (nonatomic, readonly) UITabBarItemStateAppearance *normal;
@property (nonatomic, readonly) UITabBarItemStateAppearance *selected;
@property (nonatomic, readonly) UITabBarItemStateAppearance *disabled;
@property (nonatomic, readonly) UITabBarItemStateAppearance *focused;

+ (_Bool)supportsSecureCoding;

- (id)init;
- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)copy;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithStyle:(long long)arg1;
- (void)_describeInto:(id)arg1;
- (void)_writeToStorage:(CDUnknownBlockType)arg1;
- (id)_initWithTabBarItemData:(id)arg1;
- (id)initWithTabBarItemAppearance:(id)arg1;
- (void)_updateDataTo:(id)arg1;
- (id)_proxyForState:(long long)arg1;
- (void)configureWithDefaultForStyle:(long long)arg1;

@end
