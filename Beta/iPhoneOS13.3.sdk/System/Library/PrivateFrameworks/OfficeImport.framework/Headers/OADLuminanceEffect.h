/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <OfficeImport/OADBlipEffect.h>

__attribute__((visibility("hidden")))
@interface OADLuminanceEffect : OADBlipEffect

{
    float mBrightness;
    float mContrast;
}

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (float)brightness;
- (void)setBrightness:(float)arg1;
- (float)contrast;
- (void)setContrast:(float)arg1;

@end
