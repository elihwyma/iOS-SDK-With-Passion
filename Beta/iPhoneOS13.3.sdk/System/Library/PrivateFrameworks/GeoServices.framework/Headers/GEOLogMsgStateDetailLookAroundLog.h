/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h>

@class NSMutableArray, PBDataReader;

@interface GEOLogMsgStateDetailLookAroundLog : PBCodable

{
    PBDataReader *_reader;
    double _durationSec;
    NSMutableArray *_lookAroundPipRecords;
    NSMutableArray *_lookAroundViewRecords;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    unsigned int _poisShown;
    struct {
        unsigned int has_durationSec:1;
        unsigned int has_poisShown:1;
        unsigned int read_lookAroundPipRecords:1;
        unsigned int read_lookAroundViewRecords:1;
        unsigned int wrote_durationSec:1;
        unsigned int wrote_lookAroundPipRecords:1;
        unsigned int wrote_lookAroundViewRecords:1;
        unsigned int wrote_poisShown:1;
    } _flags;
}

@property (nonatomic) _Bool hasDurationSec;
@property (nonatomic) double durationSec;
@property (nonatomic) _Bool hasPoisShown;
@property (nonatomic) unsigned int poisShown;
@property (retain, nonatomic) NSMutableArray *lookAroundPipRecords;
@property (retain, nonatomic) NSMutableArray *lookAroundViewRecords;

+ (_Bool)isValid:(id)arg1;
+ (Class)lookAroundPipRecordsType;
+ (Class)lookAroundViewRecordsType;

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
- (void)_readLookAroundPipRecords;
- (void)_addNoFlagsLookAroundPipRecords:(id)arg1;
- (void)_readLookAroundViewRecords;
- (void)_addNoFlagsLookAroundViewRecords:(id)arg1;
- (unsigned long long)lookAroundPipRecordsCount;
- (void)clearLookAroundPipRecords;
- (id)lookAroundPipRecordsAtIndex:(unsigned long long)arg1;
- (void)addLookAroundPipRecords:(id)arg1;
- (unsigned long long)lookAroundViewRecordsCount;
- (void)clearLookAroundViewRecords;
- (id)lookAroundViewRecordsAtIndex:(unsigned long long)arg1;
- (void)addLookAroundViewRecords:(id)arg1;

@end
