/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <NSObject.h>

#import <GeoServices/Swift-Protocol.h>

@class GEOComposedRoute, GEOComposedRouteLeg, GEOComposedTransitTripRouteStep, GEOInstructionSet, GEOPBTransitStop, GEOStep, GEOTransitStep, NSArray, NSString;

@protocol GEOTransitArtworkDataSource;

@interface GEOComposedRouteStep : NSObject <Swift>

{
    GEOComposedRoute *_composedRoute;
    GEOStep *_geoStep;
    int _drivingSide;
    unsigned long long _stepIndex;
    struct _NSRange _pointRange;
    struct _NSRange _maneuverPointRange;
    NSString *_maneuverRoadOrExitName;
    NSString *_maneuverRoadName;
    unsigned int _actualDistance;
    long long _routeLegType;
}

@property (nonatomic, readonly) _Bool shouldCreateEnterBoardGroup;
@property (nonatomic, readonly) _Bool shouldCreateAlightExitGroup;
@property (nonatomic, readonly) _Bool shouldCreateTransferGroup;
@property (nonatomic, readonly) _Bool shouldCreateTripProgressionGroup;
@property (nonatomic, readonly) _Bool shouldCreateFerryProgressionGroup;
@property (nonatomic, readonly) _Bool shouldCreateArrivalGroup;
@property (weak, nonatomic) GEOComposedRoute *composedRoute;
@property (nonatomic) unsigned int actualDistance;
@property (nonatomic, readonly) GEOComposedRouteLeg *leg;
@property (nonatomic, readonly, getter=getPreviousStep) GEOComposedRouteStep *previousStep;
@property (nonatomic, readonly, getter=getNextStep) GEOComposedRouteStep *nextStep;
@property (nonatomic, readonly) long long routeLegType;
@property (nonatomic, readonly) int transportType;
@property (nonatomic, readonly) struct _NSRange pointRange;
@property (nonatomic, readonly) unsigned int startPointIndex;
@property (nonatomic, readonly) unsigned int endPointIndex;
@property (nonatomic, readonly) unsigned int pointCount;
@property (nonatomic, readonly) struct _NSRange maneuverPointRange;
@property (nonatomic, readonly) unsigned int maneuverStartPointIndex;
@property (nonatomic, readonly) unsigned int maneuverEndPointIndex;
@property (nonatomic, readonly) NSString *maneuverRoadOrExitName;
@property (nonatomic, readonly) NSString *maneuverRoadName;
@property (nonatomic, readonly) unsigned long long stepIndex;
@property (nonatomic, readonly) _Bool isUncertainArrival;
@property (nonatomic, readonly) _Bool isArrivalStep;
@property (nonatomic, readonly) CDStruct_39925896 startGeoCoordinate;
@property (nonatomic, readonly) CDStruct_39925896 endGeoCoordinate;
@property (nonatomic, readonly) GEOStep *geoStep;
@property (nonatomic, readonly) int drivingSide;
@property (nonatomic, readonly) _Bool hasDuration;
@property (nonatomic, readonly) unsigned int duration;
@property (nonatomic, readonly) unsigned int stepID;
@property (nonatomic, readonly) unsigned int distance;
@property (nonatomic, readonly) GEOComposedTransitTripRouteStep *nextBoardingStep;
@property (nonatomic, readonly) GEOComposedTransitTripRouteStep *previousBoardingStep;
@property (nonatomic, readonly) GEOComposedTransitTripRouteStep *nextAlightingStep;
@property (nonatomic, readonly) GEOComposedTransitTripRouteStep *previousAlightingStep;
@property (nonatomic, readonly) GEOComposedTransitTripRouteStep *closestLogicalBoardOrAlightStep;
@property (nonatomic, readonly) GEOPBTransitStop *startingStop;
@property (nonatomic, readonly) GEOPBTransitStop *endingStop;
@property (nonatomic, readonly) unsigned int startTime;
@property (nonatomic, readonly) GEOPBTransitStop *previousStop;
@property (nonatomic, readonly) GEOPBTransitStop *nextStop;
@property (nonatomic, readonly) GEOTransitStep *transitStep;
@property (nonatomic, readonly) GEOInstructionSet *instructions;
@property (nonatomic, readonly) NSArray *steppingArtwork;
@property (nonatomic, readonly) NSArray *routeDetailsPrimaryArtwork;
@property (nonatomic, readonly) id <GEOTransitArtworkDataSource> routeDetailsSecondaryArtwork;

+ (_Bool)supportsSecureCoding;

- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithComposedRoute:(id)arg1 GEOStep:(id)arg2 routeLegType:(long long)arg3 stepIndex:(unsigned long long)arg4 pointRange:(struct _NSRange)arg5 maneuverPointRange:(struct _NSRange)arg6;
- (_Bool)_MapsCarPlay_isEqual:(id)arg1;
- (_Bool)shouldPreloadWithHighPriority;
- (id)initWithComposedRoute:(id)arg1 routeLegType:(long long)arg2 stepIndex:(unsigned long long)arg3 pointRange:(struct _NSRange)arg4;
- (int)maneuver;
- (_Bool)_belongsToTransferGroup;
- (id)firstNameOrBranch;

@end
