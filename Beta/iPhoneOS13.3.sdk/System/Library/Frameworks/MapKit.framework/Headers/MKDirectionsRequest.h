/*
 Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

#import <Foundation/NSObject.h>

@class GEOAutomobileOptions, GEOTransitOptions, GEOWalkingOptions, MKMapItem, NSArray, NSDate;

@interface MKDirectionsRequest : NSObject

{
    MKMapItem *_source;
    MKMapItem *_destination;
    unsigned long long _transportType;
    _Bool _requestsAlternateRoutes;
    _Bool _includeTravelTimes;
    _Bool _includeTrafficIncidents;
    _Bool _includeZilchRoutePoints;
    _Bool _includeBasicRoutePoints;
    _Bool _includeEntryPoints;
    _Bool _includeDistanceInETA;
    NSDate *_departureDate;
    NSDate *_arrivalDate;
    NSArray *_additionalTransportTypesRequested;
    GEOAutomobileOptions *_automobileOptions;
    GEOTransitOptions *_transitOptions;
    GEOWalkingOptions *_walkingOptions;
}

@property (nonatomic, getter=_includeDistanceInETA, setter=_setIncludeDistanceInETA:) _Bool includeDistanceInETA;
@property (retain, nonatomic, getter=_additionalTransportTypesRequested, setter=_setAdditionalTransportTypesRequested:) NSArray *additionalTransportTypesRequested;
@property (nonatomic, readonly) _Bool _includeTypicalRouteDuration;
@property (nonatomic, readonly) _Bool _includeTravelTimes;
@property (nonatomic, readonly) _Bool _includeTrafficIncidents;
@property (nonatomic, readonly) _Bool _includeZilchRoutePoints;
@property (nonatomic, readonly) _Bool _includeBasicRoutePoints;
@property (nonatomic, readonly) _Bool _includeEntryPoints;
@property (retain, nonatomic, getter=_automobileOptions, setter=_setAutomobileOptions:) GEOAutomobileOptions *automobileOptions;
@property (retain, nonatomic, getter=_transitOptions, setter=_setTransitOptions:) GEOTransitOptions *transitOptions;
@property (retain, nonatomic, getter=_walkingOptions, setter=_setWalkingOptions:) GEOWalkingOptions *walkingOptions;
@property (retain, nonatomic) MKMapItem *source;
@property (retain, nonatomic) MKMapItem *destination;

+ (_Bool)isDirectionsRequestURL:(id)arg1;

- (id)init;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithContentsOfURL:(id)arg1;
- (_Bool)writeToURL:(id)arg1 error:(id *)arg2;
- (id)dictionaryRepresentation;
- (unsigned long long)transportType;
- (id)arrivalDate;
- (id)departureDate;
- (id)_arrivalDate;
- (id)_departureDate;
- (void)setTransportType:(unsigned long long)arg1;
- (unsigned long long)_transportType;
- (void)setArrivalDate:(id)arg1;
- (id)_mapkit_initWithSource:(id)arg1 destination:(id)arg2 transportType:(unsigned long long)arg3 departureDate:(id)arg4 includeTravelTimes:(_Bool)arg5 includeTrafficIncidents:(_Bool)arg6 includeEntryPoints:(_Bool)arg7 includeRoutePoints:(_Bool)arg8;
- (_Bool)requestsAlternateRoutes;
- (void)setRequestsAlternateRoutes:(_Bool)arg1;
- (void)setDepartureDate:(id)arg1;
- (id)_mapkit_initWithSource:(id)arg1 destination:(id)arg2 transportType:(unsigned long long)arg3 departureDate:(id)arg4;
- (id)_mapkit_initWithSource:(id)arg1 destination:(id)arg2 transportType:(unsigned long long)arg3 arrivalDate:(id)arg4;
- (id)_mapkit_initWithDictionaryRepresentation:(id)arg1;
- (id)_mapkit_initWithSource:(id)arg1 destination:(id)arg2 transportType:(unsigned long long)arg3 arrivalDate:(id)arg4 includeTravelTimes:(_Bool)arg5 includeTrafficIncidents:(_Bool)arg6 includeEntryPoints:(_Bool)arg7 includeRoutePoints:(_Bool)arg8;
- (id)_mapkit_initWithAllTransportTypesSource:(id)arg1 destination:(id)arg2 departureDate:(id)arg3;
- (id)_mapkit_initWithAllTransportTypesSource:(id)arg1 destination:(id)arg2 arrivalDate:(id)arg3;

@end
