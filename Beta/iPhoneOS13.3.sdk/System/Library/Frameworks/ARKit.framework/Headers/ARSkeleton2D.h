/*
 Image: /System/Library/Frameworks/ARKit.framework/ARKit
 */

#import <ARKit/ARSkeleton.h>

@class AR2DSkeletonDetectionResult, MISSING_TYPE;

@interface ARSkeleton2D : ARSkeleton

{
    AR2DSkeletonDetectionResult *_skeleton;
}

@property (nonatomic, readonly) const MISSING_TYPE **jointLandmarks;

+ (_Bool)supportsSecureCoding;

- (_Bool)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)definition;
- (unsigned long long)jointCount;
- (_Bool)isJointTracked:(long long)arg1;
- (id)initWithDetectedSkeleton:(id)arg1;
- (MISSING_TYPE *)landmarkForJointNamed:(id)arg1;

@end
