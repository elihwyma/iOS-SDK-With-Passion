/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h>

@class NSMutableArray, PBDataReader, PBUnknownFields;

@interface GEOTransitClusterArtworkSet : PBCodable

{
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    CDStruct_9f2792e4 _artworkIndexs;
    NSMutableArray *_artworkItems;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    struct {
        unsigned int read_unknownFields:1;
        unsigned int read_artworkIndexs:1;
        unsigned int read_artworkItems:1;
        unsigned int wrote_unknownFields:1;
        unsigned int wrote_artworkIndexs:1;
        unsigned int wrote_artworkItems:1;
    } _flags;
}

@property (nonatomic, readonly) unsigned long long artworkIndexsCount;
@property (nonatomic, readonly) unsigned int *artworkIndexs;
@property (retain, nonatomic) NSMutableArray *artworkItems;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (_Bool)isValid:(id)arg1;
+ (Class)artworkItemType;

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
- (unsigned long long)artworkItemsCount;
- (id)_maps_artworkIndicesAsString;
- (void)_readArtworkIndexs;
- (void)_addNoFlagsArtworkIndex:(unsigned int)arg1;
- (void)_readArtworkItems;
- (void)_addNoFlagsArtworkItem:(id)arg1;
- (void)clearArtworkIndexs;
- (unsigned int)artworkIndexAtIndex:(unsigned long long)arg1;
- (void)addArtworkIndex:(unsigned int)arg1;
- (void)clearArtworkItems;
- (id)artworkItemAtIndex:(unsigned long long)arg1;
- (void)addArtworkItem:(id)arg1;
- (void)setArtworkIndexs:(unsigned int *)arg1 count:(unsigned long long)arg2;

@end
