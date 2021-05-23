/*
 Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface PLPhotoEffect : NSObject

{
    _Bool _isPortrait;
    _Bool _isLegacy;
    NSString *_filterIdentifier;
    NSString *_displayName;
    NSString *_CIFilterName;
    long long _lightingVersion;
}

@property (copy, nonatomic, readonly) NSString *filterIdentifier;
@property (copy, nonatomic, readonly) NSString *displayName;
@property (copy, nonatomic, readonly) NSString *CIFilterName;
@property (nonatomic, readonly) long long latestVersion;
@property (nonatomic, readonly) long long lightingVersion;
@property (nonatomic, readonly) _Bool isPortrait;
@property (nonatomic, readonly) _Bool isLegacy;

+ (id)_legacyEffectWithIdentifier:(id)arg1 CIFilterName:(id)arg2;
+ (id)_effectWithIdentifier:(id)arg1 CIFilterName:(id)arg2 displayName:(id)arg3;
+ (id)_lightingEffectWithIdentifier:(id)arg1 CIFilterName:(id)arg2 lightingVersion:(long long)arg3;
+ (id)allEffects;
+ (id)standardSupportedEffects;
+ (id)allSupportedEffects;
+ (_Bool)isEffectNoneForIdentifier:(id)arg1;
+ (_Bool)isEffectWithIdentifier:(id)arg1 equalToEffectWithIdentifier:(id)arg2;
+ (unsigned long long)_indexOfEffectWithIdentifier:(id)arg1;
+ (id)effectWithIdentifier:(id)arg1;
+ (id)effectWithCIFilterName:(id)arg1;

- (id)description;
- (id)newEffectFilter;

@end
