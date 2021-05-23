/*
 Image: /System/Library/Frameworks/ARKit.framework/ARKit
 */

#import <ARKit/ARSkeleton.h>

@class ARCoreRESkeletonResult;

@interface ARSkeleton3D : ARSkeleton

{
    ARCoreRESkeletonResult *_skeleton;
}

@property (nonatomic, readonly) ARCoreRESkeletonResult *coreRESkeleton;
@property (nonatomic, readonly) const CDStruct_14d5dc5e *jointModelTransforms;
@property (nonatomic, readonly) const CDStruct_14d5dc5e *jointLocalTransforms;

+ (_Bool)supportsSecureCoding;

- (_Bool)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)definition;
- (unsigned long long)jointCount;
- (_Bool)isJointTracked:(long long)arg1;
- (id)initWithCoreRESkeletonResult:(id)arg1;
- (CDStruct_14d5dc5e)modelTransformForJointName:(id)arg1;
- (CDStruct_14d5dc5e)localTransformForJointName:(id)arg1;

@end
