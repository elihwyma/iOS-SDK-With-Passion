/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

#import <UIKitCore/Swift-Protocol.h>

@class NSMutableDictionary, NSString, UIColor;

@interface _UICoreUICatalogColorWrapper : NSObject <Swift>

{
    NSString *_nibLoadingBundleID;
    NSMutableDictionary *_colorCache;
    _Bool _hasLoggedFailure;
    NSString *_name;
    NSString *_bundleID;
    UIColor *_fallbackColor;
}

@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) NSString *bundleID;
@property (nonatomic, readonly) UIColor *fallbackColor;
@property (nonatomic, readonly) UIColor *color;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)bundle;
- (id)colorCache;
- (id)_uikit_valueForTraitCollection:(id)arg1;
- (_Bool)isEqualToCoreUICatalogColor:(id)arg1;
- (id)initWithName:(id)arg1 bundleID:(id)arg2 fallbackColor:(id)arg3;
- (id)nibLoadingBundle;
- (id)cachedColorForDisplayGamut:(long long)arg1;
- (void)setCachedColor:(id)arg1 forDisplayGamut:(long long)arg2;
- (struct CGColor *)cgColorForTraitCollection:(id)arg1;
- (_Bool)_uikit_variesByTraitCollections;

@end
