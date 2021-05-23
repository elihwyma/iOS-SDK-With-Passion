/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <OfficeImport/OADEffect.h>

__attribute__((visibility("hidden")))
@interface OADReflectionEffect : OADEffect

{
    float mBlurRadius;
    float mStartOpacity;
    float mStartPosition;
    float mEndOpacity;
    float mEndPosition;
    float mDistance;
    float mDirection;
    float mFadeDirection;
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
- (float)direction;
- (void)setDirection:(float)arg1;
- (void)setBlurRadius:(float)arg1;
- (float)blurRadius;
- (void)setDistance:(float)arg1;
- (float)distance;
- (float)startPosition;
- (void)setStartPosition:(float)arg1;
- (float)endPosition;
- (float)xScale;
- (float)yScale;
- (void)setXScale:(float)arg1;
- (void)setYScale:(float)arg1;
- (void)setEndPosition:(float)arg1;
- (void)setRotateWithShape:(_Bool)arg1;
- (void)setStyleColor:(id)arg1;
- (_Bool)rotateWithShape;
- (float)xSkew;
- (void)setXSkew:(float)arg1;
- (float)ySkew;
- (void)setYSkew:(float)arg1;
- (float)startOpacity;
- (float)endOpacity;
- (float)fadeDirection;
- (void)setStartOpacity:(float)arg1;
- (void)setEndOpacity:(float)arg1;
- (void)setFadeDirection:(float)arg1;

@end
