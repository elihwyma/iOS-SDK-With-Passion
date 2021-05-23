/*
 Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

#import <ProtocolBuffer/PBCodable.h>

@class NSData;

__attribute__((visibility("hidden")))
@interface CKDPCodeFunctionInvokeRequestProtectedCloudComputeMetadataCryptoSession : PBCodable

{
    NSData *_routingToken;
    NSData *_wrappedInvocationKey;
}

@property (nonatomic, readonly) _Bool hasWrappedInvocationKey;
@property (retain, nonatomic) NSData *wrappedInvocationKey;
@property (nonatomic, readonly) _Bool hasRoutingToken;
@property (retain, nonatomic) NSData *routingToken;

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
