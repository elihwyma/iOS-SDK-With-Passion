/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h>

@class GEOLatLng, GEOPDMapsIdentifier, GEOStructuredAddress, NSData, NSMutableArray, NSString, PBDataReader, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDPlaceRefinementParameters : PBCodable

{
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    GEOStructuredAddress *_addressHint;
    NSData *_addressObjectHint;
    NSMutableArray *_formattedAddressLineHints;
    GEOLatLng *_locationHint;
    GEOPDMapsIdentifier *_mapsId;
    unsigned long long _muid;
    NSString *_placeNameHint;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    int _addressGeocodeAccuracyHint;
    int _placeTypeHint;
    int _resultProviderId;
    _Bool _supportCoordinatesOnlyRefinement;
    struct {
        unsigned int has_muid:1;
        unsigned int has_addressGeocodeAccuracyHint:1;
        unsigned int has_placeTypeHint:1;
        unsigned int has_resultProviderId:1;
        unsigned int has_supportCoordinatesOnlyRefinement:1;
        unsigned int read_unknownFields:1;
        unsigned int read_addressHint:1;
        unsigned int read_addressObjectHint:1;
        unsigned int read_formattedAddressLineHints:1;
        unsigned int read_locationHint:1;
        unsigned int read_mapsId:1;
        unsigned int read_placeNameHint:1;
        unsigned int wrote_unknownFields:1;
        unsigned int wrote_addressHint:1;
        unsigned int wrote_addressObjectHint:1;
        unsigned int wrote_formattedAddressLineHints:1;
        unsigned int wrote_locationHint:1;
        unsigned int wrote_mapsId:1;
        unsigned int wrote_muid:1;
        unsigned int wrote_placeNameHint:1;
        unsigned int wrote_addressGeocodeAccuracyHint:1;
        unsigned int wrote_placeTypeHint:1;
        unsigned int wrote_resultProviderId:1;
        unsigned int wrote_supportCoordinatesOnlyRefinement:1;
    } _flags;
}

@property (nonatomic) _Bool hasResultProviderId;
@property (nonatomic) int resultProviderId;
@property (nonatomic) _Bool hasMuid;
@property (nonatomic) unsigned long long muid;
@property (nonatomic, readonly) _Bool hasLocationHint;
@property (retain, nonatomic) GEOLatLng *locationHint;
@property (nonatomic, readonly) _Bool hasAddressHint;
@property (retain, nonatomic) GEOStructuredAddress *addressHint;
@property (nonatomic, readonly) _Bool hasPlaceNameHint;
@property (retain, nonatomic) NSString *placeNameHint;
@property (retain, nonatomic) NSMutableArray *formattedAddressLineHints;
@property (nonatomic) _Bool hasPlaceTypeHint;
@property (nonatomic) int placeTypeHint;
@property (nonatomic) _Bool hasAddressGeocodeAccuracyHint;
@property (nonatomic) int addressGeocodeAccuracyHint;
@property (nonatomic, readonly) _Bool hasAddressObjectHint;
@property (retain, nonatomic) NSData *addressObjectHint;
@property (nonatomic) _Bool hasSupportCoordinatesOnlyRefinement;
@property (nonatomic) _Bool supportCoordinatesOnlyRefinement;
@property (nonatomic, readonly) _Bool hasMapsId;
@property (retain, nonatomic) GEOPDMapsIdentifier *mapsId;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (_Bool)isValid:(id)arg1;
+ (Class)formattedAddressLineHintType;

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
- (void)_readMapsId;
- (void)_readLocationHint;
- (void)_readAddressHint;
- (void)_readPlaceNameHint;
- (void)_readFormattedAddressLineHints;
- (void)_addNoFlagsFormattedAddressLineHint:(id)arg1;
- (unsigned long long)formattedAddressLineHintsCount;
- (void)clearFormattedAddressLineHints;
- (id)formattedAddressLineHintAtIndex:(unsigned long long)arg1;
- (void)addFormattedAddressLineHint:(id)arg1;
- (id)placeTypeHintAsString:(int)arg1;
- (int)StringAsPlaceTypeHint:(id)arg1;
- (id)addressGeocodeAccuracyHintAsString:(int)arg1;
- (int)StringAsAddressGeocodeAccuracyHint:(id)arg1;
- (_Bool)_hasRequiredFields;
- (unsigned long long)_routeHypothesisPlaceRefinementParametersHash;
- (_Bool)_routeHypothesisPlaceRefinementParametersIsEqual:(id)arg1;
- (void)_readAddressObjectHint;
- (id)initWithIdentifier:(id)arg1 placeNameHint:(id)arg2 locationHint:(CDStruct_c3b9c2ee)arg3;
- (id)initWithMapItemToRefine:(id)arg1 coordinate:(CDStruct_c3b9c2ee)arg2;
- (id)initWithSearchURLQuery:(id)arg1 identifier:(id)arg2;

@end
