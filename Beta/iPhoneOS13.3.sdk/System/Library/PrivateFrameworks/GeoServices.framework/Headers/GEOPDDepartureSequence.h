/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h>

@class NSMutableArray, NSString, PBDataReader, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDDepartureSequence : PBCodable

{
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    CDStruct_62a50c50 _nextStopIds;
    struct GEOPDTimeRange *_operatingHours;
    unsigned long long _operatingHoursCount;
    unsigned long long _operatingHoursSpace;
    NSMutableArray *_departureFrequencys;
    NSMutableArray *_departures;
    NSString *_directionNameString;
    NSString *_headsignString;
    unsigned long long _lineId;
    unsigned long long _stopId;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    struct {
        unsigned int has_lineId:1;
        unsigned int has_stopId:1;
        unsigned int read_unknownFields:1;
        unsigned int read_nextStopIds:1;
        unsigned int read_operatingHours:1;
        unsigned int read_departureFrequencys:1;
        unsigned int read_departures:1;
        unsigned int read_directionNameString:1;
        unsigned int read_headsignString:1;
        unsigned int wrote_unknownFields:1;
        unsigned int wrote_nextStopIds:1;
        unsigned int wrote_operatingHours:1;
        unsigned int wrote_departureFrequencys:1;
        unsigned int wrote_departures:1;
        unsigned int wrote_directionNameString:1;
        unsigned int wrote_headsignString:1;
        unsigned int wrote_lineId:1;
        unsigned int wrote_stopId:1;
    } _flags;
}

@property (nonatomic) _Bool hasLineId;
@property (nonatomic) unsigned long long lineId;
@property (nonatomic) _Bool hasStopId;
@property (nonatomic) unsigned long long stopId;
@property (retain, nonatomic) NSMutableArray *departures;
@property (retain, nonatomic) NSMutableArray *departureFrequencys;
@property (nonatomic, readonly) unsigned long long operatingHoursCount;
@property (nonatomic, readonly) struct GEOPDTimeRange *operatingHours;
@property (nonatomic, readonly) _Bool hasDirectionNameString;
@property (retain, nonatomic) NSString *directionNameString;
@property (nonatomic, readonly) _Bool hasHeadsignString;
@property (retain, nonatomic) NSString *headsignString;
@property (nonatomic, readonly) unsigned long long nextStopIdsCount;
@property (nonatomic, readonly) unsigned long long *nextStopIds;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (_Bool)isValid:(id)arg1;
+ (Class)departureType;
+ (Class)departureFrequencyType;

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
- (void)clearOperatingHours;
- (void)_readDepartures;
- (void)_addNoFlagsDeparture:(id)arg1;
- (void)_readDepartureFrequencys;
- (void)_addNoFlagsDepartureFrequency:(id)arg1;
- (void)_readOperatingHours;
- (void)_addNoFlagsOperatingHours:(struct GEOPDTimeRange)arg1;
- (void)_readDirectionNameString;
- (void)_readHeadsignString;
- (void)_readNextStopIds;
- (void)_addNoFlagsNextStopId:(unsigned long long)arg1;
- (unsigned long long)departuresCount;
- (void)clearDepartures;
- (id)departureAtIndex:(unsigned long long)arg1;
- (void)addDeparture:(id)arg1;
- (unsigned long long)departureFrequencysCount;
- (void)clearDepartureFrequencys;
- (id)departureFrequencyAtIndex:(unsigned long long)arg1;
- (void)addDepartureFrequency:(id)arg1;
- (struct GEOPDTimeRange)operatingHoursAtIndex:(unsigned long long)arg1;
- (void)addOperatingHours:(struct GEOPDTimeRange)arg1;
- (void)clearNextStopIds;
- (unsigned long long)nextStopIdAtIndex:(unsigned long long)arg1;
- (void)addNextStopId:(unsigned long long)arg1;
- (void)setOperatingHours:(struct GEOPDTimeRange *)arg1 count:(unsigned long long)arg2;
- (void)setNextStopIds:(unsigned long long *)arg1 count:(unsigned long long)arg2;

@end
