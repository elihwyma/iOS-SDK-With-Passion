/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <OfficeImport/OADShadowEffect.h>

__attribute__((visibility("hidden")))
@interface OADOuterShadowEffect : OADShadowEffect

{
    float mXScale;
    float mYScale;
    float mXSkew;
    float mYSkew;
    int mAlignment;
    _Bool mRotateWithShape;
}

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (int)alignment;
- (void)setAlignment:(int)arg1;
- (float)xScale;
- (float)yScale;
- (void)setXScale:(float)arg1;
- (void)setYScale:(float)arg1;
- (void)setRotateWithShape:(_Bool)arg1;
- (_Bool)rotateWithShape;
- (float)xSkew;
- (void)setXSkew:(float)arg1;
- (float)ySkew;
- (void)setYSkew:(float)arg1;

@end
