/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h>

@class GEOLatLng, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDSearchZeroKeywordCategorySuggestionParameters : PBCodable

{
    PBUnknownFields *_unknownFields;
    double _requestLocalTimestamp;
    GEOLatLng *_significantLocation;
    unsigned int _maxNumCategoriesPerEntry;
    int _userPreferredTransportType;
    _Bool _shouldMatchNoQueryStateSuggestions;
    struct {
        unsigned int has_requestLocalTimestamp:1;
        unsigned int has_maxNumCategoriesPerEntry:1;
        unsigned int has_userPreferredTransportType:1;
        unsigned int has_shouldMatchNoQueryStateSuggestions:1;
    } _flags;
}

@property (nonatomic) _Bool hasRequestLocalTimestamp;
@property (nonatomic) double requestLocalTimestamp;
@property (nonatomic, readonly) _Bool hasSignificantLocation;
@property (retain, nonatomic) GEOLatLng *significantLocation;
@property (nonatomic) _Bool hasMaxNumCategoriesPerEntry;
@property (nonatomic) unsigned int maxNumCategoriesPerEntry;
@property (nonatomic) _Bool hasUserPreferredTransportType;
@property (nonatomic) int userPreferredTransportType;
@property (nonatomic) _Bool hasShouldMatchNoQueryStateSuggestions;
@property (nonatomic) _Bool shouldMatchNoQueryStateSuggestions;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (_Bool)isValid:(id)arg1;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;
- (void)readAll:(_Bool)arg1;
- (void)clearUnknownFields:(_Bool)arg1;
- (id)userPreferredTransportTypeAsString:(int)arg1;
- (int)StringAsUserPreferredTransportType:(id)arg1;

@end
