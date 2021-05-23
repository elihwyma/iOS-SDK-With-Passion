/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h>

@class GEOPDBrowseCategory, PBDataReader, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDSearchResultsForCategoryEntry : PBCodable

{
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    CDStruct_9f2792e4 _placeIndexs;
    GEOPDBrowseCategory *_category;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    struct {
        unsigned int read_unknownFields:1;
        unsigned int read_placeIndexs:1;
        unsigned int read_category:1;
        unsigned int wrote_unknownFields:1;
        unsigned int wrote_placeIndexs:1;
        unsigned int wrote_category:1;
    } _flags;
}

@property (nonatomic, readonly) _Bool hasCategory;
@property (retain, nonatomic) GEOPDBrowseCategory *category;
@property (nonatomic, readonly) unsigned long long placeIndexsCount;
@property (nonatomic, readonly) unsigned int *placeIndexs;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (_Bool)isValid:(id)arg1;

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
- (void)_readCategory;
- (void)_readPlaceIndexs;
- (void)_addNoFlagsPlaceIndex:(unsigned int)arg1;
- (void)clearPlaceIndexs;
- (unsigned int)placeIndexAtIndex:(unsigned long long)arg1;
- (void)addPlaceIndex:(unsigned int)arg1;
- (void)setPlaceIndexs:(unsigned int *)arg1 count:(unsigned long long)arg2;

@end
