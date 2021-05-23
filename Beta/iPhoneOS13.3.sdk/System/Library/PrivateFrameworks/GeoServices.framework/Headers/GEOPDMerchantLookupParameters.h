/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h>

@class GEOLocation, GEOPDAdamAppIdentifier, GEOPDMerchantInformation, GEOPDWarsawMerchantIdentifier, NSString, PBDataReader, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDMerchantLookupParameters : PBCodable

{
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    GEOPDAdamAppIdentifier *_appIdentifier;
    NSString *_industryCategory;
    long long _industryCode;
    NSString *_merchantCode;
    GEOPDMerchantInformation *_merchantInformation;
    NSString *_paymentNetwork;
    NSString *_rawMerchantCode;
    NSString *_terminalId;
    NSString *_transactionCurrencyCode;
    NSString *_transactionId;
    double _transactionLocationAge;
    GEOLocation *_transactionLocation;
    double _transactionTimestamp;
    GEOPDWarsawMerchantIdentifier *_warsawMerchantIdentifier;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    int _transactionStatus;
    int _transactionType;
    _Bool _enableBrandMuidFallback;
    _Bool _fuzzyMatched;
    struct {
        unsigned int has_industryCode:1;
        unsigned int has_transactionLocationAge:1;
        unsigned int has_transactionTimestamp:1;
        unsigned int has_transactionStatus:1;
        unsigned int has_transactionType:1;
        unsigned int has_enableBrandMuidFallback:1;
        unsigned int has_fuzzyMatched:1;
        unsigned int read_unknownFields:1;
        unsigned int read_appIdentifier:1;
        unsigned int read_industryCategory:1;
        unsigned int read_merchantCode:1;
        unsigned int read_merchantInformation:1;
        unsigned int read_paymentNetwork:1;
        unsigned int read_rawMerchantCode:1;
        unsigned int read_terminalId:1;
        unsigned int read_transactionCurrencyCode:1;
        unsigned int read_transactionId:1;
        unsigned int read_transactionLocation:1;
        unsigned int read_warsawMerchantIdentifier:1;
        unsigned int wrote_unknownFields:1;
        unsigned int wrote_appIdentifier:1;
        unsigned int wrote_industryCategory:1;
        unsigned int wrote_industryCode:1;
        unsigned int wrote_merchantCode:1;
        unsigned int wrote_merchantInformation:1;
        unsigned int wrote_paymentNetwork:1;
        unsigned int wrote_rawMerchantCode:1;
        unsigned int wrote_terminalId:1;
        unsigned int wrote_transactionCurrencyCode:1;
        unsigned int wrote_transactionId:1;
        unsigned int wrote_transactionLocationAge:1;
        unsigned int wrote_transactionLocation:1;
        unsigned int wrote_transactionTimestamp:1;
        unsigned int wrote_warsawMerchantIdentifier:1;
        unsigned int wrote_transactionStatus:1;
        unsigned int wrote_transactionType:1;
        unsigned int wrote_enableBrandMuidFallback:1;
        unsigned int wrote_fuzzyMatched:1;
    } _flags;
}

@property (nonatomic, readonly) _Bool hasPaymentNetwork;
@property (retain, nonatomic) NSString *paymentNetwork;
@property (nonatomic, readonly) _Bool hasMerchantCode;
@property (retain, nonatomic) NSString *merchantCode;
@property (nonatomic) _Bool hasTransactionTimestamp;
@property (nonatomic) double transactionTimestamp;
@property (nonatomic, readonly) _Bool hasTransactionLocation;
@property (retain, nonatomic) GEOLocation *transactionLocation;
@property (nonatomic) _Bool hasTransactionLocationAge;
@property (nonatomic) double transactionLocationAge;
@property (nonatomic, readonly) _Bool hasRawMerchantCode;
@property (retain, nonatomic) NSString *rawMerchantCode;
@property (nonatomic, readonly) _Bool hasIndustryCategory;
@property (retain, nonatomic) NSString *industryCategory;
@property (nonatomic) _Bool hasIndustryCode;
@property (nonatomic) long long industryCode;
@property (nonatomic) _Bool hasEnableBrandMuidFallback;
@property (nonatomic) _Bool enableBrandMuidFallback;
@property (nonatomic, readonly) _Bool hasTerminalId;
@property (retain, nonatomic) NSString *terminalId;
@property (nonatomic, readonly) _Bool hasTransactionCurrencyCode;
@property (retain, nonatomic) NSString *transactionCurrencyCode;
@property (nonatomic) _Bool hasTransactionType;
@property (nonatomic) int transactionType;
@property (nonatomic, readonly) _Bool hasWarsawMerchantIdentifier;
@property (retain, nonatomic) GEOPDWarsawMerchantIdentifier *warsawMerchantIdentifier;
@property (nonatomic, readonly) _Bool hasAppIdentifier;
@property (retain, nonatomic) GEOPDAdamAppIdentifier *appIdentifier;
@property (nonatomic, readonly) _Bool hasMerchantInformation;
@property (retain, nonatomic) GEOPDMerchantInformation *merchantInformation;
@property (nonatomic) _Bool hasTransactionStatus;
@property (nonatomic) int transactionStatus;
@property (nonatomic, readonly) _Bool hasTransactionId;
@property (retain, nonatomic) NSString *transactionId;
@property (nonatomic) _Bool hasFuzzyMatched;
@property (nonatomic) _Bool fuzzyMatched;
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
- (void)clearSensitiveFields;
- (void)_readTransactionLocation;
- (void)_readPaymentNetwork;
- (void)_readMerchantCode;
- (void)_readRawMerchantCode;
- (void)_readIndustryCategory;
- (void)_readTerminalId;
- (void)_readTransactionCurrencyCode;
- (void)_readWarsawMerchantIdentifier;
- (void)_readAppIdentifier;
- (void)_readMerchantInformation;
- (void)_readTransactionId;
- (id)transactionTypeAsString:(int)arg1;
- (int)StringAsTransactionType:(id)arg1;
- (id)transactionStatusAsString:(int)arg1;
- (int)StringAsTransactionStatus:(id)arg1;

@end
