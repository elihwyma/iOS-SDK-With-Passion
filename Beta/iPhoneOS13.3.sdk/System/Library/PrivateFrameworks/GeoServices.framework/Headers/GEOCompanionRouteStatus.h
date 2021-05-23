/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h>

@class GEOLatLng, GEOLocation, NSArray, NSData, PBDataReader;

@interface GEOCompanionRouteStatus : PBCodable

{
    PBDataReader *_reader;
    CDStruct_9f2792e4 _selectedRideIndexs;
    GEOLocation *_location;
    NSData *_routeID;
    GEOLatLng *_routeMatchCoordinate;
    double _timestamp;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    unsigned int _distanceRemainingOnRoute;
    unsigned int _distanceToManeuver;
    unsigned int _distanceToRoute;
    int _feedbackType;
    int _hapticsType;
    unsigned int _remainingTime;
    unsigned int _routeLocationIndex;
    float _routeLocationOffset;
    unsigned int _stepID;
    _Bool _guidancePromptsEnabled;
    _Bool _isConnectedToCarplay;
    _Bool _lowGuidanceNavigation;
    struct {
        unsigned int has_timestamp:1;
        unsigned int has_distanceRemainingOnRoute:1;
        unsigned int has_distanceToManeuver:1;
        unsigned int has_distanceToRoute:1;
        unsigned int has_feedbackType:1;
        unsigned int has_hapticsType:1;
        unsigned int has_remainingTime:1;
        unsigned int has_routeLocationIndex:1;
        unsigned int has_routeLocationOffset:1;
        unsigned int has_stepID:1;
        unsigned int has_guidancePromptsEnabled:1;
        unsigned int has_isConnectedToCarplay:1;
        unsigned int has_lowGuidanceNavigation:1;
        unsigned int read_selectedRideIndexs:1;
        unsigned int read_location:1;
        unsigned int read_routeID:1;
        unsigned int read_routeMatchCoordinate:1;
        unsigned int wrote_selectedRideIndexs:1;
        unsigned int wrote_location:1;
        unsigned int wrote_routeID:1;
        unsigned int wrote_routeMatchCoordinate:1;
        unsigned int wrote_timestamp:1;
        unsigned int wrote_distanceRemainingOnRoute:1;
        unsigned int wrote_distanceToManeuver:1;
        unsigned int wrote_distanceToRoute:1;
        unsigned int wrote_feedbackType:1;
        unsigned int wrote_hapticsType:1;
        unsigned int wrote_remainingTime:1;
        unsigned int wrote_routeLocationIndex:1;
        unsigned int wrote_routeLocationOffset:1;
        unsigned int wrote_stepID:1;
        unsigned int wrote_guidancePromptsEnabled:1;
        unsigned int wrote_isConnectedToCarplay:1;
        unsigned int wrote_lowGuidanceNavigation:1;
    } _flags;
}

@property (nonatomic, readonly) _Bool isNavigating;
@property (nonatomic, readonly) _Bool isRecalculating;
@property (nonatomic, readonly) _Bool hasEffectiveStepID;
@property (nonatomic, readonly) unsigned int effectiveStepID;
@property (nonatomic, readonly) _Bool hasEffectiveDistanceToManeuver;
@property (nonatomic, readonly) unsigned int effectiveDistanceToManeuver;
@property (nonatomic, readonly) NSArray *selectedRideIndices;
@property (nonatomic) _Bool hasFeedbackType;
@property (nonatomic) int feedbackType;
@property (nonatomic) _Bool hasStepID;
@property (nonatomic) unsigned int stepID;
@property (nonatomic) _Bool hasDistanceToManeuver;
@property (nonatomic) unsigned int distanceToManeuver;
@property (nonatomic) _Bool hasDistanceToRoute;
@property (nonatomic) unsigned int distanceToRoute;
@property (nonatomic) _Bool hasDistanceRemainingOnRoute;
@property (nonatomic) unsigned int distanceRemainingOnRoute;
@property (nonatomic) _Bool hasRemainingTime;
@property (nonatomic) unsigned int remainingTime;
@property (nonatomic, readonly) _Bool hasLocation;
@property (retain, nonatomic) GEOLocation *location;
@property (nonatomic) _Bool hasRouteLocationIndex;
@property (nonatomic) unsigned int routeLocationIndex;
@property (nonatomic) _Bool hasRouteLocationOffset;
@property (nonatomic) float routeLocationOffset;
@property (nonatomic) _Bool hasTimestamp;
@property (nonatomic) double timestamp;
@property (nonatomic, readonly) _Bool hasRouteMatchCoordinate;
@property (retain, nonatomic) GEOLatLng *routeMatchCoordinate;
@property (nonatomic, readonly) _Bool hasRouteID;
@property (retain, nonatomic) NSData *routeID;
@property (nonatomic) _Bool hasGuidancePromptsEnabled;
@property (nonatomic) _Bool guidancePromptsEnabled;
@property (nonatomic, readonly) unsigned long long selectedRideIndexsCount;
@property (nonatomic, readonly) unsigned int *selectedRideIndexs;
@property (nonatomic) _Bool hasLowGuidanceNavigation;
@property (nonatomic) _Bool lowGuidanceNavigation;
@property (nonatomic) _Bool hasHapticsType;
@property (nonatomic) int hapticsType;
@property (nonatomic) _Bool hasIsConnectedToCarplay;
@property (nonatomic) _Bool isConnectedToCarplay;

+ (_Bool)isValid:(id)arg1;

- (id)init;
- (void)dealloc;
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
- (void)_readLocation;
- (id)feedbackTypeAsString:(int)arg1;
- (int)StringAsFeedbackType:(id)arg1;
- (void)_updateClusteredSectionSelectedRideIndicesFromRoute:(id)arg1;
- (void)clearSelectedRideIndexs;
- (void)addSelectedRideIndex:(unsigned int)arg1;
- (unsigned int)selectedRideIndexAtIndex:(unsigned long long)arg1;
- (id)initWithRouteID:(id)arg1;
- (id)initWithRoute:(id)arg1 routeID:(id)arg2;
- (void)updateWithRoute:(id)arg1 routeID:(id)arg2;
- (void)updateClusteredSectionSelectedRideIndicesFromRoute:(id)arg1 routeID:(id)arg2;
- (void)updateFeedbackWithNavigationState:(int)arg1 locationUnreliable:(_Bool)arg2 announcementStage:(unsigned long long)arg3 nextAnnouncementStage:(unsigned long long)arg4 nextAnnouncementTime:(double)arg5;
- (unsigned int)effectiveStepIDInRoute:(id)arg1;
- (void)_readRouteMatchCoordinate;
- (void)_readSelectedRideIndexs;
- (void)_addNoFlagsSelectedRideIndex:(unsigned int)arg1;
- (void)setSelectedRideIndexs:(unsigned int *)arg1 count:(unsigned long long)arg2;
- (id)hapticsTypeAsString:(int)arg1;
- (int)StringAsHapticsType:(id)arg1;

@end
