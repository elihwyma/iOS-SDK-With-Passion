/*
 Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

#import <PBCodable.h>

@class NSData, NSMutableArray, NSString;

@interface PKProtobufPaymentMerchantSession : PBCodable

{
    unsigned long long _epochTimestamp;
    unsigned long long _expiresAt;
    NSData *_ampEnrollmentPinning;
    NSString *_displayName;
    NSString *_domain;
    NSString *_initiative;
    NSString *_initiativeContext;
    NSString *_merchantIdentifier;
    NSString *_nonce;
    NSString *_retryNonce;
    NSString *_sessionIdentifier;
    NSData *_signature;
    NSMutableArray *_signedFields;
    struct {
        unsigned int epochTimestamp:1;
        unsigned int expiresAt:1;
    } _has;
}

@property (nonatomic, readonly) _Bool hasMerchantIdentifier;
@property (retain, nonatomic) NSString *merchantIdentifier;
@property (nonatomic, readonly) _Bool hasSessionIdentifier;
@property (retain, nonatomic) NSString *sessionIdentifier;
@property (nonatomic, readonly) _Bool hasNonce;
@property (retain, nonatomic) NSString *nonce;
@property (nonatomic) _Bool hasEpochTimestamp;
@property (nonatomic) unsigned long long epochTimestamp;
@property (nonatomic, readonly) _Bool hasDomain;
@property (retain, nonatomic) NSString *domain;
@property (nonatomic, readonly) _Bool hasDisplayName;
@property (retain, nonatomic) NSString *displayName;
@property (nonatomic, readonly) _Bool hasSignature;
@property (retain, nonatomic) NSData *signature;
@property (nonatomic, readonly) _Bool hasRetryNonce;
@property (retain, nonatomic) NSString *retryNonce;
@property (nonatomic) _Bool hasExpiresAt;
@property (nonatomic) unsigned long long expiresAt;
@property (nonatomic, readonly) _Bool hasInitiativeContext;
@property (retain, nonatomic) NSString *initiativeContext;
@property (nonatomic, readonly) _Bool hasInitiative;
@property (retain, nonatomic) NSString *initiative;
@property (retain, nonatomic) NSMutableArray *signedFields;
@property (nonatomic, readonly) _Bool hasAmpEnrollmentPinning;
@property (retain, nonatomic) NSData *ampEnrollmentPinning;

+ (Class)signedFieldsType;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;
- (void)addSignedFields:(id)arg1;
- (unsigned long long)signedFieldsCount;
- (void)clearSignedFields;
- (id)signedFieldsAtIndex:(unsigned long long)arg1;

@end
