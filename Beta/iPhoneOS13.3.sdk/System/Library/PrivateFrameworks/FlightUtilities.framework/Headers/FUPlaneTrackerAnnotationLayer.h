/*
 Image: /System/Library/PrivateFrameworks/FlightUtilities.framework/FlightUtilities
 */

#import <CALayer.h>

__attribute__((visibility("hidden")))
@interface FUPlaneTrackerAnnotationLayer : CALayer

{
    CALayer *_planeImageLayer;
    struct CLLocationCoordinate2D _startLocation;
    struct CLLocationCoordinate2D _endLocation;
}

@property (nonatomic) struct CLLocationCoordinate2D startLocation;
@property (nonatomic) struct CLLocationCoordinate2D endLocation;
@property (nonatomic) double currentProgress;
@property (readonly) struct CLLocationCoordinate2D currentLocation;
@property (weak, nonatomic) CALayer *planeImageLayer;

- (id)init;
- (void)updatePlaneStateForProgress:(double)arg1;
- (void)setPlaneImage:(id)arg1;
- (struct CLLocationCoordinate2D)geodesicLocationForStartPosition:(struct CLLocationCoordinate2D)arg1 endPosition:(struct CLLocationCoordinate2D)arg2 positionPercentage:(double)arg3;
- (double)defaultHeadingForStartPosition:(struct CLLocationCoordinate2D)arg1 endPosition:(struct CLLocationCoordinate2D)arg2 positionPercentage:(double)arg3;

@end
