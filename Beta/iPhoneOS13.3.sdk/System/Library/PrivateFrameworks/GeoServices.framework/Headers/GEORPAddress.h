/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h>

@class GEOAddress, GEOPDAddressObject, NSString, PBDataReader;

@interface GEORPAddress : PBCodable

{
    PBDataReader *_reader;
    GEOPDAddressObject *_addressObject;
    NSString *_addressString;
    GEOAddress *_geoAddress;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    struct {
        unsigned int read_addressObject:1;
        unsigned int read_addressString:1;
        unsigned int read_geoAddress:1;
        unsigned int wrote_addressObject:1;
        unsigned int wrote_addressString:1;
        unsigned int wrote_geoAddress:1;
    } _flags;
}

@property (nonatomic, readonly) _Bool hasGeoAddress;
@property (retain, nonatomic) GEOAddress *geoAddress;
@property (nonatomic, readonly) _Bool hasAddressString;
@property (retain, nonatomic) NSString *addressString;
@property (nonatomic, readonly) _Bool hasAddressObject;
@property (retain, nonatomic) GEOPDAddressObject *addressObject;

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
- (void)_readAddressObject;
- (void)_readGeoAddress;
- (void)_readAddressString;

@end
