/*
 Image: /System/Library/Frameworks/ARKit.framework/ARKit
 */

#import <Foundation/NSObject.h>

#import <ARKit/Swift-Protocol.h>

@class AR3DSkeletonDetectionResult, NSUUID;

@interface ARCoreRESkeletonResult : NSObject <Swift>

{
    struct vector<simd_float4x4, std::__1::allocator<simd_float4x4>> _modelTransforms;
    struct vector<ARSRT, std::__1::allocator<ARSRT>> _localTransformsSRT;
    struct vector<simd_float4x4, std::__1::allocator<simd_float4x4>> _localTransforms;
    AR3DSkeletonDetectionResult *_liftingResult;
    NSUUID *_identifier;
    double _estimatedScaleFactor;
    CDStruct_14d5dc5e _visionTransform;
}

@property (nonatomic, readonly) NSUUID *identifier;
@property (nonatomic, readonly) unsigned long long jointTransformCount;
@property (nonatomic, readonly) const CDStruct_14d5dc5e *jointModelTransforms;
@property (nonatomic, readonly) const CDStruct_14d5dc5e *jointLocalTransforms;
@property (nonatomic, readonly) const CDStruct_0c4e353b *localJointTransformsSRT;
@property (nonatomic, readonly) AR3DSkeletonDetectionResult *liftedSkeletonData;
@property (nonatomic) CDStruct_14d5dc5e visionTransform;
@property (nonatomic) double estimatedScaleFactor;

+ (void)initialize;
+ (_Bool)supportsSecureCoding;
+ (id)jointNames;
+ (id)jointParentIndices;

- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id).cxx_construct;
- (id)initWithModelJointTransforms:(const CDStruct_14d5dc5e *)arg1 localJointTransformsSRT:(const CDStruct_0c4e353b *)arg2 numberOfTransforms:(unsigned long long)arg3 liftedSkeletonData:(id)arg4 identifier:(id)arg5;
- (_Bool)isJointTracked:(long long)arg1;

@end
