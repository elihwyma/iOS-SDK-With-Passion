/*
 Image: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
 */

#import <ProtocolBuffer/PBRequest.h>

@class NSData;

@interface NPKProtoPeerPaymentWebServiceContextDidChangeRequest : PBRequest

{
    NSData *_peerPaymentAccountData;
    NSData *_peerPaymentWebServiceContextData;
}

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
