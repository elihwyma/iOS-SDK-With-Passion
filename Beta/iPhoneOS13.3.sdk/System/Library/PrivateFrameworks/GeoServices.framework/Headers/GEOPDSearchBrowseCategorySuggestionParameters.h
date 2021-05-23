/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h>

@class GEOPDVenueIdentifier, GEOPDViewportInfo, PBDataReader, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDSearchBrowseCategorySuggestionParameters : PBCodable

{
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    CDStruct_95bda58d _engineTypes;
    double _requestLocalTimestamp;
    GEOPDVenueIdentifier *_venueFilter;
    GEOPDViewportInfo *_viewportInfo;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    int _minimumNumberOfCategories;
    int _suggestionType;
    _Bool _isCarplayRequest;
    _Bool _isFlatCategoryListRequest;
    _Bool _isFromNoQueryState;
    struct {
        unsigned int has_requestLocalTimestamp:1;
        unsigned int has_minimumNumberOfCategories:1;
        unsigned int has_suggestionType:1;
        unsigned int has_isCarplayRequest:1;
        unsigned int has_isFlatCategoryListRequest:1;
        unsigned int has_isFromNoQueryState:1;
        unsigned int read_unknownFields:1;
        unsigned int read_engineTypes:1;
        unsigned int read_venueFilter:1;
        unsigned int read_viewportInfo:1;
        unsigned int wrote_unknownFields:1;
        unsigned int wrote_engineTypes:1;
        unsigned int wrote_requestLocalTimestamp:1;
        unsigned int wrote_venueFilter:1;
        unsigned int wrote_viewportInfo:1;
        unsigned int wrote_minimumNumberOfCategories:1;
        unsigned int wrote_suggestionType:1;
        unsigned int wrote_isCarplayRequest:1;
        unsigned int wrote_isFlatCategoryListRequest:1;
        unsigned int wrote_isFromNoQueryState:1;
    } _flags;
}

@property (nonatomic, readonly) _Bool hasViewportInfo;
@property (retain, nonatomic) GEOPDViewportInfo *viewportInfo;
@property (nonatomic) _Bool hasRequestLocalTimestamp;
@property (nonatomic) double requestLocalTimestamp;
@property (nonatomic) _Bool hasMinimumNumberOfCategories;
@property (nonatomic) int minimumNumberOfCategories;
@property (nonatomic) _Bool hasIsCarplayRequest;
@property (nonatomic) _Bool isCarplayRequest;
@property (nonatomic) _Bool hasSuggestionType;
@property (nonatomic) int suggestionType;
@property (nonatomic, readonly) unsigned long long engineTypesCount;
@property (nonatomic, readonly) int *engineTypes;
@property (nonatomic, readonly) _Bool hasVenueFilter;
@property (retain, nonatomic) GEOPDVenueIdentifier *venueFilter;
@property (nonatomic) _Bool hasIsFromNoQueryState;
@property (nonatomic) _Bool isFromNoQueryState;
@property (nonatomic) _Bool hasIsFlatCategoryListRequest;
@property (nonatomic) _Bool isFlatCategoryListRequest;
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
- (void)_readViewportInfo;
- (void)_readVenueFilter;
- (void)_readEngineTypes;
- (void)_addNoFlagsEngineType:(int)arg1;
- (void)clearEngineTypes;
- (int)engineTypeAtIndex:(unsigned long long)arg1;
- (void)addEngineType:(int)arg1;
- (void)setEngineTypes:(int *)arg1 count:(unsigned long long)arg2;
- (id)engineTypesAsString:(int)arg1;
- (int)StringAsEngineTypes:(id)arg1;
- (id)suggestionTypeAsString:(int)arg1;
- (int)StringAsSuggestionType:(id)arg1;

@end
