/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h>

@class GEOPDViewportInfo, NSMutableArray, NSString, PBDataReader, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDAutocompleteParametersVenueSearch : PBCodable

{
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    unsigned long long _buildingId;
    NSMutableArray *_categorys;
    unsigned long long _levelId;
    NSString *_query;
    unsigned long long _sectionId;
    unsigned long long _venueId;
    GEOPDViewportInfo *_viewportInfo;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    int _maxResults;
    _Bool _highlightDiff;
    struct {
        unsigned int has_buildingId:1;
        unsigned int has_levelId:1;
        unsigned int has_sectionId:1;
        unsigned int has_venueId:1;
        unsigned int has_maxResults:1;
        unsigned int has_highlightDiff:1;
        unsigned int read_unknownFields:1;
        unsigned int read_categorys:1;
        unsigned int read_query:1;
        unsigned int read_viewportInfo:1;
        unsigned int wrote_unknownFields:1;
        unsigned int wrote_buildingId:1;
        unsigned int wrote_categorys:1;
        unsigned int wrote_levelId:1;
        unsigned int wrote_query:1;
        unsigned int wrote_sectionId:1;
        unsigned int wrote_venueId:1;
        unsigned int wrote_viewportInfo:1;
        unsigned int wrote_maxResults:1;
        unsigned int wrote_highlightDiff:1;
    } _flags;
}

@property (nonatomic, readonly) _Bool hasQuery;
@property (retain, nonatomic) NSString *query;
@property (nonatomic, readonly) _Bool hasViewportInfo;
@property (retain, nonatomic) GEOPDViewportInfo *viewportInfo;
@property (nonatomic) _Bool hasMaxResults;
@property (nonatomic) int maxResults;
@property (nonatomic) _Bool hasHighlightDiff;
@property (nonatomic) _Bool highlightDiff;
@property (nonatomic) _Bool hasVenueId;
@property (nonatomic) unsigned long long venueId;
@property (nonatomic) _Bool hasLevelId;
@property (nonatomic) unsigned long long levelId;
@property (nonatomic) _Bool hasSectionId;
@property (nonatomic) unsigned long long sectionId;
@property (nonatomic) _Bool hasBuildingId;
@property (nonatomic) unsigned long long buildingId;
@property (retain, nonatomic) NSMutableArray *categorys;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (Class)categoryType;
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
- (void)_readQuery;
- (void)_readCategorys;
- (void)_addNoFlagsCategory:(id)arg1;
- (unsigned long long)categorysCount;
- (void)clearCategorys;
- (id)categoryAtIndex:(unsigned long long)arg1;
- (void)addCategory:(id)arg1;
- (void)_readViewportInfo;

@end
