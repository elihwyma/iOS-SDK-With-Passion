/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <GeoServices/GEOComposedRouteStep.h>

@class GEOPBTransitHall, GEOPBTransitStop, GEOTransitScheduleInfo, GEOTransitStep, NSArray, NSString;

@protocol GEOTransitArtworkDataSource, GEOTransitRoutingIncidentMessage, GEOTransitVehicleEntries;

@interface GEOComposedTransitRouteStep : GEOComposedRouteStep

{
    int _maneuver;
    unsigned int _startTime;
    unsigned int _duration;
    GEOTransitStep *_transitStep;
    NSArray *_routeDetailsPrimaryArtwork;
    id <GEOTransitArtworkDataSource> _routeDetailsSecondaryArtwork;
    NSArray *_steppingArtwork;
    id <GEOTransitRoutingIncidentMessage> _steppingIncidentMessage;
    id <GEOTransitRoutingIncidentMessage> _routeDetailsIncidentMessage;
    GEOPBTransitStop *_originStop;
    GEOPBTransitStop *_destinationStop;
    GEOPBTransitHall *_originHall;
    GEOPBTransitHall *_destinationHall;
}

@property (nonatomic, readonly) int maneuver;
@property (nonatomic, readonly) GEOComposedTransitRouteStep *previousTransitStep;
@property (nonatomic, readonly) GEOComposedTransitRouteStep *nextTransitStep;
@property (nonatomic, readonly) id <GEOTransitRoutingIncidentMessage> steppingIncidentMessage;
@property (nonatomic, readonly) id <GEOTransitRoutingIncidentMessage> routeDetailsIncidentMessage;
@property (nonatomic, readonly) GEOPBTransitStop *originStop;
@property (nonatomic, readonly) GEOPBTransitStop *destinationStop;
@property (nonatomic, readonly) GEOPBTransitHall *originHall;
@property (nonatomic, readonly) GEOPBTransitHall *destinationHall;
@property (nonatomic, readonly) GEOTransitStep *transitStep;
@property (nonatomic, readonly) id <GEOTransitVehicleEntries> vehicleEntries;
@property (nonatomic, readonly) GEOTransitScheduleInfo *scheduleInfo;
@property (nonatomic, readonly) unsigned long long originTransitEntityMuid;
@property (nonatomic, readonly) unsigned long long destinationTransitEntityMuid;
@property (nonatomic, readonly) NSString *originStopIntermediateListName;
@property (nonatomic, readonly) NSString *destinationStopIntermediateListName;

+ (_Bool)supportsSecureCoding;

- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (unsigned int)duration;
- (unsigned int)startTime;
- (unsigned int)distance;
- (_Bool)hasDuration;
- (id)instructions;
- (id)startingStop;
- (id)endingStop;
- (void)_populateIncidentsWithDecoderData:(id)arg1;
- (void)_populateArtworksWithDecoderData:(id)arg1;
- (id)previousStop;
- (id)nextStop;
- (id)nextBoardingStep;
- (id)previousBoardingStep;
- (id)nextAlightingStep;
- (id)previousAlightingStep;
- (CDStruct_39925896)startGeoCoordinate;
- (CDStruct_39925896)endGeoCoordinate;
- (unsigned long long)_muidForStop:(id)arg1;
- (id)_largestEntityAtStop:(id)arg1 passingTest:(CDUnknownBlockType)arg2;
- (id)_intermediateListNameForStop:(id)arg1;
- (id)initWithComposedRoute:(id)arg1 decoderData:(id)arg2 routeLegType:(long long)arg3 step:(id)arg4 stepIndex:(unsigned long long)arg5 duration:(unsigned int)arg6 pointRange:(struct _NSRange)arg7;
- (_Bool)isArrivalStep;
- (id)routeDetailsPrimaryArtwork;
- (id)routeDetailsSecondaryArtwork;
- (id)steppingArtwork;

@end
