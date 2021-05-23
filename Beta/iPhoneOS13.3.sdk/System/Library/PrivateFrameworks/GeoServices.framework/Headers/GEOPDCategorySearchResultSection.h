/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h>

@class NSString, PBDataReader, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDCategorySearchResultSection : PBCodable

{
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    NSString *_sectionHeaderDisplayName;
    NSString *_sectionSubHeaderDisplayName;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    int _categorySearchResultSectionCellType;
    struct {
        unsigned int has_categorySearchResultSectionCellType:1;
        unsigned int read_unknownFields:1;
        unsigned int read_sectionHeaderDisplayName:1;
        unsigned int read_sectionSubHeaderDisplayName:1;
        unsigned int wrote_unknownFields:1;
        unsigned int wrote_sectionHeaderDisplayName:1;
        unsigned int wrote_sectionSubHeaderDisplayName:1;
        unsigned int wrote_categorySearchResultSectionCellType:1;
    } _flags;
}

@property (nonatomic, readonly) _Bool hasSectionHeaderDisplayName;
@property (retain, nonatomic) NSString *sectionHeaderDisplayName;
@property (nonatomic, readonly) _Bool hasSectionSubHeaderDisplayName;
@property (retain, nonatomic) NSString *sectionSubHeaderDisplayName;
@property (nonatomic) _Bool hasCategorySearchResultSectionCellType;
@property (nonatomic) int categorySearchResultSectionCellType;
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
- (void)_readSectionHeaderDisplayName;
- (void)_readSectionSubHeaderDisplayName;
- (id)categorySearchResultSectionCellTypeAsString:(int)arg1;
- (int)StringAsCategorySearchResultSectionCellType:(id)arg1;

@end
