/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h>

@class NSString, PBDataReader;

@interface GEOTransitDepartureSequenceUsage : PBCodable

{
    PBDataReader *_reader;
    NSString *_direction;
    NSString *_headsign;
    unsigned long long _lineId;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    struct {
        unsigned int has_lineId:1;
        unsigned int read_direction:1;
        unsigned int read_headsign:1;
        unsigned int wrote_direction:1;
        unsigned int wrote_headsign:1;
        unsigned int wrote_lineId:1;
    } _flags;
}

@property (nonatomic) _Bool hasLineId;
@property (nonatomic) unsigned long long lineId;
@property (nonatomic, readonly) _Bool hasDirection;
@property (retain, nonatomic) NSString *direction;
@property (nonatomic, readonly) _Bool hasHeadsign;
@property (retain, nonatomic) NSString *headsign;

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
- (void)_readHeadsign;
- (void)_readDirection;

@end
