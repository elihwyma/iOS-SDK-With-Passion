/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h>

@class GEOLatLng, NSString, PBDataReader, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDIpGeoLookupResult : PBCodable

{
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    NSString *_countryCode;
    NSString *_ipAddress;
    GEOLatLng *_location;
    NSString *_timeZome;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    int _status;
    struct {
        unsigned int has_status:1;
        unsigned int read_unknownFields:1;
        unsigned int read_countryCode:1;
        unsigned int read_ipAddress:1;
        unsigned int read_location:1;
        unsigned int read_timeZome:1;
        unsigned int wrote_unknownFields:1;
        unsigned int wrote_countryCode:1;
        unsigned int wrote_ipAddress:1;
        unsigned int wrote_location:1;
        unsigned int wrote_timeZome:1;
        unsigned int wrote_status:1;
    } _flags;
}

@property (nonatomic) _Bool hasStatus;
@property (nonatomic) int status;
@property (nonatomic, readonly) _Bool hasIpAddress;
@property (retain, nonatomic) NSString *ipAddress;
@property (nonatomic, readonly) _Bool hasLocation;
@property (retain, nonatomic) GEOLatLng *location;
@property (nonatomic, readonly) _Bool hasCountryCode;
@property (retain, nonatomic) NSString *countryCode;
@property (nonatomic, readonly) _Bool hasTimeZome;
@property (retain, nonatomic) NSString *timeZome;
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
- (id)statusAsString:(int)arg1;
- (int)StringAsStatus:(id)arg1;
- (void)readAll:(_Bool)arg1;
- (void)clearUnknownFields:(_Bool)arg1;
- (void)_readLocation;
- (void)_readIpAddress;
- (void)_readCountryCode;
- (void)_readTimeZome;

@end
