/*
 Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

#import <ProtocolBuffer/PBCodable.h>

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface CKDPResponseOperationHeader : PBCodable

{
    NSMutableArray *_assetAuthorizationResponses;
}

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
