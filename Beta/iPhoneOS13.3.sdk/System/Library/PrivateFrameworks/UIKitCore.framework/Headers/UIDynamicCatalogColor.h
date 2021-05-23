/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIDynamicColor.h>

@class NSString, UIColor, _UIAssetManager;

__attribute__((visibility("hidden")))
@interface UIDynamicCatalogColor : UIDynamicColor

{
    NSString *_name;
    _UIAssetManager *_assetManager;
    UIColor *_genericColor;
}

+ (_Bool)supportsSecureCoding;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)_debugName;
- (id)_initForNibEncodingWithName:(id)arg1 genericColor:(id)arg2;
- (void)_setDebugName:(id)arg1;
- (id)_debugCatalogBundleIdentifier;
- (void)_setDebugCatalogBundleIdentifier:(id)arg1;
- (id)_resolvedColorWithTraitCollection:(id)arg1;
- (id)initWithName:(id)arg1 assetManager:(id)arg2 genericColor:(id)arg3;

@end
