/*
 Image: /System/Library/PrivateFrameworks/AssetViewer.framework/AssetViewer
 */

#import <AssetViewer/ASVHitTestResult.h>

@class MISSING_TYPE, NSUUID;

@interface ASVRealHitTestResult : ASVHitTestResult

{
    NSUUID *_planeIdentifier;
    long long _alignment;
    MISSING_TYPE *_localPosition;
    CDStruct_14d5dc5e _worldTransform;
}

@property (nonatomic, readonly) NSUUID *planeIdentifier;
@property (nonatomic, readonly) long long alignment;
@property (nonatomic, readonly) CDStruct_14d5dc5e worldTransform;
@property (nonatomic, readonly) MISSING_TYPE *localPosition;
@property (nonatomic, readonly) float distanceFromFeaturePoint;

- (id)initWithHitTestResult:(id)arg1 imagePoint:assetPosition:cameraPosition: /* Error: Ran out of types for this method. */;
- (id)initWithType:(long long)arg1 worldPosition:(CDStruct_14d5dc5e)arg2 worldTransform:(id)arg3 localPosition:(long long)arg4 imagePoint:assetPosition:cameraPosition:planeIdentifier:planeAlignment: /* Error: Ran out of types for this method. */;

@end
