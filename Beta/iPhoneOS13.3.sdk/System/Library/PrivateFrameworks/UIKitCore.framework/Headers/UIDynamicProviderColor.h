/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIDynamicColor.h>

__attribute__((visibility("hidden")))
@interface UIDynamicProviderColor : UIDynamicColor

{
    CDUnknownBlockType _provider;
}

+ (_Bool)supportsSecureCoding;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)replacementObjectForCoder:(id)arg1;
- (id)initWithProvider:(CDUnknownBlockType)arg1;
- (id)_resolvedColorWithTraitCollection:(id)arg1;

@end
