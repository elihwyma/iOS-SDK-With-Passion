/*
 Image: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
 */

#import <ProtocolBuffer/PBRequest.h>

@class NPKProtoStandaloneRequestHeader, NSMutableArray;

@interface NPKProtoStandalonePaymentProvisioningFlowChooseCredentialsRequest : PBRequest

{
    NSMutableArray *_chosenPaymentCredentialIdentifiers;
    NPKProtoStandaloneRequestHeader *_requestHeader;
}

@property (retain, nonatomic) NPKProtoStandaloneRequestHeader *requestHeader;
@property (retain, nonatomic) NSMutableArray *chosenPaymentCredentialIdentifiers;

+ (Class)chosenPaymentCredentialIdentifiersType;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;
- (void)addChosenPaymentCredentialIdentifiers:(id)arg1;
- (unsigned long long)chosenPaymentCredentialIdentifiersCount;
- (void)clearChosenPaymentCredentialIdentifiers;
- (id)chosenPaymentCredentialIdentifiersAtIndex:(unsigned long long)arg1;

@end
