/*
 Image: /System/Library/Frameworks/ARKit.framework/ARKit
 */

#import <Foundation/NSObject.h>

@class ARPointCloud;

@interface ARKeyFrame : NSObject

{
    ARPointCloud *_featurePoints;
    CDStruct_8e0628e6 _cameraIntrinsics;
    CDStruct_14d5dc5e _transform;
}

@property (nonatomic, readonly) CDStruct_14d5dc5e transform;
@property (nonatomic, readonly) ARPointCloud *featurePoints;
@property (nonatomic) CDStruct_8e0628e6 cameraIntrinsics;

- (id)description;
- (id)initWithKeyframeData:(CDStruct_e7712b4b *)arg1 featurePoints:(id)arg2 referenceOriginTransform:(CDStruct_14d5dc5e)arg3;

@end
