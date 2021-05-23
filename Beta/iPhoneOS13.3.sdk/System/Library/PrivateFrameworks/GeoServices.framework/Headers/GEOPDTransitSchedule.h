/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h>

@class GEOPDDeparturePredicate, NSMutableArray, PBDataReader, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDTransitSchedule : PBCodable

{
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    GEOPDDeparturePredicate *_departurePredicateCountdown;
    GEOPDDeparturePredicate *_departurePredicateStamp;
    NSMutableArray *_departureSequences;
    struct GEOPDTimeRange _operatingHoursRange;
    unsigned long long _ttlSeconds;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    struct {
        unsigned int has_operatingHoursRange:1;
        unsigned int has_ttlSeconds:1;
        unsigned int read_unknownFields:1;
        unsigned int read_departurePredicateCountdown:1;
        unsigned int read_departurePredicateStamp:1;
        unsigned int read_departureSequences:1;
        unsigned int wrote_unknownFields:1;
        unsigned int wrote_departurePredicateCountdown:1;
        unsigned int wrote_departurePredicateStamp:1;
        unsigned int wrote_departureSequences:1;
        unsigned int wrote_operatingHoursRange:1;
        unsigned int wrote_ttlSeconds:1;
    } _flags;
}

@property (retain, nonatomic) NSMutableArray *departureSequences;
@property (nonatomic, readonly) _Bool hasDeparturePredicateCountdown;
@property (retain, nonatomic) GEOPDDeparturePredicate *departurePredicateCountdown;
@property (nonatomic, readonly) _Bool hasDeparturePredicateStamp;
@property (retain, nonatomic) GEOPDDeparturePredicate *departurePredicateStamp;
@property (nonatomic) _Bool hasOperatingHoursRange;
@property (nonatomic) struct GEOPDTimeRange operatingHoursRange;
@property (nonatomic) _Bool hasTtlSeconds;
@property (nonatomic) unsigned long long ttlSeconds;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (_Bool)isValid:(id)arg1;
+ (Class)departureSequenceType;
+ (id)transitScheduleForPlaceData:(id)arg1;

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
- (void)_readDeparturePredicateCountdown;
- (void)_readDeparturePredicateStamp;
- (void)_readDepartureSequences;
- (void)_addNoFlagsDepartureSequence:(id)arg1;
- (unsigned long long)departureSequencesCount;
- (void)clearDepartureSequences;
- (id)departureSequenceAtIndex:(unsigned long long)arg1;
- (void)addDepartureSequence:(id)arg1;

@end
