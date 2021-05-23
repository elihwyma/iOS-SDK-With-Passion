/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h>

@class GEOLatLng, GEOStructuredAddress, NSData, NSMutableArray, NSString, PBDataReader, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDVendorSpecificPlaceRefinementParameters : PBCodable

{
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    GEOStructuredAddress *_addressHint;
    NSData *_addressObjectHint;
    NSString *_externalItemId;
    NSMutableArray *_formattedAddressLineHints;
    GEOLatLng *_locationHint;
    unsigned long long _muid;
    NSString *_placeNameHint;
    NSString *_vendorId;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    int _addressGeocodeAccuracyHint;
    int _placeTypeHint;
    int _resultProviderId;
    struct {
        unsigned int has_muid:1;
        unsigned int has_addressGeocodeAccuracyHint:1;
        unsigned int has_placeTypeHint:1;
        unsigned int has_resultProviderId:1;
        unsigned int read_unknownFields:1;
        unsigned int read_addressHint:1;
        unsigned int read_addressObjectHint:1;
        unsigned int read_externalItemId:1;
        unsigned int read_formattedAddressLineHints:1;
        unsigned int read_locationHint:1;
        unsigned int read_placeNameHint:1;
        unsigned int read_vendorId:1;
        unsigned int wrote_unknownFields:1;
        unsigned int wrote_addressHint:1;
        unsigned int wrote_addressObjectHint:1;
        unsigned int wrote_externalItemId:1;
        unsigned int wrote_formattedAddressLineHints:1;
        unsigned int wrote_locationHint:1;
        unsigned int wrote_muid:1;
        unsigned int wrote_placeNameHint:1;
        unsigned int wrote_vendorId:1;
        unsigned int wrote_addressGeocodeAccuracyHint:1;
        unsigned int wrote_placeTypeHint:1;
        unsigned int wrote_resultProviderId:1;
    } _flags;
}

@property (nonatomic) _Bool hasResultProviderId;
@property (nonatomic) int resultProviderId;
@property (nonatomic) _Bool hasMuid;
@property (nonatomic) unsigned long long muid;
@property (nonatomic, readonly) _Bool hasVendorId;
@property (retain, nonatomic) NSString *vendorId;
@property (nonatomic, readonly) _Bool hasExternalItemId;
@property (retain, nonatomic) NSString *externalItemId;
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
- (void)_readVendorId;
- (void)_readExternalItemId;
- (void)_readAddressObjectHint;
- (id)initWithMuid:(unsigned long long)arg1 locationHint:(CDStruct_c3b9c2ee)arg2 placeNameHint:(id)arg3 resultProviderId:(int)arg4 contentProvider:(id)arg5;
- (id)initWithExternalBusinessID:(id)arg1 contentProvider:(id)arg2;
- (id)initWithMapItemToRefine:(id)arg1 coordinate:(CDStruct_c3b9c2ee)arg2 contentProvider:(id)arg3;
- (id)initWithSearchURLQuery:(id)arg1 coordinate:(CDStruct_c3b9c2ee)arg2 muid:(unsigned long long)arg3 resultProviderId:(int)arg4 contentProvider:(id)arg5;

@end
