/*
 Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

#import <ProtocolBuffer/PBCodable.h>

@class NSData, NSMutableArray;

__attribute__((visibility("hidden")))
@interface CKDPAssetUploadTokenRetrieveResponse : PBCodable

{
    NSData *_authPutResponse;
    NSMutableArray *_contentResponseHeaders;
    NSMutableArray *_uploadTokens;
}

@property (retain, nonatomic) NSMutableArray *uploadTokens;
@property (nonatomic, readonly) _Bool hasAuthPutResponse;
@property (retain, nonatomic) NSData *authPutResponse;
@property (retain, nonatomic) NSMutableArray *contentResponseHeaders;

+ (Class)uploadTokensType;
+ (Class)contentResponseHeadersType;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;
- (unsigned long long)contentResponseHeadersCount;
- (void)addUploadTokens:(id)arg1;
- (void)addContentResponseHeaders:(id)arg1;
- (unsigned long long)uploadTokensCount;
- (void)clearUploadTokens;
- (id)uploadTokensAtIndex:(unsigned long long)arg1;
- (void)clearContentResponseHeaders;
- (id)contentResponseHeadersAtIndex:(unsigned long long)arg1;

@end
