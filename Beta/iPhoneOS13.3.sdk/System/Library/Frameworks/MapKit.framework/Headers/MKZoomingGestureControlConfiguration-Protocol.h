/*
 Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

#import <MapKit/Swift-Protocol.h>

@protocol MKZoomingGestureControlConfiguration <Swift>

@property (nonatomic, readonly) double decelerationThreshold;
@property (nonatomic, readonly) double maximumZoomInVelocity;
@property (nonatomic, readonly) double maximumZoomOutVelocity;
@property (nonatomic, readonly) double zoomOutFrictionScale;
@property (nonatomic, readonly) double zoomDraggingResistance;

@end
