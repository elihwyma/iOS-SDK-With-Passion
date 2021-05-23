/*
 Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

#import <PBCodable.h>

@class NSString;

@interface PKProtobufPeerPaymentMessage : PBCodable

{
    long long _amount;
    NSString *_currency;
    NSString *_identifier;
    NSString *_memo;
    NSString *_paymentIdentifier;
    NSString *_recipientAddress;
    NSString *_requestDeviceScoreIdentifier;
    NSString *_requestToken;
    NSString *_senderAddress;
    NSString *_transactionIdentifier;
    int _type;
    unsigned int _version;
    CDStruct_9fb36b4c _has;
}

@property (nonatomic) unsigned int version;
@property (nonatomic, readonly) _Bool hasIdentifier;
@property (retain, nonatomic) NSString *identifier;
@property (nonatomic) _Bool hasType;
@property (nonatomic) int type;
@property (nonatomic, readonly) _Bool hasCurrency;
@property (retain, nonatomic) NSString *currency;
@property (nonatomic) _Bool hasAmount;
@property (nonatomic) long long amount;
@property (nonatomic, readonly) _Bool hasSenderAddress;
@property (retain, nonatomic) NSString *senderAddress;
@property (nonatomic, readonly) _Bool hasRecipientAddress;
@property (retain, nonatomic) NSString *recipientAddress;
@property (nonatomic, readonly) _Bool hasRequestToken;
@property (retain, nonatomic) NSString *requestToken;
@property (nonatomic, readonly) _Bool hasPaymentIdentifier;
@property (retain, nonatomic) NSString *paymentIdentifier;
@property (nonatomic, readonly) _Bool hasTransactionIdentifier;
@property (retain, nonatomic) NSString *transactionIdentifier;
@property (nonatomic, readonly) _Bool hasMemo;
@property (retain, nonatomic) NSString *memo;
@property (nonatomic, readonly) _Bool hasRequestDeviceScoreIdentifier;
@property (retain, nonatomic) NSString *requestDeviceScoreIdentifier;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)typeAsString:(int)arg1;
- (int)StringAsType:(id)arg1;

@end
