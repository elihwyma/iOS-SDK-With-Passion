/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h>

@class GEOCacheHit, GEOCacheMiss, PBDataReader;

@interface GEOLogMsgEventTileCacheAnalytic : PBCodable

{
    PBDataReader *_reader;
    GEOCacheHit *_cacheHit;
    GEOCacheMiss *_cacheMiss;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    struct {
        unsigned int read_cacheHit:1;
        unsigned int read_cacheMiss:1;
        unsigned int wrote_cacheHit:1;
        unsigned int wrote_cacheMiss:1;
    } _flags;
}

@property (nonatomic, readonly) _Bool hasCacheHit;
@property (retain, nonatomic) GEOCacheHit *cacheHit;
@property (nonatomic, readonly) _Bool hasCacheMiss;
@property (retain, nonatomic) GEOCacheMiss *cacheMiss;

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
- (void)_readCacheHit;
- (void)_readCacheMiss;

@end
