/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <GeoServices/GEOComposedTransitBaseRouteLeg.h>

@class GEOComposedTransitTripRouteStep, NSArray, NSDate, NSTimeZone;

@protocol GEOTransitLine, GEOTransitSystem;

@interface GEOComposedTransitTripRouteLeg : GEOComposedTransitBaseRouteLeg

{
    unsigned long long _boardStepIndex;
    unsigned long long _alightStepIndex;
    unsigned long long _blockTransferStepIndex;
    unsigned long long _numberOfTransitStops;
    unsigned long long _selectedRideOptionIndex;
    NSArray *_actionSheetDescriptions;
    NSArray *_routeDetailsOptionsArtwork;
    NSArray *_actionSheetOptionsArtwork;
    NSArray *_transitLineOptions;
    NSArray *_alightNotifications;
}

@property (nonatomic, readonly) id <GEOTransitSystem> transitSystem;
@property (nonatomic, readonly) id <GEOTransitLine> transitLine;
@property (nonatomic, readonly) GEOComposedTransitTripRouteStep *boardStep;
@property (nonatomic, readonly) GEOComposedTransitTripRouteStep *alightStep;
@property (nonatomic, readonly) NSTimeZone *departureTimeZone;
@property (nonatomic, readonly) NSDate *departureTime;
@property (nonatomic, readonly) NSArray *departureTimes;
@property (nonatomic, readonly) NSArray *transitLineOptions;
@property (nonatomic, readonly) double departureFrequencyMin;
@property (nonatomic, readonly) double departureFrequencyMax;
@property (nonatomic, readonly) NSDate *lastStepArrivalDate;
@property (nonatomic, readonly) NSArray *routeLineArtwork;
@property (nonatomic, readonly) unsigned long long rideOptionsCount;
@property (nonatomic) unsigned long long selectedRideOptionIndex;
@property (nonatomic, readonly) _Bool notifyBeforeAlightStep;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (unsigned long long)numberOfTransitStops;
- (_Bool)_needsStepData;
- (void)_cacheStepData;
- (id)blockTransferStep;
- (id)initWithComposedRoute:(id)arg1 decoderData:(id)arg2 tripIndex:(unsigned long long)arg3 stepRange:(struct _NSRange)arg4 transitStepRange:(struct _NSRange)arg5 pointRange:(struct _NSRange)arg6;
- (id)routeDetailsPrimaryArtworkForRideOption:(unsigned long long)arg1;
- (id)actionSheetArtworkForRideOption:(unsigned long long)arg1;
- (id)actionSheetDescriptionForRideOption:(unsigned long long)arg1;
- (id)transitLineForRideOption:(unsigned long long)arg1;

@end
