/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h>

@class GEOLatLng, NSString, PBDataReader, PBUnknownFields;

@interface GEORouteIncident : PBCodable

{
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    NSString *_crossStreet;
    long long _endTime;
    NSString *_incidentId;
    NSString *_info;
    GEOLatLng *_position;
    long long _startTime;
    NSString *_street;
    long long _updateTime;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    unsigned int _laneClosureCount;
    int _laneClosureType;
    int _significance;
    int _type;
    _Bool _endTimeReliable;
    struct {
        unsigned int has_endTime:1;
        unsigned int has_startTime:1;
        unsigned int has_updateTime:1;
        unsigned int has_laneClosureCount:1;
        unsigned int has_laneClosureType:1;
        unsigned int has_significance:1;
        unsigned int has_type:1;
        unsigned int has_endTimeReliable:1;
        unsigned int read_unknownFields:1;
        unsigned int read_crossStreet:1;
        unsigned int read_incidentId:1;
        unsigned int read_info:1;
        unsigned int read_position:1;
        unsigned int read_street:1;
        unsigned int wrote_unknownFields:1;
        unsigned int wrote_crossStreet:1;
        unsigned int wrote_endTime:1;
        unsigned int wrote_incidentId:1;
        unsigned int wrote_info:1;
        unsigned int wrote_position:1;
        unsigned int wrote_startTime:1;
        unsigned int wrote_street:1;
        unsigned int wrote_updateTime:1;
        unsigned int wrote_laneClosureCount:1;
        unsigned int wrote_laneClosureType:1;
        unsigned int wrote_significance:1;
        unsigned int wrote_type:1;
        unsigned int wrote_endTimeReliable:1;
    } _flags;
}

@property (nonatomic, readonly) _Bool hasPosition;
@property (retain, nonatomic) GEOLatLng *position;
@property (nonatomic, readonly) _Bool hasIncidentId;
@property (retain, nonatomic) NSString *incidentId;
@property (nonatomic, readonly) _Bool hasInfo;
@property (retain, nonatomic) NSString *info;
@property (nonatomic) _Bool hasType;
@property (nonatomic) int type;
@property (nonatomic, readonly) _Bool hasStreet;
@property (retain, nonatomic) NSString *street;
@property (nonatomic, readonly) _Bool hasCrossStreet;
@property (retain, nonatomic) NSString *crossStreet;
@property (nonatomic) _Bool hasStartTime;
@property (nonatomic) long long startTime;
@property (nonatomic) _Bool hasEndTime;
@property (nonatomic) long long endTime;
@property (nonatomic) _Bool hasUpdateTime;
@property (nonatomic) long long updateTime;
@property (nonatomic) _Bool hasLaneClosureType;
@property (nonatomic) int laneClosureType;
@property (nonatomic) _Bool hasLaneClosureCount;
@property (nonatomic) unsigned int laneClosureCount;
@property (nonatomic) _Bool hasEndTimeReliable;
@property (nonatomic) _Bool endTimeReliable;
@property (nonatomic) _Bool hasSignificance;
@property (nonatomic) int significance;
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
- (id)typeAsString:(int)arg1;
- (int)StringAsType:(id)arg1;
- (void)readAll:(_Bool)arg1;
- (void)clearUnknownFields:(_Bool)arg1;
- (void)_readPosition;
- (void)_readIncidentId;
- (id)laneClosureTypeAsString:(int)arg1;
- (int)StringAsLaneClosureType:(id)arg1;
- (void)_readInfo;
- (void)_readStreet;
- (void)_readCrossStreet;
- (id)significanceAsString:(int)arg1;
- (int)StringAsSignificance:(id)arg1;

@end
