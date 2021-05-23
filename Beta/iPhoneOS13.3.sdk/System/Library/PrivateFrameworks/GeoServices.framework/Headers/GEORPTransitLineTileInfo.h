/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h>

@class NSString, PBDataReader;

@interface GEORPTransitLineTileInfo : PBCodable

{
    PBDataReader *_reader;
    unsigned long long _transitLineMuid;
    NSString *_transitLineName;
    NSString *_transitSystemName;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    struct {
        unsigned int has_transitLineMuid:1;
        unsigned int read_transitLineName:1;
        unsigned int read_transitSystemName:1;
        unsigned int wrote_transitLineMuid:1;
        unsigned int wrote_transitLineName:1;
        unsigned int wrote_transitSystemName:1;
    } _flags;
}

@property (nonatomic) _Bool hasTransitLineMuid;
@property (nonatomic) unsigned long long transitLineMuid;
@property (nonatomic, readonly) _Bool hasTransitLineName;
@property (retain, nonatomic) NSString *transitLineName;
@property (nonatomic, readonly) _Bool hasTransitSystemName;
@property (retain, nonatomic) NSString *transitSystemName;

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
- (void)_readTransitSystemName;
- (void)_readTransitLineName;

@end
