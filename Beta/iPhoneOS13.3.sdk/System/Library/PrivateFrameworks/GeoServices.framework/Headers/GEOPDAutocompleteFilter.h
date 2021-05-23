/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h>

@class GEOPDPoiIconCategoryFilter, PBDataReader, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDAutocompleteFilter : PBCodable

{
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    CDStruct_95bda58d _requestedEntryTypes;
    GEOPDPoiIconCategoryFilter *_poiIconCategoryFilter;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    struct {
        unsigned int read_unknownFields:1;
        unsigned int read_requestedEntryTypes:1;
        unsigned int read_poiIconCategoryFilter:1;
        unsigned int wrote_unknownFields:1;
        unsigned int wrote_requestedEntryTypes:1;
        unsigned int wrote_poiIconCategoryFilter:1;
    } _flags;
}

@property (nonatomic, readonly) unsigned long long requestedEntryTypesCount;
@property (nonatomic, readonly) int *requestedEntryTypes;
@property (nonatomic, readonly) _Bool hasPoiIconCategoryFilter;
@property (retain, nonatomic) GEOPDPoiIconCategoryFilter *poiIconCategoryFilter;
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
- (int)requestedEntryTypeAtIndex:(unsigned long long)arg1;
- (void)setRequestedEntryTypes:(int *)arg1 count:(unsigned long long)arg2;
- (void)addRequestedEntryType:(int)arg1;
- (void)clearRequestedEntryTypes;
- (void)_readRequestedEntryTypes;
- (void)_addNoFlagsRequestedEntryType:(int)arg1;
- (void)_readPoiIconCategoryFilter;
- (id)requestedEntryTypesAsString:(int)arg1;
- (int)StringAsRequestedEntryTypes:(id)arg1;

@end
