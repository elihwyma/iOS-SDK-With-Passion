/*
 Image: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
 */

#import <ProtocolBuffer/PBCodable.h>

@class NSData;

@interface NPKProtoPeerPaymentRegistrationResponse : PBCodable

{
    NSData *_errorData;
    NSData *_peerPaymentAccountData;
    NSData *_peerPaymentWebServiceContextData;
    _Bool _pending;
    _Bool _success;
    CDStruct_5ee4970e _has;
}

@property (nonatomic) _Bool hasPending;
@property (nonatomic) _Bool pending;
@property (nonatomic) _Bool hasSuccess;
@property (nonatomic) _Bool success;
@property (nonatomic, readonly) _Bool hasErrorData;
@property (retain, nonatomic) NSData *errorData;
@property (nonatomic, readonly) _Bool hasPeerPaymentWebServiceContextData;
@property (retain, nonatomic) NSData *peerPaymentWebServiceContextData;
@property (nonatomic, readonly) _Bool hasPeerPaymentAccountData;
@property (retain, nonatomic) NSData *peerPaymentAccountData;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;

@end
