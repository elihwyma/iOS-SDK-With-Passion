/*
 Image: /System/Library/PrivateFrameworks/AssetViewer.framework/AssetViewer
 */

#import <Foundation/NSObject.h>

@class MISSING_TYPE;

@interface ASVHitTestResult : NSObject

{
    long long _type;
    MISSING_TYPE *_imagePoint;
    MISSING_TYPE *_worldPosition;
    MISSING_TYPE *_assetPosition;
    MISSING_TYPE *_cameraPosition;
    MISSING_TYPE *_synthesizedPlaneNormal;
}

@property (nonatomic) long long type;
@property (nonatomic, readonly) MISSING_TYPE *worldPosition;
@property (nonatomic, readonly) MISSING_TYPE *assetPosition;
@property (nonatomic, readonly) MISSING_TYPE *cameraPosition;
@property (nonatomic, readonly) MISSING_TYPE *imagePoint;
@property (nonatomic, readonly) float distanceFromAsset;
@property (nonatomic, readonly) float distanceFromCamera;
@property (nonatomic, readonly) _Bool isRealPlane;
@property (nonatomic) MISSING_TYPE *synthesizedPlaneNormal;
@property (nonatomic, readonly) _Bool isSynthesizedVeritcalPlane;

- (MISSING_TYPE *)cameraToPosition;
- (id)initWithType:(long long)arg1 worldPosition:imagePoint:assetPosition:cameraPosition: /* Error: Ran out of types for this method. */;

@end
