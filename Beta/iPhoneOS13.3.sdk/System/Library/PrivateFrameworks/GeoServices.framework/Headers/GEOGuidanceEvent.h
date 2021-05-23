/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h>

@class GEOJunctionView, GEOSignGuidance, GEOSpokenGuidance, GEOVisualLaneGuidance, PBDataReader, PBUnknownFields;

@interface GEOGuidanceEvent : PBCodable

{
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    GEOJunctionView *_junctionView;
    GEOVisualLaneGuidance *_laneGuidance;
    double _maxSpeed;
    double _minSpeed;
    GEOSignGuidance *_signGuidance;
    GEOSpokenGuidance *_spokenGuidance;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    int _distanceZilchIndex;
    int _endValidDistance;
    int _eventType;
    unsigned int _identifier;
    int _offsetForDistanceString;
    int _startValidDistance;
    _Bool _sticky;
    struct {
        unsigned int has_maxSpeed:1;
        unsigned int has_minSpeed:1;
        unsigned int has_distanceZilchIndex:1;
        unsigned int has_endValidDistance:1;
        unsigned int has_eventType:1;
        unsigned int has_identifier:1;
        unsigned int has_offsetForDistanceString:1;
        unsigned int has_startValidDistance:1;
        unsigned int has_sticky:1;
        unsigned int read_unknownFields:1;
        unsigned int read_junctionView:1;
        unsigned int read_laneGuidance:1;
        unsigned int read_signGuidance:1;
        unsigned int read_spokenGuidance:1;
        unsigned int wrote_unknownFields:1;
        unsigned int wrote_junctionView:1;
        unsigned int wrote_laneGuidance:1;
        unsigned int wrote_maxSpeed:1;
        unsigned int wrote_minSpeed:1;
        unsigned int wrote_signGuidance:1;
        unsigned int wrote_spokenGuidance:1;
        unsigned int wrote_distanceZilchIndex:1;
        unsigned int wrote_endValidDistance:1;
        unsigned int wrote_eventType:1;
        unsigned int wrote_identifier:1;
        unsigned int wrote_offsetForDistanceString:1;
        unsigned int wrote_startValidDistance:1;
        unsigned int wrote_sticky:1;
    } _flags;
}

@property (nonatomic) _Bool hasStartValidDistance;
@property (nonatomic) int startValidDistance;
@property (nonatomic) _Bool hasEndValidDistance;
@property (nonatomic) int endValidDistance;
@property (nonatomic, readonly) _Bool hasSignGuidance;
@property (retain, nonatomic) GEOSignGuidance *signGuidance;
@property (nonatomic, readonly) _Bool hasSpokenGuidance;
@property (retain, nonatomic) GEOSpokenGuidance *spokenGuidance;
@property (nonatomic, readonly) _Bool hasLaneGuidance;
@property (retain, nonatomic) GEOVisualLaneGuidance *laneGuidance;
@property (nonatomic, readonly) _Bool hasJunctionView;
@property (retain, nonatomic) GEOJunctionView *junctionView;
@property (nonatomic) _Bool hasDistanceZilchIndex;
@property (nonatomic) int distanceZilchIndex;
@property (nonatomic) _Bool hasMinSpeed;
@property (nonatomic) double minSpeed;
@property (nonatomic) _Bool hasMaxSpeed;
@property (nonatomic) double maxSpeed;
@property (nonatomic) _Bool hasEventType;
@property (nonatomic) int eventType;
@property (nonatomic) _Bool hasIdentifier;
@property (nonatomic) unsigned int identifier;
@property (nonatomic) _Bool hasOffsetForDistanceString;
@property (nonatomic) int offsetForDistanceString;
@property (nonatomic) _Bool hasSticky;
@property (nonatomic) _Bool sticky;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

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
- (void)clearUnknownFields:(_Bool)arg1;
- (id)eventTypeAsString:(int)arg1;
- (int)StringAsEventType:(id)arg1;
- (void)_readSignGuidance;
- (void)_readSpokenGuidance;
- (void)_readLaneGuidance;
- (void)_readJunctionView;

@end
