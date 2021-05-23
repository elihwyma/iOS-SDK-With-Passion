/*
 Image: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
 */

#import <ProtocolBuffer/PBCodable.h>

@class NPKProtoStandaloneError, NPKProtoStandaloneResponseHeader;

@interface NPKProtoStandalonePaymentProvisioningFlowDidEncounterErrorResponse : PBCodable

{
    NPKProtoStandaloneError *_error;
    NPKProtoStandaloneResponseHeader *_responseHeader;
}

@property (retain, nonatomic) NPKProtoStandaloneResponseHeader *responseHeader;
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
