/*
 Image: /System/Library/Frameworks/ARKit.framework/ARKit
 */

#import <Foundation/NSObject.h>

#import <ARKit/Swift-Protocol.h>

@class AR2DSkeletonDetectionResult, MISSING_TYPE;

@interface AR3DSkeletonDetectionResult : NSObject <Swift>

{
    vector_1cb3ea33 _jointsVector;
    AR2DSkeletonDetectionResult *_skeletonDetectionResult2D;
}

@property (nonatomic, readonly) unsigned long long jointCount;
@property (nonatomic, readonly) const MISSING_TYPE **joints;
@property (nonatomic, readonly) AR2DSkeletonDetectionResult *skeletonDetectionResult2D;

+ (_Bool)supportsSecureCoding;
+ (id)childrenIndices;
+ (id)jointNames;
+ (id)parentIndices;

- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id).cxx_construct;
- (id)createResultScaledByFactor:(float)arg1;
- (id)initWithJoints:(MISSING_TYPE **)arg1 numberOfJoints:(unsigned long long)arg2 referenceDetectionResult:(id)arg3;
- (_Bool)isJointTracked:(long long)arg1;

@end
