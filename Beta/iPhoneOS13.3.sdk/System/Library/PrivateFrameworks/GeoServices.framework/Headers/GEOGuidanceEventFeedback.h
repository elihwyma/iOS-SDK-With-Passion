/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h>

@class GEOJunctionViewGuidanceFeedback, GEOSignGuidanceFeedback, GEOSpokenGuidanceFeedback, NSData, PBDataReader;

@interface GEOGuidanceEventFeedback : PBCodable

{
    PBDataReader *_reader;
    GEOJunctionViewGuidanceFeedback *_junctionViewGuidanceFeedback;
    NSData *_routeID;
    GEOSignGuidanceFeedback *_signGuidanceFeedback;
    GEOSpokenGuidanceFeedback *_spokenGuidanceFeedback;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    float _distanceToManeuver;
    float _duration;
    unsigned int _enrouteNoticeIndex;
    unsigned int _eventIndex;
    unsigned int _stepID;
    float _timeToManeuver;
    int _trafficSpeed;
    float _vehicleSpeed;
    struct {
        unsigned int has_distanceToManeuver:1;
        unsigned int has_duration:1;
        unsigned int has_enrouteNoticeIndex:1;
        unsigned int has_eventIndex:1;
        unsigned int has_stepID:1;
        unsigned int has_timeToManeuver:1;
        unsigned int has_trafficSpeed:1;
        unsigned int has_vehicleSpeed:1;
        unsigned int read_junctionViewGuidanceFeedback:1;
        unsigned int read_routeID:1;
        unsigned int read_signGuidanceFeedback:1;
        unsigned int read_spokenGuidanceFeedback:1;
        unsigned int wrote_junctionViewGuidanceFeedback:1;
        unsigned int wrote_routeID:1;
        unsigned int wrote_signGuidanceFeedback:1;
        unsigned int wrote_spokenGuidanceFeedback:1;
        unsigned int wrote_distanceToManeuver:1;
        unsigned int wrote_duration:1;
        unsigned int wrote_enrouteNoticeIndex:1;
        unsigned int wrote_eventIndex:1;
        unsigned int wrote_stepID:1;
        unsigned int wrote_timeToManeuver:1;
        unsigned int wrote_trafficSpeed:1;
        unsigned int wrote_vehicleSpeed:1;
    } _flags;
}

@property (nonatomic, readonly) _Bool hasRouteID;
@property (retain, nonatomic) NSData *routeID;
@property (nonatomic) _Bool hasStepID;
@property (nonatomic) unsigned int stepID;
@property (nonatomic) _Bool hasEnrouteNoticeIndex;
@property (nonatomic) unsigned int enrouteNoticeIndex;
@property (nonatomic) _Bool hasEventIndex;
@property (nonatomic) unsigned int eventIndex;
@property (nonatomic) _Bool hasDistanceToManeuver;
@property (nonatomic) float distanceToManeuver;
@property (nonatomic) _Bool hasTimeToManeuver;
@property (nonatomic) float timeToManeuver;
@property (nonatomic) _Bool hasVehicleSpeed;
@property (nonatomic) float vehicleSpeed;
@property (nonatomic) _Bool hasTrafficSpeed;
@property (nonatomic) int trafficSpeed;
@property (nonatomic) _Bool hasDuration;
@property (nonatomic) float duration;
@property (nonatomic, readonly) _Bool hasSignGuidanceFeedback;
@property (retain, nonatomic) GEOSignGuidanceFeedback *signGuidanceFeedback;
@property (nonatomic, readonly) _Bool hasSpokenGuidanceFeedback;
@property (retain, nonatomic) GEOSpokenGuidanceFeedback *spokenGuidanceFeedback;
@property (nonatomic, readonly) _Bool hasJunctionViewGuidanceFeedback;
@property (retain, nonatomic) GEOJunctionViewGuidanceFeedback *junctionViewGuidanceFeedback;

+ (_Bool)isValid:(id)arg1;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithData:(id)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;
- (void)readAll:(_Bool)arg1;
- (void)_readRouteID;
- (void)_readSignGuidanceFeedback;
- (void)_readSpokenGuidanceFeedback;
- (void)_readJunctionViewGuidanceFeedback;
- (id)trafficSpeedAsString:(int)arg1;
- (int)StringAsTrafficSpeed:(id)arg1;

@end
