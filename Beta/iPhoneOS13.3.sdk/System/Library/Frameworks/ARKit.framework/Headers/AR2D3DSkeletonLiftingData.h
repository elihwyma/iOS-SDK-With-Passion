/*
 Image: /System/Library/Frameworks/ARKit.framework/ARKit
 */

#import <Foundation/NSObject.h>

#import <ARKit/Swift-Protocol.h>

@class MISSING_TYPE;

@interface AR2D3DSkeletonLiftingData : NSObject <Swift>

{
    struct vector<float __attribute__((ext_vector_type(2))), std::__1::allocator<float __attribute__((ext_vector_type(2)))>> _rawJointsUsedForLifting;
    struct vector<float __attribute__((ext_vector_type(2))), std::__1::allocator<float __attribute__((ext_vector_type(2)))>> _rotatedJointsUsedForLifting;
    struct array<float, 32> _multiArray;
    long long _rotationNeeded;
}

@property (nonatomic, readonly) const MISSING_TYPE **joints;
@property (nonatomic, readonly) unsigned long long jointCount;
@property (nonatomic, readonly) const float *liftingData3D;
@property (nonatomic, readonly) unsigned long long liftingData3DElementCount;

+ (_Bool)supportsSecureCoding;

- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id).cxx_construct;
- (id)initWithHumanForLifting:(const struct Human *)arg1 imageSize:(struct CGSize)arg2 rotation:(long long)arg3 croppedRect:(struct CGRect)arg4;
- (void)_rotateAndUndoCroppingFromRect:(struct CGRect)arg1;
- (void)_prepareLiftingInput:(const struct Human *)arg1 jointTrackingState:(const array_d2feeb34 *)arg2 imageSize:(struct CGSize)arg3 pMultiArray:(float *)arg4;
- (id)initWithJoints:(const MISSING_TYPE **)arg1 numberOfJoints:(unsigned long long)arg2 rotation:(long long)arg3 croppedRect:(struct CGRect)arg4 liftingData3D:(const float *)arg5 liftingData3DElementCount:(unsigned long long)arg6;

@end
