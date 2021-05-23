/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h>

@class NSString, PBDataReader, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDMerchantInformation : PBCodable

{
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    NSString *_merchantAdditionalData;
    NSString *_merchantAddress;
    NSString *_merchantCanl;
    NSString *_merchantCity;
    NSString *_merchantCountryCode;
    NSString *_merchantDoingBusinessAsName;
    NSString *_merchantEnhancedName;
    NSString *_merchantId;
    NSString *_merchantRawAddress;
    NSString *_merchantRawCity;
    NSString *_merchantRawState;
    NSString *_merchantState;
    NSString *_merchantType;
    NSString *_merchantZip;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    int _merchantCleanConfidenceLevel;
    struct {
        unsigned int has_merchantCleanConfidenceLevel:1;
        unsigned int read_unknownFields:1;
        unsigned int read_merchantAdditionalData:1;
        unsigned int read_merchantAddress:1;
        unsigned int read_merchantCanl:1;
        unsigned int read_merchantCity:1;
        unsigned int read_merchantCountryCode:1;
        unsigned int read_merchantDoingBusinessAsName:1;
        unsigned int read_merchantEnhancedName:1;
        unsigned int read_merchantId:1;
        unsigned int read_merchantRawAddress:1;
        unsigned int read_merchantRawCity:1;
        unsigned int read_merchantRawState:1;
        unsigned int read_merchantState:1;
        unsigned int read_merchantType:1;
        unsigned int read_merchantZip:1;
        unsigned int wrote_unknownFields:1;
        unsigned int wrote_merchantAdditionalData:1;
        unsigned int wrote_merchantAddress:1;
        unsigned int wrote_merchantCanl:1;
        unsigned int wrote_merchantCity:1;
        unsigned int wrote_merchantCountryCode:1;
        unsigned int wrote_merchantDoingBusinessAsName:1;
        unsigned int wrote_merchantEnhancedName:1;
        unsigned int wrote_merchantId:1;
        unsigned int wrote_merchantRawAddress:1;
        unsigned int wrote_merchantRawCity:1;
        unsigned int wrote_merchantRawState:1;
        unsigned int wrote_merchantState:1;
        unsigned int wrote_merchantType:1;
        unsigned int wrote_merchantZip:1;
        unsigned int wrote_merchantCleanConfidenceLevel:1;
    } _flags;
}

@property (nonatomic, readonly) _Bool hasMerchantId;
@property (retain, nonatomic) NSString *merchantId;
@property (nonatomic, readonly) _Bool hasMerchantDoingBusinessAsName;
@property (retain, nonatomic) NSString *merchantDoingBusinessAsName;
@property (nonatomic, readonly) _Bool hasMerchantEnhancedName;
@property (retain, nonatomic) NSString *merchantEnhancedName;
@property (nonatomic, readonly) _Bool hasMerchantCity;
@property (retain, nonatomic) NSString *merchantCity;
@property (nonatomic, readonly) _Bool hasMerchantRawCity;
@property (retain, nonatomic) NSString *merchantRawCity;
@property (nonatomic, readonly) _Bool hasMerchantState;
@property (retain, nonatomic) NSString *merchantState;
@property (nonatomic, readonly) _Bool hasMerchantRawState;
@property (retain, nonatomic) NSString *merchantRawState;
@property (nonatomic, readonly) _Bool hasMerchantZip;
@property (retain, nonatomic) NSString *merchantZip;
@property (nonatomic, readonly) _Bool hasMerchantAddress;
@property (retain, nonatomic) NSString *merchantAddress;
@property (nonatomic, readonly) _Bool hasMerchantRawAddress;
@property (retain, nonatomic) NSString *merchantRawAddress;
@property (nonatomic, readonly) _Bool hasMerchantCountryCode;
@property (retain, nonatomic) NSString *merchantCountryCode;
@property (nonatomic, readonly) _Bool hasMerchantType;
@property (retain, nonatomic) NSString *merchantType;
@property (nonatomic) _Bool hasMerchantCleanConfidenceLevel;
@property (nonatomic) int merchantCleanConfidenceLevel;
@property (nonatomic, readonly) _Bool hasMerchantAdditionalData;
@property (retain, nonatomic) NSString *merchantAdditionalData;
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
- (void)_readMerchantDoingBusinessAsName;
- (void)_readMerchantEnhancedName;
- (void)_readMerchantCity;
- (void)_readMerchantRawCity;
- (void)_readMerchantState;
- (void)_readMerchantRawState;
- (void)_readMerchantZip;
- (void)_readMerchantAddress;
- (void)_readMerchantRawAddress;
- (void)_readMerchantCountryCode;
- (void)_readMerchantType;
- (void)_readMerchantAdditionalData;
- (void)_readMerchantCanl;

@end
