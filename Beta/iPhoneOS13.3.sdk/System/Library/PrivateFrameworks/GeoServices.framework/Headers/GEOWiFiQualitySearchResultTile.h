/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h>

@class NSMutableArray, NSString, PBDataReader;

@interface GEOWiFiQualitySearchResultTile : PBCodable

{
    PBDataReader *_reader;
    NSMutableArray *_ess;
    NSString *_etag;
    unsigned long long _tileKey;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    struct {
        unsigned int has_tileKey:1;
        unsigned int read_ess:1;
        unsigned int read_etag:1;
        unsigned int wrote_ess:1;
        unsigned int wrote_etag:1;
        unsigned int wrote_tileKey:1;
    } _flags;
}

@property (nonatomic) _Bool hasTileKey;
@property (nonatomic) unsigned long long tileKey;
@property (nonatomic, readonly) _Bool hasEtag;
@property (retain, nonatomic) NSString *etag;
@property (retain, nonatomic) NSMutableArray *ess;

+ (_Bool)isValid:(id)arg1;
+ (Class)essType;

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
- (void)_readEtag;
- (void)_readEss;
- (void)_addNoFlagsEss:(id)arg1;
- (unsigned long long)essCount;
- (void)clearEss;
- (id)essAtIndex:(unsigned long long)arg1;
- (void)addEss:(id)arg1;

@end
