/*
 Image: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
 */

#import <ProtocolBuffer/PBCodable.h>

@class NPKProtoStandalonePaymentProvisioningFlowStepContext, NPKProtoStandaloneResponseHeader;

@interface NPKProtoStandalonePaymentProvisioningFlowResponse : PBCodable

{
    NPKProtoStandalonePaymentProvisioningFlowStepContext *_context;
    int _fromStep;
    NPKProtoStandaloneResponseHeader *_responseHeader;
    int _toStep;
}

@property (retain, nonatomic) NPKProtoStandaloneResponseHeader *responseHeader;
@property (nonatomic) int fromStep;
@property (nonatomic) int toStep;
@property (nonatomic, readonly) _Bool hasContext;
@property (retain, nonatomic) NPKProtoStandalonePaymentProvisioningFlowStepContext *context;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)fromStepAsString:(int)arg1;
- (int)StringAsFromStep:(id)arg1;
- (id)toStepAsString:(int)arg1;
- (int)StringAsToStep:(id)arg1;

@end
