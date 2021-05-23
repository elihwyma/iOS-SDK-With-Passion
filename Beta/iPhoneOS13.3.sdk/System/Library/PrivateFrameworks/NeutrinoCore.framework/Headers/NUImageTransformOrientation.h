/*
 Image: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
 */

#import <NeutrinoCore/NUImageTransform.h>

@interface NUImageTransformOrientation : NUImageTransform

{
    CDStruct_d58201db _inputImageSize;
    CDStruct_f261e59c _inputImageOrigin;
    long long _orientation;
}

@property (readonly) long long orientation;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (struct CGPoint)transformPoint:(struct CGPoint)arg1;
- (id)inverseTransform;
- (void)nu_updateDigest:(id)arg1;
- (CDStruct_14d5dc5e)transformMatrix:(CDStruct_14d5dc5e)arg1;
- (id)initWithOrientation:(long long)arg1 imageSize:(CDStruct_912cb5d2)arg2;
- (id)initWithOrientation:(long long)arg1 imageSize:(CDStruct_912cb5d2)arg2 imageOrigin:(CDStruct_912cb5d2)arg3;
- (_Bool)isEqualToGeometryTransformOrientation:(id)arg1;

@end
