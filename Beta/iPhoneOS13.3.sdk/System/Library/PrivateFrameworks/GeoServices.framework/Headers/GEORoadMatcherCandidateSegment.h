/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <NSObject.h>

@class GEOMapFeatureJunction, GEOMapFeatureRoad;

__attribute__((visibility("hidden")))
@interface GEORoadMatcherCandidateSegment : NSObject

{
    double _score;
    GEOMapFeatureRoad *_road;
    CDStruct_2c43369c _coordinateOnSegment;
    double _distanceFromSegment;
    double _segmentAngle;
    GEOMapFeatureJunction *_junction;
    double _distanceInMetersFromJunction;
}

@property (nonatomic, readonly) double score;
@property (nonatomic, readonly) GEOMapFeatureRoad *road;
@property (nonatomic, readonly) CDStruct_c3b9c2ee coordinateOnSegment;
@property (nonatomic, readonly) double distanceFromSegment;
@property (nonatomic, readonly) double segmentAngle;
@property (nonatomic, readonly) GEOMapFeatureJunction *junction;
@property (nonatomic, readonly) double distanceFromJunction;

- (id)initWithCoordinate:(CDStruct_c3b9c2ee)arg1 angle:(double)arg2 road:(id)arg3 startCoordinate:(CDStruct_c3b9c2ee)arg4 endCoordinate:(CDStruct_c3b9c2ee)arg5;

@end
