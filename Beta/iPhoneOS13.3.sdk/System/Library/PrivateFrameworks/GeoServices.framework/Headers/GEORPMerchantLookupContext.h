/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h>

@class GEOLocation, GEOPDMapsIdentifier, NSString, PBDataReader;

@interface GEORPMerchantLookupContext : PBCodable

{
    PBDataReader *_reader;
    NSString *_correlationId;
    NSString *_merchantAdamId;
    NSString *_merchantFormattedAddress;
    GEOPDMapsIdentifier *_merchantId;
    NSString *_merchantIndustryCategory;
    long long _merchantIndustryCode;
    NSString *_merchantName;
    NSString *_merchantRawName;
    NSString *_merchantUrl;
    GEOLocation *_transactionLocation;
    double _transactionTime;
    NSString *_transactionType;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    struct {
        unsigned int has_merchantIndustryCode:1;
        unsigned int has_transactionTime:1;
        unsigned int read_correlationId:1;
        unsigned int read_merchantAdamId:1;
        unsigned int read_merchantFormattedAddress:1;
        unsigned int read_merchantId:1;
        unsigned int read_merchantIndustryCategory:1;
        unsigned int read_merchantName:1;
        unsigned int read_merchantRawName:1;
        unsigned int read_merchantUrl:1;
        unsigned int read_transactionLocation:1;
        unsigned int read_transactionType:1;
        unsigned int wrote_correlationId:1;
        unsigned int wrote_merchantAdamId:1;
        unsigned int wrote_merchantFormattedAddress:1;
        unsigned int wrote_merchantId:1;
        unsigned int wrote_merchantIndustryCategory:1;
        unsigned int wrote_merchantIndustryCode:1;
        unsigned int wrote_merchantName:1;
        unsigned int wrote_merchantRawName:1;
        unsigned int wrote_merchantUrl:1;
        unsigned int wrote_transactionLocation:1;
        unsigned int wrote_transactionTime:1;
        unsigned int wrote_transactionType:1;
    } _flags;
}

@property (nonatomic) _Bool hasMerchantIndustryCode;
@property (nonatomic) long long merchantIndustryCode;
@property (nonatomic, readonly) _Bool hasMerchantId;
@property (retain, nonatomic) GEOPDMapsIdentifier *merchantId;
@property (nonatomic, readonly) _Bool hasMerchantName;
@property (retain, nonatomic) NSString *merchantName;
@property (nonatomic, readonly) _Bool hasMerchantRawName;
@property (retain, nonatomic) NSString *merchantRawName;
@property (nonatomic, readonly) _Bool hasMerchantIndustryCategory;
@property (retain, nonatomic) NSString *merchantIndustryCategory;
@property (nonatomic, readonly) _Bool hasMerchantUrl;
@property (retain, nonatomic) NSString *merchantUrl;
@property (nonatomic, readonly) _Bool hasMerchantFormattedAddress;
@property (retain, nonatomic) NSString *merchantFormattedAddress;
@property (nonatomic, readonly) _Bool hasMerchantAdamId;
@property (retain, nonatomic) NSString *merchantAdamId;
@property (nonatomic) _Bool hasTransactionTime;
@property (nonatomic) double transactionTime;
@property (nonatomic, readonly) _Bool hasTransactionType;
@property (retain, nonatomic) NSString *transactionType;
@property (nonatomic, readonly) _Bool hasTransactionLocation;
@property (retain, nonatomic) GEOLocation *transactionLocation;
@property (nonatomic, readonly) _Bool hasCorrelationId;
@property (retain, nonatomic) NSString *correlationId;

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
- (void)_readMerchantId;
- (void)_readMerchantName;
- (void)_readMerchantRawName;
- (void)_readMerchantIndustryCategory;
- (void)_readMerchantUrl;
- (void)_readMerchantFormattedAddress;
- (void)_readMerchantAdamId;
- (void)_readTransactionType;
- (void)_readTransactionLocation;
- (void)_readCorrelationId;

@end
