/*
 Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

#import <ProtocolBuffer/PBCodable.h>

@class CKDPCodeFunctionInvokeResponseAttestationResponse, NSData;

__attribute__((visibility("hidden")))
@interface CKDPCodeFunctionInvokeResponse : PBCodable

{
    CKDPCodeFunctionInvokeResponseAttestationResponse *_attestationResponse;
    NSData *_serializedResult;
}

@property (nonatomic, readonly) _Bool hasSerializedResult;
@property (retain, nonatomic) NSData *serializedResult;
@property (nonatomic, readonly) _Bool hasAttestationResponse;
@property (retain, nonatomic) CKDPCodeFunctionInvokeResponseAttestationResponse *attestationResponse;

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
