/*
 Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

#import <ProtocolBuffer/PBRequest.h>

@class CKCDPCodeServiceRequestAccountConfig, CKCDPCodeServiceRequestAssetAuthorizeGetRequestOptions, CKCDPCodeServiceRequestProtectedCloudComputeMetadata, CKCDPCodeServiceRequestRequestContext, NSData, NSMutableArray, NSString;

__attribute__((visibility("hidden")))
@interface CKCDPCodeServiceRequest : PBRequest

{
    CKCDPCodeServiceRequestAccountConfig *_accountConfig;
    CKCDPCodeServiceRequestAssetAuthorizeGetRequestOptions *_assetAuthorizeGetRequestOptions;
    NSMutableArray *_clientConfigs;
    NSString *_functionName;
    CKCDPCodeServiceRequestProtectedCloudComputeMetadata *_protectedCloudComputeMetadata;
    CKCDPCodeServiceRequestRequestContext *_requestContext;
    int _serializationFormat;
    NSData *_serializedParameters;
    NSString *_serviceName;
    struct {
        unsigned int serializationFormat:1;
    } _has;
}

@property (nonatomic, readonly) _Bool hasServiceName;
@property (retain, nonatomic) NSString *serviceName;
@property (nonatomic, readonly) _Bool hasFunctionName;
@property (retain, nonatomic) NSString *functionName;
@property (nonatomic, readonly) _Bool hasSerializedParameters;
@property (retain, nonatomic) NSData *serializedParameters;
@property (nonatomic) _Bool hasSerializationFormat;
@property (nonatomic) int serializationFormat;
@property (retain, nonatomic) NSMutableArray *clientConfigs;
@property (nonatomic, readonly) _Bool hasAccountConfig;
@property (retain, nonatomic) CKCDPCodeServiceRequestAccountConfig *accountConfig;
@property (nonatomic, readonly) _Bool hasRequestContext;
@property (retain, nonatomic) CKCDPCodeServiceRequestRequestContext *requestContext;
@property (nonatomic, readonly) _Bool hasAssetAuthorizeGetRequestOptions;
@property (retain, nonatomic) CKCDPCodeServiceRequestAssetAuthorizeGetRequestOptions *assetAuthorizeGetRequestOptions;
@property (nonatomic, readonly) _Bool hasProtectedCloudComputeMetadata;
@property (retain, nonatomic) CKCDPCodeServiceRequestProtectedCloudComputeMetadata *protectedCloudComputeMetadata;

+ (Class)clientConfigType;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;
- (unsigned long long)clientConfigsCount;
- (void)clearClientConfigs;
- (id)clientConfigAtIndex:(unsigned long long)arg1;
- (void)addClientConfig:(id)arg1;
- (id)serializationFormatAsString:(int)arg1;
- (int)StringAsSerializationFormat:(id)arg1;

@end
