/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h>

@class GEOLatLng, GEOStructuredAddress, NSMutableArray, NSString, PBDataReader, PBUnknownFields;

@interface GEOWaypointID : PBCodable

{
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    GEOStructuredAddress *_addressHint;
    NSMutableArray *_formattedAddressLineHints;
    GEOLatLng *_locationHint;
    unsigned long long _muid;
    NSString *_placeNameHint;
    unsigned long long _resultProviderId;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    int _addressGeocodeAccuracyHint;
    int _placeTypeHint;
    struct {
        unsigned int has_muid:1;
        unsigned int has_resultProviderId:1;
        unsigned int has_addressGeocodeAccuracyHint:1;
        unsigned int has_placeTypeHint:1;
        unsigned int read_unknownFields:1;
        unsigned int read_addressHint:1;
        unsigned int read_formattedAddressLineHints:1;
        unsigned int read_locationHint:1;
        unsigned int read_placeNameHint:1;
        unsigned int wrote_unknownFields:1;
        unsigned int wrote_addressHint:1;
        unsigned int wrote_formattedAddressLineHints:1;
        unsigned int wrote_locationHint:1;
        unsigned int wrote_muid:1;
        unsigned int wrote_placeNameHint:1;
        unsigned int wrote_resultProviderId:1;
        unsigned int wrote_addressGeocodeAccuracyHint:1;
        unsigned int wrote_placeTypeHint:1;
    } _flags;
}

@property (nonatomic) _Bool hasMuid;
@property (nonatomic) unsigned long long muid;
@property (nonatomic) _Bool hasResultProviderId;
@property (nonatomic) unsigned long long resultProviderId;
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

@end
