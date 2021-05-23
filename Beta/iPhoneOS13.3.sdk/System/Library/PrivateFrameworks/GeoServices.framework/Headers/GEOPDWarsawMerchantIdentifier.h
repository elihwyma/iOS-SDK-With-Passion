/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h>

@class NSString, PBDataReader, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDWarsawMerchantIdentifier : PBCodable

{
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    NSString *_merchantDomain;
    NSString *_merchantId;
    NSString *_merchantName;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    struct {
        unsigned int read_unknownFields:1;
        unsigned int read_merchantDomain:1;
        unsigned int read_merchantId:1;
        unsigned int read_merchantName:1;
        unsigned int wrote_unknownFields:1;
        unsigned int wrote_merchantDomain:1;
        unsigned int wrote_merchantId:1;
        unsigned int wrote_merchantName:1;
    } _flags;
}

@property (nonatomic, readonly) _Bool hasMerchantDomain;
@property (retain, nonatomic) NSString *merchantDomain;
@property (nonatomic, readonly) _Bool hasMerchantName;
@property (retain, nonatomic) NSString *merchantName;
@property (nonatomic, readonly) _Bool hasMerchantId;
@property (retain, nonatomic) NSString *merchantId;
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
- (void)_readMerchantName;
- (void)_readMerchantDomain;

@end
