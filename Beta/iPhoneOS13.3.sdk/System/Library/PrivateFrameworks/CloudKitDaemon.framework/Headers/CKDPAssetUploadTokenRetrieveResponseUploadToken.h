/*
 Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

#import <ProtocolBuffer/PBCodable.h>

@class CKDPAsset, NSString;

__attribute__((visibility("hidden")))
@interface CKDPAssetUploadTokenRetrieveResponseUploadToken : PBCodable

{
    long long _tokenExpiration;
    CKDPAsset *_asset;
    NSString *_token;
    struct {
        unsigned int tokenExpiration:1;
    } _has;
}

@property (nonatomic, readonly) _Bool hasToken;
@property (retain, nonatomic) NSString *token;
@property (nonatomic, readonly) _Bool hasAsset;
@property (retain, nonatomic) CKDPAsset *asset;
@property (nonatomic) _Bool hasTokenExpiration;
@property (nonatomic) long long tokenExpiration;

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
