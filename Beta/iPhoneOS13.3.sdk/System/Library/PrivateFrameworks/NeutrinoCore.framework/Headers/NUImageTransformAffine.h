/*
 Image: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
 */

#import <NeutrinoCore/NUImageTransform.h>

@interface NUImageTransformAffine : NUImageTransform

{
    struct CGAffineTransform _transformInv;
    struct CGAffineTransform _transform;
}

@property (readonly) struct CGAffineTransform transform;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (struct CGPoint)transformPoint:(struct CGPoint)arg1;
- (id)inverseTransform;
- (id)initWithAffineTransform:(struct CGAffineTransform)arg1;
- (void)nu_updateDigest:(id)arg1;
- (id)transformByScaleX:(double)arg1 scaleY:(double)arg2;
- (id)transformByTranslateX:(double)arg1 translateY:(double)arg2;
- (id)transformByRotateZ:(double)arg1;
- (CDStruct_14d5dc5e)transformMatrix:(CDStruct_14d5dc5e)arg1;
- (_Bool)isEqualToGeometryTransformAffine:(id)arg1;

@end
