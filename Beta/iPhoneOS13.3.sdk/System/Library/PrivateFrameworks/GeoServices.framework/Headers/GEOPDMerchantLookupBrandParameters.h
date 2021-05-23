/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h>

@class GEOPDAdamAppIdentifier, GEOPDWarsawMerchantIdentifier, NSString, PBDataReader, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDMerchantLookupBrandParameters : PBCodable

{
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    GEOPDAdamAppIdentifier *_appIdentifier;
    NSString *_merchantCanl;
    NSString *_merchantCode;
    NSString *_merchantId;
    NSString *_rawMerchantCode;
    GEOPDWarsawMerchantIdentifier *_warsawIdentifier;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    struct {
        unsigned int read_unknownFields:1;
        unsigned int read_appIdentifier:1;
        unsigned int read_merchantCanl:1;
        unsigned int read_merchantCode:1;
        unsigned int read_merchantId:1;
        unsigned int read_rawMerchantCode:1;
        unsigned int read_warsawIdentifier:1;
        unsigned int wrote_unknownFields:1;
        unsigned int wrote_appIdentifier:1;
        unsigned int wrote_merchantCanl:1;
        unsigned int wrote_merchantCode:1;
        unsigned int wrote_merchantId:1;
        unsigned int wrote_rawMerchantCode:1;
        unsigned int wrote_warsawIdentifier:1;
    } _flags;
}

@property (nonatomic, readonly) _Bool hasMerchantCode;
@property (retain, nonatomic) NSString *merchantCode;
@property (nonatomic, readonly) _Bool hasRawMerchantCode;
@property (retain, nonatomic) NSString *rawMerchantCode;
@property (nonatomic, readonly) _Bool hasWarsawIdentifier;
@property (retain, nonatomic) GEOPDWarsawMerchantIdentifier *warsawIdentifier;
@property (nonatomic, readonly) _Bool hasAppIdentifier;
@property (retain, nonatomic) GEOPDAdamAppIdentifier *appIdentifier;
@property (nonatomic, readonly) _Bool hasMerchantId;
@property (retain, nonatomic) NSString *merchantId;
@property (nonatomic, readonly) _Bool hasMerchantCanl;
@property (retain, nonatomic) NSString *merchantCanl;
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
- (void)_readMerchantId;
- (void)_readMerchantCanl;
- (void)_readMerchantCode;
- (void)_readRawMerchantCode;
- (void)_readAppIdentifier;
- (void)_readWarsawIdentifier;

@end
