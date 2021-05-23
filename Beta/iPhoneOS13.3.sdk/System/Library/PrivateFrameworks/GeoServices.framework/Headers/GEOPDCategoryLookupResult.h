/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h>

@class GEOPDCategoryInformation, GEOPDCategoryLookupParameters, PBDataReader, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDCategoryLookupResult : PBCodable

{
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    GEOPDCategoryInformation *_categoryInfo;
    GEOPDCategoryLookupParameters *_categoryLookupParam;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    struct {
        unsigned int read_unknownFields:1;
        unsigned int read_categoryInfo:1;
        unsigned int read_categoryLookupParam:1;
        unsigned int wrote_unknownFields:1;
        unsigned int wrote_categoryInfo:1;
        unsigned int wrote_categoryLookupParam:1;
    } _flags;
}

@property (nonatomic, readonly) _Bool hasCategoryLookupParam;
@property (retain, nonatomic) GEOPDCategoryLookupParameters *categoryLookupParam;
@property (nonatomic, readonly) _Bool hasCategoryInfo;
@property (retain, nonatomic) GEOPDCategoryInformation *categoryInfo;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

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
- (void)clearUnknownFields:(_Bool)arg1;
- (void)_readCategoryLookupParam;
- (void)_readCategoryInfo;

@end
