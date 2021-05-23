/*
 Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

#import <ProtocolBuffer/PBRequest.h>

@class CKDPCodeFunctionInvokeRequestAttestationRequest, CKDPCodeFunctionInvokeRequestProtectedCloudComputeMetadata, NSData, NSString;

__attribute__((visibility("hidden")))
@interface CKDPCodeFunctionInvokeRequest : PBRequest

{
    CKDPCodeFunctionInvokeRequestAttestationRequest *_attestationRequest;
    NSString *_functionName;
    CKDPCodeFunctionInvokeRequestProtectedCloudComputeMetadata *_protectedCloudComputeMetadata;
    NSData *_serializedParameters;
    NSString *_serviceName;
}

@property (nonatomic, readonly) _Bool hasServiceName;
@property (retain, nonatomic) NSString *serviceName;
@property (nonatomic, readonly) _Bool hasFunctionName;
@property (retain, nonatomic) NSString *functionName;
@property (nonatomic, readonly) _Bool hasSerializedParameters;
@property (retain, nonatomic) NSData *serializedParameters;
@property (nonatomic, readonly) _Bool hasProtectedCloudComputeMetadata;
@property (retain, nonatomic) CKDPCodeFunctionInvokeRequestProtectedCloudComputeMetadata *protectedCloudComputeMetadata;
@property (nonatomic, readonly) _Bool hasAttestationRequest;
@property (retain, nonatomic) CKDPCodeFunctionInvokeRequestAttestationRequest *attestationRequest;

+ (id)options;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;
- (unsigned int)requestTypeCode;
- (Class)responseClass;

@end
