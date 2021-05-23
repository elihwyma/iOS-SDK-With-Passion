/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h>

@class GEOStyleAttributes, NSData, NSMutableArray, NSString, PBDataReader, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDBrowseCategory : PBCodable

{
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    NSString *_displayString;
    NSString *_popularDisplayToken;
    NSString *_shortDisplayString;
    GEOStyleAttributes *_styleAttributes;
    NSMutableArray *_subCategorys;
    NSData *_suggestionEntryMetadata;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    int _displayMode;
    int _sortOrder;
    int _subCategoryType;
    _Bool _isSubCategorySameAsTopLevel;
    struct {
        unsigned int has_displayMode:1;
        unsigned int has_sortOrder:1;
        unsigned int has_subCategoryType:1;
        unsigned int has_isSubCategorySameAsTopLevel:1;
        unsigned int read_unknownFields:1;
        unsigned int read_displayString:1;
        unsigned int read_popularDisplayToken:1;
        unsigned int read_shortDisplayString:1;
        unsigned int read_styleAttributes:1;
        unsigned int read_subCategorys:1;
        unsigned int read_suggestionEntryMetadata:1;
        unsigned int wrote_unknownFields:1;
        unsigned int wrote_displayString:1;
        unsigned int wrote_popularDisplayToken:1;
        unsigned int wrote_shortDisplayString:1;
        unsigned int wrote_styleAttributes:1;
        unsigned int wrote_subCategorys:1;
        unsigned int wrote_suggestionEntryMetadata:1;
        unsigned int wrote_displayMode:1;
        unsigned int wrote_sortOrder:1;
        unsigned int wrote_subCategoryType:1;
        unsigned int wrote_isSubCategorySameAsTopLevel:1;
    } _flags;
}

@property (nonatomic, readonly) _Bool hasSuggestionEntryMetadata;
@property (retain, nonatomic) NSData *suggestionEntryMetadata;
@property (nonatomic, readonly) _Bool hasDisplayString;
@property (retain, nonatomic) NSString *displayString;
@property (nonatomic, readonly) _Bool hasStyleAttributes;
@property (retain, nonatomic) GEOStyleAttributes *styleAttributes;
@property (retain, nonatomic) NSMutableArray *subCategorys;
@property (nonatomic, readonly) _Bool hasShortDisplayString;
@property (retain, nonatomic) NSString *shortDisplayString;
@property (nonatomic, readonly) _Bool hasPopularDisplayToken;
@property (retain, nonatomic) NSString *popularDisplayToken;
@property (nonatomic) _Bool hasSortOrder;
@property (nonatomic) int sortOrder;
@property (nonatomic) _Bool hasDisplayMode;
@property (nonatomic) int displayMode;
@property (nonatomic) _Bool hasSubCategoryType;
@property (nonatomic) int subCategoryType;
@property (nonatomic) _Bool hasIsSubCategorySameAsTopLevel;
@property (nonatomic) _Bool isSubCategorySameAsTopLevel;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (_Bool)isValid:(id)arg1;
+ (Class)subCategoryType;

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
- (void)_readStyleAttributes;
- (id)sortOrderAsString:(int)arg1;
- (int)StringAsSortOrder:(id)arg1;
- (void)_readSuggestionEntryMetadata;
- (unsigned long long)subCategorysCount;
- (void)_readDisplayString;
- (void)_readSubCategorys;
- (void)_addNoFlagsSubCategory:(id)arg1;
- (void)_readShortDisplayString;
- (void)_readPopularDisplayToken;
- (void)clearSubCategorys;
- (id)subCategoryAtIndex:(unsigned long long)arg1;
- (void)addSubCategory:(id)arg1;
- (id)displayModeAsString:(int)arg1;
- (int)StringAsDisplayMode:(id)arg1;
- (id)subCategoryTypeAsString:(int)arg1;
- (int)StringAsSubCategoryType:(id)arg1;

@end
