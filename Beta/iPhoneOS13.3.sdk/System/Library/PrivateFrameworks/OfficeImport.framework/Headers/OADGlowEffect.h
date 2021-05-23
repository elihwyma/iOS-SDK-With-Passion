/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <OfficeImport/OADEffect.h>

@class OADColor;

__attribute__((visibility("hidden")))
@interface OADGlowEffect : OADEffect

{
    OADColor *mColor;
    float mRadius;
}

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)color;
- (void)setColor:(id)arg1;
- (float)radius;
- (void)setRadius:(float)arg1;

@end
