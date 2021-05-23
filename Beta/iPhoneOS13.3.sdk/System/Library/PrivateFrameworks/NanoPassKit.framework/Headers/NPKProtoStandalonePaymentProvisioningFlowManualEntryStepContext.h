/*
 Image: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
 */

#import <ProtocolBuffer/PBCodable.h>

@class NSMutableArray;

@interface NPKProtoStandalonePaymentProvisioningFlowManualEntryStepContext : PBCodable

{
    NSMutableArray *_setupFields;
    _Bool _cameraFirstProvisioningEnabled;
    struct {
        unsigned int cameraFirstProvisioningEnabled:1;
    } _has;
}

@property (nonatomic) _Bool hasCameraFirstProvisioningEnabled;
@property (nonatomic) _Bool cameraFirstProvisioningEnabled;
@property (retain, nonatomic) NSMutableArray *setupFields;

+ (Class)setupFieldsType;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;
- (void)addSetupFields:(id)arg1;
- (unsigned long long)setupFieldsCount;
- (void)clearSetupFields;
- (id)setupFieldsAtIndex:(unsigned long long)arg1;

@end
