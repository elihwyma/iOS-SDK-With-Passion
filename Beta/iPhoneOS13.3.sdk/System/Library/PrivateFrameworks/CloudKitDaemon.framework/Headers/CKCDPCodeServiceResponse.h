/*
 Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

#import <ProtocolBuffer/PBCodable.h>

@class CKCDPError, NSData, NSMutableArray;

__attribute__((visibility("hidden")))
@interface CKCDPCodeServiceResponse : PBCodable

{
    NSMutableArray *_assetAuthorizationResponses;
    CKCDPError *_error;
    NSData *_serializedResult;
}

@property (nonatomic, readonly) _Bool hasSerializedResult;
@property (retain, nonatomic) NSData *serializedResult;
@property (nonatomic, readonly) _Bool hasError;
@property (retain, nonatomic) CKCDPError *error;
@property (retain, nonatomic) NSMutableArray *assetAuthorizationResponses;

+ (Class)assetAuthorizationResponsesType;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;
- (void)addAssetAuthorizationResponses:(id)arg1;
- (unsigned long long)assetAuthorizationResponsesCount;
- (void)clearAssetAuthorizationResponses;
- (id)assetAuthorizationResponsesAtIndex:(unsigned long long)arg1;

@end
