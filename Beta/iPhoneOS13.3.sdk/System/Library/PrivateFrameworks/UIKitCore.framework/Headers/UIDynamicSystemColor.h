/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIDynamicColor.h>

@class NSDictionary;

__attribute__((visibility("hidden")))
@interface UIDynamicSystemColor : UIDynamicColor

{
    NSDictionary *_colorsByThemeKey;
}

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)_resolvedColorWithTraitCollection:(id)arg1;
- (id)initWithName:(id)arg1 colorsByThemeKey:(id)arg2;
- (id)_colorsByThemeKey;
- (void)_setColorsByThemeKey:(id)arg1;

@end
