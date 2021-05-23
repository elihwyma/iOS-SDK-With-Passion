/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIDynamicColor.h>

@class NSDictionary;

__attribute__((visibility("hidden")))
@interface UIDynamicAppDefinedColor : UIDynamicColor

{
    NSDictionary *_colorsByThemeKey;
}

+ (_Bool)supportsSecureCoding;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithColorsByTraitCollection:(id)arg1;
- (id)_resolvedColorWithTraitCollection:(id)arg1;
- (id)_initWithColorsByThemeKey:(id)arg1;
- (id)_generateColorsByTraitCollection;

@end
