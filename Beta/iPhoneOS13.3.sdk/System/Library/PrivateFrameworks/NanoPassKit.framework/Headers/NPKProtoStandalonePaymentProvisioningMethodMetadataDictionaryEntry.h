/*
 Image: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
 */

#import <ProtocolBuffer/PBCodable.h>

@class NPKProtoStandalonePaymentProvisioningMethodMetadata, NSString;

@interface NPKProtoStandalonePaymentProvisioningMethodMetadataDictionaryEntry : PBCodable

{
    NPKProtoStandalonePaymentProvisioningMethodMetadata *_metadata;
    NSString *_type;
}

@property (nonatomic, readonly) _Bool hasType;
@property (retain, nonatomic) NSString *type;
@property (nonatomic, readonly) _Bool hasMetadata;
@property (retain, nonatomic) NPKProtoStandalonePaymentProvisioningMethodMetadata *metadata;

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
