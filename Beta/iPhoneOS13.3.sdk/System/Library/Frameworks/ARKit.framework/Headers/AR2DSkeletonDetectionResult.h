/*
 Image: /System/Library/Frameworks/ARKit.framework/ARKit
 */

#import <Foundation/NSObject.h>

#import <ARKit/Swift-Protocol.h>

@class AR2D3DSkeletonLiftingData, MISSING_TYPE;

@interface AR2DSkeletonDetectionResult : NSObject <Swift>

{
    struct vector<float __attribute__((ext_vector_type(2))), std::__1::allocator<float __attribute__((ext_vector_type(2)))>> _rawJoints;
    struct vector<float __attribute__((ext_vector_type(2))), std::__1::allocator<float __attribute__((ext_vector_type(2)))>> _rotatedJoints;
    struct vector<unsigned char, std::__1::allocator<unsigned char>> _jointTrackingStates;
    long long _rotationNeeded;
    AR2D3DSkeletonLiftingData *_liftingData;
}

@property (nonatomic, readonly) unsigned long long jointCount;
@property (nonatomic, readonly) const MISSING_TYPE **joints;
@property (nonatomic, readonly) const char *jointTrackingStates;
@property (nonatomic, readonly) const MISSING_TYPE **rawJointsOutput;
@property (nonatomic, readonly) const float *liftingData3D;
@property (nonatomic, readonly) unsigned long long liftingJointCount;
@property (nonatomic, readonly) AR2D3DSkeletonLiftingData *liftingData;

+ (_Bool)supportsSecureCoding;

- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id).cxx_construct;
- (id)initWithJoints:(const MISSING_TYPE **)arg1 trackingStates:(const char *)arg2 numberOfJoints:(unsigned long long)arg3 rotation:(long long)arg4 croppedRect:(struct CGRect)arg5 liftingData:(id)arg6;
- (float)computeDistanceBetweenSkeletonDetectionResult:(id)arg1;

@end
