/*
 Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

#import <ProtocolBuffer/PBCodable.h>

@class NSData, NSMutableArray, NSString;

__attribute__((visibility("hidden")))
@interface CKCDPCodeServiceResponseAssetAuthorizationResponse : PBCodable

{
    NSData *_authGetResponseBody;
    NSMutableArray *_responseHeaders;
    NSString *_responseUUID;
}

@property (nonatomic, readonly) _Bool hasResponseUUID;
@property (retain, nonatomic) NSString *responseUUID;
@property (nonatomic, readonly) _Bool hasAuthGetResponseBody;
@property (retain, nonatomic) NSData *authGetResponseBody;
@property (retain, nonatomic) NSMutableArray *responseHeaders;

+ (Class)responseHeadersType;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;
- (void)addResponseHeaders:(id)arg1;
- (unsigned long long)responseHeadersCount;
- (void)clearResponseHeaders;
- (id)responseHeadersAtIndex:(unsigned long long)arg1;

@end
