/*
 Image: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
 */

#import <ProtocolBuffer/PBCodable.h>

@class NPKProtoStandaloneError;

@interface NPKProtoStandalonePaymentProvisioningFlowProvisioningResultStepContext : PBCodable

{
    NPKProtoStandaloneError *_error;
    _Bool _cardAdded;
    struct {
        unsigned int cardAdded:1;
    } _has;
}

@property (nonatomic) _Bool hasCardAdded;
@property (nonatomic) _Bool cardAdded;
@property (nonatomic, readonly) _Bool hasError;
@property (retain, nonatomic) NPKProtoStandaloneError *error;

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
