/*
 Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

#import <VectorKit/Swift-Protocol.h>

@class GEOMapRegion;

@protocol VKCameraController <Swift>

@property (nonatomic) CDStruct_c3b9c2ee centerCoordinate;
@property (nonatomic) double distanceFromCenterCoordinate;
@property (nonatomic) double heading;
@property (nonatomic) double pitch;
@property (nonatomic, readonly) GEOMapRegion *mapRegion;
@property (nonatomic, readonly) double altitude;
@property (nonatomic, readonly) double maxPitch;
@property (nonatomic, readonly) _Bool isPitched;
@property (nonatomic, readonly) _Bool isRotated;
@property (nonatomic, readonly) _Bool isFullyPitched;
@property (nonatomic, readonly) struct MapDataAccess *mapDataAccess;
@property (nonatomic, readonly) struct AnimationRunner *animationRunner;
@property (nonatomic, readonly) struct RunLoopController *runLoopController;

- (unsigned short)viewportInfo;
- (unsigned short)currentZoomLevelForTileSize: /* Error: Ran out of types for this method. */;
- (unsigned short)zoomLevelAdjustmentForTileSize: /* Error: Ran out of types for this method. */;
- (unsigned short)topDownMinimumZoomLevelForTileSize: /* Error: Ran out of types for this method. */;
- (unsigned short)maximumZoomLevelForTileSize: /* Error: Ran out of types for this method. */;
- (unsigned short)canZoomInForTileSize: /* Error: Ran out of types for this method. */;
- (unsigned short)canZoomOutForTileSize: /* Error: Ran out of types for this method. */;
- (unsigned short)minimumZoomLevelForTileSize: /* Error: Ran out of types for this method. */;
- (unsigned short)restoreViewportFromInfo: /* Error: Ran out of types for this method. */;

@end
