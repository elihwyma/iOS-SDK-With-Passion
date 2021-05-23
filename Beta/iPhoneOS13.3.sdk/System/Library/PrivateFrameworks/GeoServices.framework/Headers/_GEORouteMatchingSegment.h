/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <NSObject.h>

@class GEOComposedRouteStep;

__attribute__((visibility("hidden")))
@interface _GEORouteMatchingSegment : NSObject

{
    unsigned int _startPointIndex;
    CDStruct_2c43369c _startCoordinate;
    CDStruct_2c43369c _endCoordinate;
    GEOComposedRouteStep *_step;
}

@property (nonatomic) unsigned int startPointIndex;
@property (nonatomic) CDStruct_c3b9c2ee startCoordinate;
@property (nonatomic) CDStruct_c3b9c2ee endCoordinate;
@property (retain, nonatomic) GEOComposedRouteStep *step;

- (id)description;
- (double)distanceFromCoordinate:(CDStruct_c3b9c2ee)arg1 outCoordinateOnSegment:(CDStruct_c3b9c2ee *)arg2 outRouteCoordinate:(struct PolylineCoordinate *)arg3;

@end
