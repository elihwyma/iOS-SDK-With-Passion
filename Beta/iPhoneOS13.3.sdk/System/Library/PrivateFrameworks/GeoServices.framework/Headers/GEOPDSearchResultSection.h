/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h>

@class NSMutableArray, NSString, PBDataReader, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDSearchResultSection : PBCodable

{
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    NSMutableArray *_resolvedItems;
    NSString *_sectionHeaderDisplayName;
    NSString *_sectionSubHeaderDisplayName;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    int _searchResultSectionCellType;
    int _searchResultSectionType;
    struct {
        unsigned int has_searchResultSectionCellType:1;
        unsigned int has_searchResultSectionType:1;
        unsigned int read_unknownFields:1;
        unsigned int read_resolvedItems:1;
        unsigned int read_sectionHeaderDisplayName:1;
        unsigned int read_sectionSubHeaderDisplayName:1;
        unsigned int wrote_unknownFields:1;
        unsigned int wrote_resolvedItems:1;
        unsigned int wrote_sectionHeaderDisplayName:1;
        unsigned int wrote_sectionSubHeaderDisplayName:1;
        unsigned int wrote_searchResultSectionCellType:1;
        unsigned int wrote_searchResultSectionType:1;
    } _flags;
}

@property (nonatomic, readonly) _Bool hasSectionHeaderDisplayName;
@property (retain, nonatomic) NSString *sectionHeaderDisplayName;
@property (retain, nonatomic) NSMutableArray *resolvedItems;
@property (nonatomic) _Bool hasSearchResultSectionType;
@property (nonatomic) int searchResultSectionType;
@property (nonatomic, readonly) _Bool hasSectionSubHeaderDisplayName;
@property (retain, nonatomic) NSString *sectionSubHeaderDisplayName;
@property (nonatomic) _Bool hasSearchResultSectionCellType;
@property (nonatomic) int searchResultSectionCellType;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (_Bool)isValid:(id)arg1;
+ (Class)resolvedItemType;

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
- (void)_readSectionHeaderDisplayName;
- (void)_readResolvedItems;
- (void)_addNoFlagsResolvedItem:(id)arg1;
- (void)_readSectionSubHeaderDisplayName;
- (unsigned long long)resolvedItemsCount;
- (void)clearResolvedItems;
- (id)resolvedItemAtIndex:(unsigned long long)arg1;
- (void)addResolvedItem:(id)arg1;
- (id)searchResultSectionTypeAsString:(int)arg1;
- (int)StringAsSearchResultSectionType:(id)arg1;
- (id)searchResultSectionCellTypeAsString:(int)arg1;
- (int)StringAsSearchResultSectionCellType:(id)arg1;

@end
