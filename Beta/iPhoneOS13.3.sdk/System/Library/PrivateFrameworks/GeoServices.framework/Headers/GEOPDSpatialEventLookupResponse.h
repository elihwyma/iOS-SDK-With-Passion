/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h>

@class GEOLatLng, GEOPDMapsIdentifier, GEOTimezone, NSMutableArray, PBDataReader, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDSpatialEventLookupResponse : PBCodable

{
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    CDStruct_95bda58d _categorys;
    GEOLatLng *_center;
    NSMutableArray *_eventDateTimes;
    GEOPDMapsIdentifier *_eventId;
    GEOPDMapsIdentifier *_poiId;
    GEOTimezone *_timezone;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    struct {
        unsigned int read_unknownFields:1;
        unsigned int read_categorys:1;
        unsigned int read_center:1;
        unsigned int read_eventDateTimes:1;
        unsigned int read_eventId:1;
        unsigned int read_poiId:1;
        unsigned int read_timezone:1;
        unsigned int wrote_unknownFields:1;
        unsigned int wrote_categorys:1;
        unsigned int wrote_center:1;
        unsigned int wrote_eventDateTimes:1;
        unsigned int wrote_eventId:1;
        unsigned int wrote_poiId:1;
        unsigned int wrote_timezone:1;
    } _flags;
}

@property (nonatomic, readonly) _Bool hasEventId;
@property (retain, nonatomic) GEOPDMapsIdentifier *eventId;
@property (nonatomic, readonly) _Bool hasCenter;
@property (retain, nonatomic) GEOLatLng *center;
@property (nonatomic, readonly) unsigned long long categorysCount;
@property (nonatomic, readonly) int *categorys;
@property (retain, nonatomic) NSMutableArray *eventDateTimes;
@property (nonatomic, readonly) _Bool hasTimezone;
@property (retain, nonatomic) GEOTimezone *timezone;
@property (nonatomic, readonly) _Bool hasPoiId;
@property (retain, nonatomic) GEOPDMapsIdentifier *poiId;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (_Bool)isValid:(id)arg1;
+ (Class)eventDateTimeType;

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
- (void)clearUnknownFields:(_Bool)arg1;
- (void)_readCenter;
- (void)_readTimezone;
- (void)_readCategorys;
- (void)_addNoFlagsCategory:(int)arg1;
- (void)clearCategorys;
- (int)categoryAtIndex:(unsigned long long)arg1;
- (void)addCategory:(int)arg1;
- (void)_readEventId;
- (void)_readEventDateTimes;
- (void)_addNoFlagsEventDateTime:(id)arg1;
- (unsigned long long)eventDateTimesCount;
- (void)clearEventDateTimes;
- (id)eventDateTimeAtIndex:(unsigned long long)arg1;
- (void)addEventDateTime:(id)arg1;
- (void)setCategorys:(int *)arg1 count:(unsigned long long)arg2;
- (id)categorysAsString:(int)arg1;
- (int)StringAsCategorys:(id)arg1;
- (void)_readPoiId;

@end
