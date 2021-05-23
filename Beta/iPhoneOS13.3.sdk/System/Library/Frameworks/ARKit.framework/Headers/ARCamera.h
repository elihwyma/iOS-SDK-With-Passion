/*
 Image: /System/Library/Frameworks/ARKit.framework/ARKit
 */

#import <Foundation/NSObject.h>

#import <ARKit/Swift-Protocol.h>

@class MISSING_TYPE;

@interface ARCamera : NSObject <Swift>

{
    float _exposureOffset;
    long long _trackingState;
    long long _trackingStateReason;
    double _exposureDuration;
    unsigned long long _lensType;
    long long _devicePosition;
    struct CGSize _imageResolution;
    MISSING_TYPE *_tangentialDistortion;
    MISSING_TYPE *_radialDistortion;
    CDStruct_8e0628e6 _intrinsics;
    CDStruct_14d5dc5e _transform;
}

@property (nonatomic) struct CGSize imageResolution;
@property (nonatomic) double exposureDuration;
@property (nonatomic) float exposureOffset;
@property (nonatomic) CDStruct_8e0628e6 intrinsics;
@property (nonatomic) unsigned long long lensType;
@property (nonatomic) MISSING_TYPE *radialDistortion;
@property (nonatomic) MISSING_TYPE *tangentialDistortion;
@property (nonatomic) CDStruct_14d5dc5e transform;
@property (nonatomic) long long trackingState;
@property (nonatomic) long long trackingStateReason;
@property (nonatomic) long long devicePosition;
@property (nonatomic, readonly) MISSING_TYPE *eulerAngles;
@property (nonatomic, readonly) CDStruct_14d5dc5e projectionMatrix;

+ (_Bool)supportsSecureCoding;

- (_Bool)isEqual:(id)arg1;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)debugQuickLookObject;
- (struct CGPoint)focalLength;
- (id)_description:(_Bool)arg1;
- (struct CGPoint)principalPoint;
- (CDStruct_14d5dc5e)projectionMatrixForOrientation:(long long)arg1 viewportSize:(struct CGSize)arg2 zNear:(double)arg3 zFar:(double)arg4;
- (CDStruct_14d5dc5e)viewMatrixForOrientation:(long long)arg1;
- (id)initWithIntrinsics:(CDStruct_8e0628e6)arg1 imageResolution:(struct CGSize)arg2;
- (CDStruct_14d5dc5e)displayCenterTransform;
- (struct CGPoint)projectPoint:(long long)arg1 orientation:(struct CGSize)arg2 viewportSize: /* Error: Ran out of types for this method. */;
- (MISSING_TYPE *)unprojectPoint:(struct CGPoint)arg1 ontoPlaneWithTransform:(CDStruct_14d5dc5e)arg2 orientation:(long long)arg3 viewportSize:(struct CGSize)arg4;

@end
