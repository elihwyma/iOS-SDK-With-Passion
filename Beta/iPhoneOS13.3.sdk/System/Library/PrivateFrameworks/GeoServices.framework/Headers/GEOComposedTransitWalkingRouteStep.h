/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <GeoServices/GEOComposedWalkingRouteStep.h>

@class GEOTransitStep, NSArray;

@protocol GEOTransitArtworkDataSource, GEOTransitRoutingIncidentMessage;

@interface GEOComposedTransitWalkingRouteStep : GEOComposedWalkingRouteStep

{
    GEOTransitStep *_transitStep;
    CDStruct_2c43369c _startCoordinate;
    CDStruct_2c43369c _endCoordinate;
    id <GEOTransitRoutingIncidentMessage> _steppingIncidentMessage;
    id <GEOTransitRoutingIncidentMessage> _routeDetailsIncidentMessage;
    NSArray *_steppingArtwork;
    NSArray *_routeDetailsPrimaryArtwork;
    id <GEOTransitArtworkDataSource> _routeDetailsSecondaryArtwork;
}

@property (nonatomic, readonly) id <GEOTransitRoutingIncidentMessage> steppingIncidentMessage;
@property (nonatomic, readonly) id <GEOTransitRoutingIncidentMessage> routeDetailsIncidentMessage;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (unsigned int)distance;
- (id)instructions;
- (id)transitStep;
- (CDStruct_39925896)startGeoCoordinate;
- (CDStruct_39925896)endGeoCoordinate;
- (_Bool)isArrivalStep;
- (id)routeDetailsPrimaryArtwork;
- (id)routeDetailsSecondaryArtwork;
- (id)steppingArtwork;
- (id)initWithComposedRoute:(id)arg1 decoderData:(id)arg2 transitStep:(id)arg3 stepIndex:(unsigned long long)arg4 geoStep:(id)arg5 pointRange:(struct _NSRange)arg6 maneuverPointRange:(struct _NSRange)arg7;
- (id)initWithComposedRoute:(id)arg1 decoderData:(id)arg2 transitStep:(id)arg3 stepIndex:(unsigned long long)arg4 startCoordinate:(CDStruct_c3b9c2ee)arg5 endCoordinate:(CDStruct_c3b9c2ee)arg6 pointRange:(struct _NSRange)arg7;
- (void)_commonInitWithDecoderData:(id)arg1;

@end
