/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h>

@class GEOLocation, NSString, PBDataReader;

@interface GEOAddressCorrectionAddress : PBCodable

{
    PBDataReader *_reader;
    NSString *_addressID;
    GEOLocation *_addressLocation;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    struct {
        unsigned int read_addressID:1;
        unsigned int read_addressLocation:1;
        unsigned int wrote_addressID:1;
        unsigned int wrote_addressLocation:1;
    } _flags;
}

@property (nonatomic, readonly) _Bool hasAddressLocation;
@property (retain, nonatomic) GEOLocation *addressLocation;
@property (nonatomic, readonly) _Bool hasAddressID;
@property (retain, nonatomic) NSString *addressID;

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
- (void)clearSensitiveFields;
- (void)_readAddressID;
- (void)_readAddressLocation;

@end
