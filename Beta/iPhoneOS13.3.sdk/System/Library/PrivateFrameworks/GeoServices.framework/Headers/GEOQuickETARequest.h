/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <NSObject.h>

@class GEOAutomobileOptions, GEOComposedWaypoint, GEOLocation, GEOTransitOptions, GEOWalkingOptions, NSArray, NSDate, NSString;

@interface GEOQuickETARequest : NSObject

{
    NSString *_requestingAppIdentifier;
    GEOComposedWaypoint *_sourceWaypoint;
    GEOComposedWaypoint *_destinationWaypoint;
    NSDate *_departureDate;
    NSDate *_arrivalDate;
    int _transportType;
    GEOLocation *_currentLocation;
    _Bool _includeDistance;
    GEOAutomobileOptions *_automobileOptions;
    GEOTransitOptions *_transitOptions;
    GEOWalkingOptions *_walkingOptions;
    NSArray *_additionalTransportTypesRequested;
}

@property (retain, nonatomic) NSString *requestingAppIdentifier;
@property (nonatomic, readonly) GEOComposedWaypoint *sourceWaypoint;
@property (nonatomic, readonly) GEOComposedWaypoint *destinationWaypoint;
@property (nonatomic, readonly) NSDate *departureDate;
@property (nonatomic, readonly) NSDate *arrivalDate;
@property (nonatomic, readonly) int transportType;
@property (nonatomic, readonly) GEOLocation *currentLocation;
@property (nonatomic, readonly) _Bool includeDistance;
@property (nonatomic, readonly) GEOAutomobileOptions *automobileOptions;
@property (nonatomic, readonly) GEOTransitOptions *transitOptions;
@property (nonatomic, readonly) GEOWalkingOptions *walkingOptions;
@property (nonatomic, readonly) NSArray *additionalTransportTypesRequested;

- (id)description;
- (id)initWithSource:(id)arg1 toDestination:(id)arg2 departureDate:(id)arg3 transportType:(int)arg4 currentLocation:(id)arg5 includeDistance:(_Bool)arg6;
- (id)_defaultRequestingAppIdentifier;
- (id)initWithSource:(id)arg1 toDestination:(id)arg2 arrivalDate:(id)arg3 transportType:(int)arg4 currentLocation:(id)arg5 includeDistance:(_Bool)arg6;
- (id)initWithSource:(id)arg1 toDestination:(id)arg2 departureDate:(id)arg3 transportType:(int)arg4 currentLocation:(id)arg5;
- (id)initWithSource:(id)arg1 toDestination:(id)arg2 arrivalDate:(id)arg3 transportType:(int)arg4 currentLocation:(id)arg5;
- (id)initWithSource:(id)arg1 toDestination:(id)arg2 departureDate:(id)arg3 currentLocation:(id)arg4 includeDistance:(_Bool)arg5 automobileOptions:(id)arg6 transitOptions:(id)arg7 walkingOptions:(id)arg8;
- (id)initWithSource:(id)arg1 toDestination:(id)arg2 arrivalDate:(id)arg3 currentLocation:(id)arg4 includeDistance:(_Bool)arg5 automobileOptions:(id)arg6 transitOptions:(id)arg7 walkingOptions:(id)arg8;
- (id)initWithSource:(id)arg1 toDestination:(id)arg2 departureDate:(id)arg3 transportType:(int)arg4 currentLocation:(id)arg5 includeDistance:(_Bool)arg6 additionalTransportTypesRequested:(id)arg7;
- (id)initWithSource:(id)arg1 toDestination:(id)arg2 arrivalDate:(id)arg3 transportType:(int)arg4 currentLocation:(id)arg5 includeDistance:(_Bool)arg6 additionalTransportTypesRequested:(id)arg7;
- (id)initWithSource:(id)arg1 toDestination:(id)arg2 departureDate:(id)arg3 transportType:(int)arg4 currentLocation:(id)arg5 includeDistance:(_Bool)arg6 additionalTransportTypesRequested:(id)arg7 automobileOptions:(id)arg8 transitOptions:(id)arg9 walkingOptions:(id)arg10;
- (id)initWithSource:(id)arg1 toDestination:(id)arg2 arrivalDate:(id)arg3 transportType:(int)arg4 currentLocation:(id)arg5 includeDistance:(_Bool)arg6 additionalTransportTypesRequested:(id)arg7 automobileOptions:(id)arg8 transitOptions:(id)arg9 walkingOptions:(id)arg10;

@end
