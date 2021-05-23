/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h>

@class GEOPDAutocompleteFilter, GEOPDAutocompleteParametersAddressOnly, GEOPDAutocompleteParametersAllEntries, GEOPDAutocompleteParametersAllEntriesWithBrowse, GEOPDAutocompleteParametersBrandProfileSearch, GEOPDAutocompleteParametersFullEntriesOnly, GEOPDAutocompleteParametersLocalitiesAndLandmarks, GEOPDAutocompleteParametersOfflineRegionSearch, GEOPDAutocompleteParametersPoiAddressOnly, GEOPDAutocompleteParametersSiriSearch, GEOPDAutocompleteParametersVenueSearch, GEOPDAutocompleteSessionData, PBDataReader, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDAutocompleteParameters : PBCodable

{
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    GEOPDAutocompleteParametersAddressOnly *_addressOnly;
    GEOPDAutocompleteParametersAllEntriesWithBrowse *_allEntriesWithBrowse;
    GEOPDAutocompleteParametersAllEntries *_allEntries;
    GEOPDAutocompleteFilter *_autocompleteFilter;
    GEOPDAutocompleteSessionData *_autocompleteSessionData;
    GEOPDAutocompleteParametersBrandProfileSearch *_brandProfileSearch;
    GEOPDAutocompleteParametersFullEntriesOnly *_fullEntries;
    GEOPDAutocompleteParametersLocalitiesAndLandmarks *_localitiesAndLandmarks;
    GEOPDAutocompleteParametersOfflineRegionSearch *_offlineRegionSearch;
    GEOPDAutocompleteParametersPoiAddressOnly *_poiAddressOnly;
    GEOPDAutocompleteParametersSiriSearch *_siriSearch;
    GEOPDAutocompleteParametersVenueSearch *_venueSearch;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    int _requestType;
    _Bool _shouldPopulateMapsIdentifier;
    _Bool _supportAutocompleteSessionData;
    struct {
        unsigned int has_requestType:1;
        unsigned int has_shouldPopulateMapsIdentifier:1;
        unsigned int has_supportAutocompleteSessionData:1;
        unsigned int read_unknownFields:1;
        unsigned int read_addressOnly:1;
        unsigned int read_allEntriesWithBrowse:1;
        unsigned int read_allEntries:1;
        unsigned int read_autocompleteFilter:1;
        unsigned int read_autocompleteSessionData:1;
        unsigned int read_brandProfileSearch:1;
        unsigned int read_fullEntries:1;
        unsigned int read_localitiesAndLandmarks:1;
        unsigned int read_offlineRegionSearch:1;
        unsigned int read_poiAddressOnly:1;
        unsigned int read_siriSearch:1;
        unsigned int read_venueSearch:1;
        unsigned int wrote_unknownFields:1;
        unsigned int wrote_addressOnly:1;
        unsigned int wrote_allEntriesWithBrowse:1;
        unsigned int wrote_allEntries:1;
        unsigned int wrote_autocompleteFilter:1;
        unsigned int wrote_autocompleteSessionData:1;
        unsigned int wrote_brandProfileSearch:1;
        unsigned int wrote_fullEntries:1;
        unsigned int wrote_localitiesAndLandmarks:1;
        unsigned int wrote_offlineRegionSearch:1;
        unsigned int wrote_poiAddressOnly:1;
        unsigned int wrote_siriSearch:1;
        unsigned int wrote_venueSearch:1;
        unsigned int wrote_requestType:1;
        unsigned int wrote_shouldPopulateMapsIdentifier:1;
        unsigned int wrote_supportAutocompleteSessionData:1;
    } _flags;
}

@property (nonatomic) _Bool hasRequestType;
@property (nonatomic) int requestType;
@property (nonatomic, readonly) _Bool hasFullEntries;
@property (retain, nonatomic) GEOPDAutocompleteParametersFullEntriesOnly *fullEntries;
@property (nonatomic, readonly) _Bool hasAllEntries;
@property (retain, nonatomic) GEOPDAutocompleteParametersAllEntries *allEntries;
@property (nonatomic, readonly) _Bool hasLocalitiesAndLandmarks;
@property (retain, nonatomic) GEOPDAutocompleteParametersLocalitiesAndLandmarks *localitiesAndLandmarks;
@property (nonatomic, readonly) _Bool hasAllEntriesWithBrowse;
@property (retain, nonatomic) GEOPDAutocompleteParametersAllEntriesWithBrowse *allEntriesWithBrowse;
@property (nonatomic, readonly) _Bool hasSiriSearch;
@property (retain, nonatomic) GEOPDAutocompleteParametersSiriSearch *siriSearch;
@property (nonatomic, readonly) _Bool hasAddressOnly;
@property (retain, nonatomic) GEOPDAutocompleteParametersAddressOnly *addressOnly;
@property (nonatomic, readonly) _Bool hasVenueSearch;
@property (retain, nonatomic) GEOPDAutocompleteParametersVenueSearch *venueSearch;
@property (nonatomic, readonly) _Bool hasBrandProfileSearch;
@property (retain, nonatomic) GEOPDAutocompleteParametersBrandProfileSearch *brandProfileSearch;
@property (nonatomic, readonly) _Bool hasOfflineRegionSearch;
@property (retain, nonatomic) GEOPDAutocompleteParametersOfflineRegionSearch *offlineRegionSearch;
@property (nonatomic, readonly) _Bool hasPoiAddressOnly;
@property (retain, nonatomic) GEOPDAutocompleteParametersPoiAddressOnly *poiAddressOnly;
@property (nonatomic, readonly) _Bool hasAutocompleteFilter;
@property (retain, nonatomic) GEOPDAutocompleteFilter *autocompleteFilter;
@property (nonatomic) _Bool hasShouldPopulateMapsIdentifier;
@property (nonatomic) _Bool shouldPopulateMapsIdentifier;
@property (nonatomic) _Bool hasSupportAutocompleteSessionData;
@property (nonatomic) _Bool supportAutocompleteSessionData;
@property (nonatomic, readonly) _Bool hasAutocompleteSessionData;
@property (retain, nonatomic) GEOPDAutocompleteSessionData *autocompleteSessionData;
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
- (id)requestTypeAsString:(int)arg1;
- (int)StringAsRequestType:(id)arg1;
- (void)clearSensitiveFields;
- (void)_readAutocompleteSessionData;
- (void)_readFullEntries;
- (void)_readAllEntries;
- (void)_readLocalitiesAndLandmarks;
- (void)_readAllEntriesWithBrowse;
- (void)_readSiriSearch;
- (void)_readAddressOnly;
- (void)_readVenueSearch;
- (void)_readBrandProfileSearch;
- (void)_readOfflineRegionSearch;
- (void)_readPoiAddressOnly;
- (void)_readAutocompleteFilter;

@end
