/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h>

@class GEOPlaceResult, PBDataReader;

__attribute__((visibility("hidden")))
@interface GEOCluster : PBCodable

{
    PBDataReader *_reader;
    CDStruct_95bda58d _indexs;
    GEOPlaceResult *_container;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    struct {
        unsigned int read_indexs:1;
        unsigned int read_container:1;
        unsigned int wrote_indexs:1;
        unsigned int wrote_container:1;
    } _flags;
}

@property (nonatomic, readonly) _Bool hasContainer;
@property (retain, nonatomic) GEOPlaceResult *container;
@property (nonatomic, readonly) unsigned long long indexsCount;
@property (nonatomic, readonly) int *indexs;

+ (_Bool)isValid:(id)arg1;

- (id)init;
- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)addIndex:(int)arg1;
- (id)initWithData:(id)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;
- (void)readAll:(_Bool)arg1;
- (void)clearSensitiveFields;
- (void)_readContainer;
- (void)_readIndexs;
- (void)_addNoFlagsIndex:(int)arg1;
- (void)clearIndexs;
- (int)indexAtIndex:(unsigned long long)arg1;
- (void)setIndexs:(int *)arg1 count:(unsigned long long)arg2;

@end
