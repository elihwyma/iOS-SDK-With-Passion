/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBRequest.h>

@class NSMutableArray, NSString, PBDataReader;

__attribute__((visibility("hidden")))
@interface GEOBatchRevGeocodeRequest : PBRequest

{
    PBDataReader *_reader;
    CDStruct_95bda58d _additionalPlaceTypes;
    NSString *_deviceCountryCode;
    NSString *_deviceSku;
    NSString *_displayRegion;
    NSMutableArray *_locations;
    NSMutableArray *_serviceTags;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    struct {
        unsigned int read_additionalPlaceTypes:1;
        unsigned int read_deviceCountryCode:1;
        unsigned int read_deviceSku:1;
        unsigned int read_displayRegion:1;
        unsigned int read_locations:1;
        unsigned int read_serviceTags:1;
        unsigned int wrote_additionalPlaceTypes:1;
        unsigned int wrote_deviceCountryCode:1;
        unsigned int wrote_deviceSku:1;
        unsigned int wrote_displayRegion:1;
        unsigned int wrote_locations:1;
        unsigned int wrote_serviceTags:1;
    } _flags;
}

@property (retain, nonatomic) NSMutableArray *locations;
@property (nonatomic, readonly) unsigned long long additionalPlaceTypesCount;
@property (nonatomic, readonly) int *additionalPlaceTypes;
@property (nonatomic, readonly) _Bool hasDeviceCountryCode;
@property (retain, nonatomic) NSString *deviceCountryCode;
@property (nonatomic, readonly) _Bool hasDisplayRegion;
@property (retain, nonatomic) NSString *displayRegion;
@property (nonatomic, readonly) _Bool hasDeviceSku;
@property (retain, nonatomic) NSString *deviceSku;
@property (retain, nonatomic) NSMutableArray *serviceTags;

+ (_Bool)isValid:(id)arg1;
+ (Class)serviceTagType;
+ (Class)locationType;

- (id)init;
- (void)dealloc;
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
- (unsigned int)requestTypeCode;
- (Class)responseClass;
- (void)readAll:(_Bool)arg1;
- (void)clearSensitiveFields;
- (void)_readServiceTags;
- (void)_addNoFlagsServiceTag:(id)arg1;
- (unsigned long long)serviceTagsCount;
- (void)clearServiceTags;
- (id)serviceTagAtIndex:(unsigned long long)arg1;
- (void)addServiceTag:(id)arg1;
- (void)_readDisplayRegion;
- (void)_readAdditionalPlaceTypes;
- (void)_addNoFlagsAdditionalPlaceType:(int)arg1;
- (void)_readDeviceCountryCode;
- (void)clearAdditionalPlaceTypes;
- (int)additionalPlaceTypeAtIndex:(unsigned long long)arg1;
- (void)addAdditionalPlaceType:(int)arg1;
- (void)setAdditionalPlaceTypes:(int *)arg1 count:(unsigned long long)arg2;
- (id)additionalPlaceTypesAsString:(int)arg1;
- (int)StringAsAdditionalPlaceTypes:(id)arg1;
- (void)_readDeviceSku;
- (void)addLocation:(id)arg1;
- (unsigned long long)locationsCount;
- (void)clearLocations;
- (id)locationAtIndex:(unsigned long long)arg1;
- (void)_readLocations;
- (void)_addNoFlagsLocation:(id)arg1;

@end
