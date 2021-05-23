/*
 Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

#import <PBRequest.h>

@class NSString, PKProtobufPaymentRequest;

@interface PKProtobufRemotePaymentRequest : PBRequest

{
    NSString *_identifier;
    NSString *_paymentApplicationIdentifier;
    PKProtobufPaymentRequest *_paymentRequest;
}

@property (nonatomic, readonly) _Bool hasPaymentRequest;
@property (retain, nonatomic) PKProtobufPaymentRequest *paymentRequest;
@property (nonatomic, readonly) _Bool hasPaymentApplicationIdentifier;
@property (retain, nonatomic) NSString *paymentApplicationIdentifier;
@property (nonatomic, readonly) _Bool hasIdentifier;
@property (retain, nonatomic) NSString *identifier;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;
- (unsigned int)requestTypeCode;
- (Class)responseClass;

@end
