/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <GeoServices/GEOComposedTransitRouteStep.h>

@class GEOComposedTransitTripRouteLeg, GEOTransitVehicleInfo, NSArray, NSDate, NSTimeZone;

@protocol GEOTransitLine, GEOTransitSystem;

@interface GEOComposedTransitTripRouteStep : GEOComposedTransitRouteStep

{
    NSArray *_arrivalTimesAtOrigin;
    NSArray *_departureTimes;
    NSArray *_arrivalTimes;
    double _departureTimeIntervalMin;
    double _departureTimeIntervalMax;
    GEOTransitVehicleInfo *_transitVehicle;
    id <GEOTransitLine> _transitLine;
    id <GEOTransitSystem> _transitSystem;
    NSArray *_routeLineArtwork;
    _Bool _isRail;
    _Bool _isBus;
    _Bool _canPreloadTiles;
}

@property (nonatomic, readonly) GEOComposedTransitTripRouteLeg *tripLeg;
@property (nonatomic, readonly) NSTimeZone *departureTimeZone;
@property (nonatomic, readonly) NSTimeZone *arrivalTimeZone;
@property (nonatomic, readonly) NSDate *arrivalTimeAtOrigin;
@property (nonatomic, readonly) NSDate *departureTime;
@property (nonatomic, readonly) NSDate *arrivalTime;
@property (nonatomic, readonly) NSArray *arrivalTimesAtOrigin;
@property (nonatomic, readonly) NSArray *departureTimes;
@property (nonatomic, readonly) NSArray *arrivalTimes;
@property (nonatomic, readonly) double departureTimeIntervalMin;
@property (nonatomic, readonly) double departureTimeIntervalMax;
@property (nonatomic, readonly) GEOTransitVehicleInfo *transitVehicle;
@property (nonatomic, readonly) id <GEOTransitLine> transitLine;
@property (nonatomic, readonly) id <GEOTransitSystem> transitSystem;
@property (nonatomic, readonly) NSArray *routeLineArtwork;
@property (nonatomic, readonly) _Bool isRail;
@property (nonatomic, readonly) _Bool isBus;
@property (nonatomic, readonly) _Bool canPreloadTilesForThisStep;

+ (_Bool)supportsSecureCoding;

- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (unsigned int)duration;
- (_Bool)hasDuration;
- (id)initWithComposedRoute:(id)arg1 routeLegType:(long long)arg2 stepIndex:(unsigned long long)arg3 pointRange:(struct _NSRange)arg4 line:(id)arg5 maneuverType:(int)arg6 significance:(int)arg7;
- (id)initWithComposedRoute:(id)arg1 decoderData:(id)arg2 step:(id)arg3 stepIndex:(unsigned long long)arg4 duration:(unsigned int)arg5 pointRange:(struct _NSRange)arg6;

@end
