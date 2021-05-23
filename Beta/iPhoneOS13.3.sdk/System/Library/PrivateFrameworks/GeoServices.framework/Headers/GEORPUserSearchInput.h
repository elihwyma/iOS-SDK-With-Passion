/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h>

@class GEOLatLng, GEOPDAutocompleteEntry, GEOPDPlace, NSString, PBDataReader;

@interface GEORPUserSearchInput : PBCodable

{
    PBDataReader *_reader;
    GEOPDAutocompleteEntry *_autocompleteEntry;
    GEOLatLng *_coordinate;
    GEOPDPlace *_place;
    NSString *_searchString;
    NSString *_singleLineAddressString;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    int _origin;
    struct {
        unsigned int has_origin:1;
        unsigned int read_autocompleteEntry:1;
        unsigned int read_coordinate:1;
        unsigned int read_place:1;
        unsigned int read_searchString:1;
        unsigned int read_singleLineAddressString:1;
        unsigned int wrote_autocompleteEntry:1;
        unsigned int wrote_coordinate:1;
        unsigned int wrote_place:1;
        unsigned int wrote_searchString:1;
        unsigned int wrote_singleLineAddressString:1;
        unsigned int wrote_origin:1;
    } _flags;
}

@property (nonatomic, readonly) _Bool hasSearchString;
@property (retain, nonatomic) NSString *searchString;
@property (nonatomic, readonly) _Bool hasSingleLineAddressString;
@property (retain, nonatomic) NSString *singleLineAddressString;
@property (nonatomic, readonly) _Bool hasPlace;
@property (retain, nonatomic) GEOPDPlace *place;
@property (nonatomic, readonly) _Bool hasAutocompleteEntry;
@property (retain, nonatomic) GEOPDAutocompleteEntry *autocompleteEntry;
@property (nonatomic, readonly) _Bool hasCoordinate;
@property (retain, nonatomic) GEOLatLng *coordinate;
@property (nonatomic) _Bool hasOrigin;
@property (nonatomic) int origin;

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
- (void)_readSearchString;
- (void)_readPlace;
- (void)_readCoordinate;
- (id)originAsString:(int)arg1;
- (int)StringAsOrigin:(id)arg1;
- (void)_readSingleLineAddressString;
- (void)_readAutocompleteEntry;

@end
