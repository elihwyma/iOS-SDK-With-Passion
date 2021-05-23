/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h>

@class GEOPDAutocompleteEntry, GEOPDBrowseCategory, PBDataReader, PBUnknownFields;

@interface GEOSearchCategoryStorage : PBCodable

{
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    GEOPDAutocompleteEntry *_autocompleteEntry;
    GEOPDBrowseCategory *_browseCategory;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    struct {
        unsigned int read_unknownFields:1;
        unsigned int read_autocompleteEntry:1;
        unsigned int read_browseCategory:1;
        unsigned int wrote_unknownFields:1;
        unsigned int wrote_autocompleteEntry:1;
        unsigned int wrote_browseCategory:1;
    } _flags;
}

@property (nonatomic, readonly) _Bool hasBrowseCategory;
@property (retain, nonatomic) GEOPDBrowseCategory *browseCategory;
@property (nonatomic, readonly) _Bool hasAutocompleteEntry;
@property (retain, nonatomic) GEOPDAutocompleteEntry *autocompleteEntry;
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
- (void)clearSensitiveFields;
- (id)initWithSearchCategory:(id)arg1;
- (void)_readAutocompleteEntry;
- (void)_readBrowseCategory;

@end
