/*
 Image: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
 */

#import <ProtocolBuffer/PBRequest.h>

@class NPKProtoStandaloneRequestHeader, NSMutableArray;

@interface NPKProtoStandalonePaymentProvisioningFlowHandleIssuerVerificationFieldsRequest : PBRequest

{
    NPKProtoStandaloneRequestHeader *_requestHeader;
    NSMutableArray *_verificationFields;
}

@property (retain, nonatomic) NPKProtoStandaloneRequestHeader *requestHeader;
@property (retain, nonatomic) NSMutableArray *verificationFields;

+ (Class)verificationFieldsType;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;
- (void)addVerificationFields:(id)arg1;
- (unsigned long long)verificationFieldsCount;
- (void)clearVerificationFields;
- (id)verificationFieldsAtIndex:(unsigned long long)arg1;

@end
