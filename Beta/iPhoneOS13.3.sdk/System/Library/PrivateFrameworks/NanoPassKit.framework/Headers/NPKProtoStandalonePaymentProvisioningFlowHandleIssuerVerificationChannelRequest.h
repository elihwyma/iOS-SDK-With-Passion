/*
 Image: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
 */

#import <ProtocolBuffer/PBRequest.h>

@class NPKProtoStandaloneRequestHeader, NSString;

@interface NPKProtoStandalonePaymentProvisioningFlowHandleIssuerVerificationChannelRequest : PBRequest

{
    NPKProtoStandaloneRequestHeader *_requestHeader;
    NSString *_selectedVerificationChannelIdentifier;
}

@property (retain, nonatomic) NPKProtoStandaloneRequestHeader *requestHeader;
@property (nonatomic, readonly) _Bool hasSelectedVerificationChannelIdentifier;
@property (retain, nonatomic) NSString *selectedVerificationChannelIdentifier;

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
