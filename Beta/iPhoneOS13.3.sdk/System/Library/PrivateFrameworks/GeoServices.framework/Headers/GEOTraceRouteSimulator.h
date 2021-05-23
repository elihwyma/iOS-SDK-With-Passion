/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <NSObject.h>

@class GEOComposedRoute, GEODirectionsRequest, GEODirectionsResponse, GEORouteAttributes, NSArray, NSDate, NSDictionary, NSMutableArray;

@interface GEOTraceRouteSimulator : NSObject

{
    double _deltaT;
    double _horizontalAccuracy;
    double _verticalAccuracy;
    NSDate *_startTime;
    GEOComposedRoute *_route;
    GEODirectionsRequest *_request;
    GEODirectionsResponse *_response;
    GEORouteAttributes *_routeAttributes;
    unsigned int _routeIndex;
    CDStruct_2c43369c _walkingStart;
    CDStruct_2c43369c _walkingEnd;
    CDStruct_2c43369c _origin;
    CDStruct_2c43369c _destination;
    NSMutableArray *_mutableLocations;
    NSArray *_locations;
    NSDictionary *_pointTimestamps;
    double _duration;
}

@property (nonatomic, readonly) GEOComposedRoute *route;
@property (nonatomic, readonly) GEODirectionsRequest *request;
@property (nonatomic, readonly) GEODirectionsResponse *response;
@property (nonatomic, readonly) GEORouteAttributes *routeAttributes;
@property (nonatomic, readonly) unsigned int routeIndex;
@property (nonatomic) CDStruct_c3b9c2ee origin;
@property (nonatomic) CDStruct_c3b9c2ee destination;
@property (retain, nonatomic) NSMutableArray *mutableLocations;
@property (retain, nonatomic) NSArray *locations;
@property (nonatomic) double duration;
@property (nonatomic) double deltaT;
@property (nonatomic) double horizontalAccuracy;
@property (nonatomic) double verticalAccuracy;
@property (retain, nonatomic) NSDate *startTime;
@property (nonatomic) CDStruct_c3b9c2ee walkingStart;
@property (nonatomic) CDStruct_c3b9c2ee walkingEnd;
@property (nonatomic, readonly) NSDictionary *pointTimestamps;

- (id)initWithRoute:(id)arg1 request:(id)arg2 response:(id)arg3 routeAttributes:(id)arg4 routeIndex:(unsigned int)arg5;
- (void)addLocation:(CDStruct_c3b9c2ee)arg1 withCourse:(double)arg2 altitude:(double)arg3 speed:(double)arg4 transport:(int)arg5;
- (void)generateLocationsWithSpeedOverride:(double)arg1;
- (double)estimateDuration;
- (void)simulateWalkingFrom:(CDStruct_c3b9c2ee)arg1 to:(CDStruct_c3b9c2ee)arg2;
- (id)initWithRoute:(id)arg1 request:(id)arg2 response:(id)arg3 routeAttributes:(id)arg4 routeIndex:(unsigned int)arg5 locations:(id)arg6;
- (void)generateLocations;

@end
