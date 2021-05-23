/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <OfficeImport/OADShadowEffect.h>

__attribute__((visibility("hidden")))
@interface OADPresetShadowEffect : OADShadowEffect

{
    int mPresetShadowType;
}

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)setPresetShadowType:(int)arg1;
- (int)presetShadowType;
- (id)equivalentOuterShadowEffect;

@end
