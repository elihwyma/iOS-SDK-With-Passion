/*
 Image: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
 */

#import <NeutrinoCore/NUImageTransform.h>

@interface NUImageTransform3D : NUImageTransform

{
    CDStruct_14d5dc5e _transformInv;
    CDStruct_14d5dc5e _transform;
}

@property (readonly) CDStruct_14d5dc5e transform;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (struct CGPoint)transformPoint:(struct CGPoint)arg1;
- (id)inverseTransform;
- (id)initWithAffineTransform:(struct CGAffineTransform)arg1;
- (id)initWithTransform3D:(CDStruct_14d5dc5e)arg1;
- (void)nu_updateDigest:(id)arg1;
- (id)transformByScaleX:(double)arg1 scaleY:(double)arg2;
- (id)transformByTranslateX:(double)arg1 translateY:(double)arg2;
- (id)transformByRotateZ:(double)arg1;
- (id)transformByRotateX:(double)arg1 y:(double)arg2 z:(double)arg3;
- (CDStruct_14d5dc5e)transformMatrix:(CDStruct_14d5dc5e)arg1;
- (_Bool)isEqualToGeometryTransform3D:(id)arg1;

@end
