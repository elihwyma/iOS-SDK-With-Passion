/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <OfficeImport/OADEffect.h>

@class OADColor;

__attribute__((visibility("hidden")))
@interface OADShadowEffect : OADEffect

{
    OADColor *mColor;
    float mBlurRadius;
    float mDistance;
    float mAngle;
}

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)initWithType:(int)arg1;
- (id)color;
- (void)setColor:(id)arg1;
- (float)angle;
- (void)setAngle:(float)arg1;
- (void)setBlurRadius:(float)arg1;
- (float)blurRadius;
- (void)setDistance:(float)arg1;
- (float)distance;
- (void)setStyleColor:(id)arg1;
- (id)initWithShadowEffect:(id)arg1 type:(int)arg2;

@end
