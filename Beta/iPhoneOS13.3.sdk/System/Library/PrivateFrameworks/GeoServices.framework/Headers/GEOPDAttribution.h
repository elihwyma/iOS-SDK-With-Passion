/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h>

@class NSMutableArray, NSString, PBDataReader, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDAttribution : PBCodable

{
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    NSString *_actionUrlComponent;
    NSMutableArray *_attributionUrls;
    NSString *_externalComponentId;
    NSString *_externalItemId;
    NSString *_vendorId;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    struct {
        unsigned int read_unknownFields:1;
        unsigned int read_actionUrlComponent:1;
        unsigned int read_attributionUrls:1;
        unsigned int read_externalComponentId:1;
        unsigned int read_externalItemId:1;
        unsigned int read_vendorId:1;
        unsigned int wrote_unknownFields:1;
        unsigned int wrote_actionUrlComponent:1;
        unsigned int wrote_attributionUrls:1;
        unsigned int wrote_externalComponentId:1;
        unsigned int wrote_externalItemId:1;
        unsigned int wrote_vendorId:1;
    } _flags;
}

@property (nonatomic, readonly) _Bool hasVendorId;
@property (retain, nonatomic) NSString *vendorId;
@property (nonatomic, readonly) _Bool hasExternalItemId;
@property (retain, nonatomic) NSString *externalItemId;
@property (nonatomic, readonly) _Bool hasExternalComponentId;
@property (retain, nonatomic) NSString *externalComponentId;
@property (retain, nonatomic) NSMutableArray *attributionUrls;
@property (nonatomic, readonly) _Bool hasActionUrlComponent;
@property (retain, nonatomic) NSString *actionUrlComponent;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (_Bool)isValid:(id)arg1;
+ (id)attributionForPlaceDataEncyclopedia:(id)arg1;
+ (id)attributionForPlaceDataReview:(id)arg1;
+ (id)attributionForPlaceDataPhotos:(id)arg1;
+ (id)attributionForPlaceDataEntity:(id)arg1;
+ (id)attributionForPlaceDataRestaurantReservationLink:(id)arg1;
+ (id)attributionForAnnotatedItemList:(id)arg1 placeData:(id)arg2;
+ (Class)attributionUrlType;

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
- (_Bool)_isYelp;
- (unsigned long long)attributionUrlsCount;
- (void)_readVendorId;
- (void)_readExternalItemId;
- (void)_readExternalComponentId;
- (void)_readAttributionUrls;
- (void)_addNoFlagsAttributionUrl:(id)arg1;
- (void)_readActionUrlComponent;
- (void)clearAttributionUrls;
- (id)attributionUrlAtIndex:(unsigned long long)arg1;
- (void)addAttributionUrl:(id)arg1;

@end
