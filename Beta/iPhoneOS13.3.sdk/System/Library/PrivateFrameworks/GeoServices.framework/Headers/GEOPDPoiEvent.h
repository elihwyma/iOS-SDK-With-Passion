/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h>

@class GEOLocalizedString, GEOPDMapsIdentifier, GEOTimezone, NSMutableArray, PBDataReader, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDPoiEvent : PBCodable

{
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    NSMutableArray *_eventCategorys;
    NSMutableArray *_eventDateTimes;
    GEOPDMapsIdentifier *_eventId;
    GEOLocalizedString *_name;
    NSMutableArray *_performers;
    NSMutableArray *_poiIds;
    GEOTimezone *_timezone;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    int _expectedAttendance;
    struct {
        unsigned int has_expectedAttendance:1;
        unsigned int read_unknownFields:1;
        unsigned int read_eventCategorys:1;
        unsigned int read_eventDateTimes:1;
        unsigned int read_eventId:1;
        unsigned int read_name:1;
        unsigned int read_performers:1;
        unsigned int read_poiIds:1;
        unsigned int read_timezone:1;
        unsigned int wrote_unknownFields:1;
        unsigned int wrote_eventCategorys:1;
        unsigned int wrote_eventDateTimes:1;
        unsigned int wrote_eventId:1;
        unsigned int wrote_name:1;
        unsigned int wrote_performers:1;
        unsigned int wrote_poiIds:1;
        unsigned int wrote_timezone:1;
        unsigned int wrote_expectedAttendance:1;
    } _flags;
}

@property (nonatomic, readonly) _Bool hasEventId;
@property (retain, nonatomic) GEOPDMapsIdentifier *eventId;
@property (nonatomic, readonly) _Bool hasName;
@property (retain, nonatomic) GEOLocalizedString *name;
@property (retain, nonatomic) NSMutableArray *eventCategorys;
@property (retain, nonatomic) NSMutableArray *poiIds;
@property (retain, nonatomic) NSMutableArray *eventDateTimes;
@property (nonatomic, readonly) _Bool hasTimezone;
@property (retain, nonatomic) GEOTimezone *timezone;
@property (retain, nonatomic) NSMutableArray *performers;
@property (nonatomic) _Bool hasExpectedAttendance;
@property (nonatomic) int expectedAttendance;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (_Bool)isValid:(id)arg1;
+ (Class)eventCategoryType;
+ (Class)poiIdType;
+ (Class)eventDateTimeType;
+ (Class)performerType;

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
- (void)_readName;
- (void)_readTimezone;
- (void)_readEventId;
- (void)_readEventCategorys;
- (void)_addNoFlagsEventCategory:(id)arg1;
- (void)_readPoiIds;
- (void)_addNoFlagsPoiId:(id)arg1;
- (void)_readEventDateTimes;
- (void)_addNoFlagsEventDateTime:(id)arg1;
- (void)_readPerformers;
- (void)_addNoFlagsPerformer:(id)arg1;
- (unsigned long long)eventCategorysCount;
- (void)clearEventCategorys;
- (id)eventCategoryAtIndex:(unsigned long long)arg1;
- (void)addEventCategory:(id)arg1;
- (unsigned long long)poiIdsCount;
- (void)clearPoiIds;
- (id)poiIdAtIndex:(unsigned long long)arg1;
- (void)addPoiId:(id)arg1;
- (unsigned long long)eventDateTimesCount;
- (void)clearEventDateTimes;
- (id)eventDateTimeAtIndex:(unsigned long long)arg1;
- (void)addEventDateTime:(id)arg1;
- (unsigned long long)performersCount;
- (void)clearPerformers;
- (id)performerAtIndex:(unsigned long long)arg1;
- (void)addPerformer:(id)arg1;

@end
