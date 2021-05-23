/*
 Image: /System/Library/PrivateFrameworks/CameraEffectsKit.framework/CameraEffectsKit
 */

#import <Foundation/NSObject.h>

@class MISSING_TYPE;

@interface JTFaceAnchor : NSObject

{
    double _focalLength;
    struct CGRect _faceRect;
    CDStruct_14d5dc5e _transform;
    CDStruct_14d5dc5e _cameraTransform;
}

@property (nonatomic) CDStruct_14d5dc5e cameraTransform;
@property (nonatomic) CDStruct_14d5dc5e transform;
@property (nonatomic) struct CGRect faceRect;
@property (nonatomic) double focalLength;
@property (nonatomic, readonly) MISSING_TYPE *screenRelativePosition;
@property (nonatomic, readonly) double rollAngle;

+ (_Bool)supportsSecureCoding;
+ (id)faceAnchorWithARFrame:(id)arg1 forInterfaceOrientation:(long long)arg2 withFaceRectScaleFactor:(struct CGSize)arg3;
+ (CDStruct_14d5dc5e)CFX_transformFaceAnchor:(CDStruct_14d5dc5e)arg1 withDegreeOfRotation:(double)arg2;
+ (CDStruct_14d5dc5e)CFX_mirrorPoseTransformLeftRight:(CDStruct_14d5dc5e)arg1;
+ (MISSING_TYPE *)CFX_zyxEulerAnglesFromMatrix:(CDStruct_14d5dc5e)arg1;

- (id)debugDescription;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithTransform:(CDStruct_14d5dc5e)arg1 forFaceRect:(struct CGRect)arg2 needsMirroring:(_Bool)arg3 withFaceRectScaleFactor:(struct CGSize)arg4;
- (double)focalLengthForViewport:(struct CGSize)arg1;

@end
