/*
 Image: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
 */

#import <ProtocolBuffer/PBCodable.h>

@interface NPKProtoStandalonePaymentProvisioningFlowLocalDeviceManualEntryProgressStepContext : PBCodable

{
    _Bool _numericEntryPending;
    struct {
        unsigned int numericEntryPending:1;
    } _has;
}

@property (nonatomic) _Bool hasNumericEntryPending;
@property (nonatomic) _Bool numericEntryPending;

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
