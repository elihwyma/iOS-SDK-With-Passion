/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h>

@class PBDataReader, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDPoiIconCategoryFilter : PBCodable

{
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    CDStruct_9f2792e4 _excludeCategoryFilters;
    CDStruct_9f2792e4 _includeCategoryFilters;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    struct {
        unsigned int read_unknownFields:1;
        unsigned int read_excludeCategoryFilters:1;
        unsigned int read_includeCategoryFilters:1;
        unsigned int wrote_unknownFields:1;
        unsigned int wrote_excludeCategoryFilters:1;
        unsigned int wrote_includeCategoryFilters:1;
    } _flags;
}

@property (nonatomic, readonly) unsigned long long includeCategoryFiltersCount;
@property (nonatomic, readonly) unsigned int *includeCategoryFilters;
@property (nonatomic, readonly) unsigned long long excludeCategoryFiltersCount;
@property (nonatomic, readonly) unsigned int *excludeCategoryFilters;
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
- (void)addIncludeCategoryFilter:(unsigned int)arg1;
- (void)addExcludeCategoryFilter:(unsigned int)arg1;
- (void)_readIncludeCategoryFilters;
- (void)_addNoFlagsIncludeCategoryFilter:(unsigned int)arg1;
- (void)_readExcludeCategoryFilters;
- (void)_addNoFlagsExcludeCategoryFilter:(unsigned int)arg1;
- (void)clearIncludeCategoryFilters;
- (unsigned int)includeCategoryFilterAtIndex:(unsigned long long)arg1;
- (void)clearExcludeCategoryFilters;
- (unsigned int)excludeCategoryFilterAtIndex:(unsigned long long)arg1;
- (void)setIncludeCategoryFilters:(unsigned int *)arg1 count:(unsigned long long)arg2;
- (void)setExcludeCategoryFilters:(unsigned int *)arg1 count:(unsigned long long)arg2;

@end
