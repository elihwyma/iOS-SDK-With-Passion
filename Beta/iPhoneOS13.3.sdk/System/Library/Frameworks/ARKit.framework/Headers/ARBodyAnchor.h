/*
 Image: /System/Library/Frameworks/ARKit.framework/ARKit
 */

#import <ARKit/ARAnchor.h>

@class ARBody2D, ARCoreRESkeletonResult, ARSkeleton3D, NSString;

@interface ARBodyAnchor : ARAnchor

{
    _Bool _tracked;
    double _estimatedScaleFactor;
    ARCoreRESkeletonResult *_skeletonData;
    ARBody2D *_referenceBody;
    ARSkeleton3D *_skeleton;
}

@property (nonatomic, readonly) ARBody2D *referenceBody;
@property (nonatomic, readonly) ARSkeleton3D *skeleton;
@property (nonatomic, readonly) double estimatedScaleFactor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) _Bool isTracked;

+ (_Bool)supportsSecureCoding;

- (_Bool)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithAnchor:(id)arg1;
- (id)copyWithTrackedState:(_Bool)arg1;
- (id)initWithIdentifier:(id)arg1 transform:(CDStruct_14d5dc5e)arg2 tracked:(_Bool)arg3 skeletonData:(id)arg4;
- (_Bool)isEqualToARBodyAnchor:(id)arg1;

@end
