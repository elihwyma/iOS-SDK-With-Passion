/*
 Image: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
 */

#import <ProtocolBuffer/PBCodable.h>

@class NPKProtoStandalonePaymentCredentialUnion, NPKProtoStandalonePaymentProvisioningFlowManualEntryStepContext, NPKProtoStandalonePaymentRemoteCredential;

@interface NPKProtoStandalonePaymentProvisioningFlowSecondaryManualEntryStepContext : PBCodable

{
    NPKProtoStandalonePaymentCredentialUnion *_credential;
    NPKProtoStandalonePaymentProvisioningFlowManualEntryStepContext *_manualEntryStepContext;
    NPKProtoStandalonePaymentRemoteCredential *_remoteCredential;
    _Bool _allowsAddingDifferentCard;
    struct {
        unsigned int allowsAddingDifferentCard:1;
    } _has;
}

@property (retain, nonatomic) NPKProtoStandalonePaymentProvisioningFlowManualEntryStepContext *manualEntryStepContext;
@property (nonatomic, readonly) _Bool hasRemoteCredential;
@property (retain, nonatomic) NPKProtoStandalonePaymentRemoteCredential *remoteCredential;
@property (nonatomic, readonly) _Bool hasCredential;
@property (retain, nonatomic) NPKProtoStandalonePaymentCredentialUnion *credential;
@property (nonatomic) _Bool hasAllowsAddingDifferentCard;
@property (nonatomic) _Bool allowsAddingDifferentCard;

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
