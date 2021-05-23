/*
 Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

#import <ProtocolBuffer/PBCodable.h>

@class CKDPRequestedFields;

__attribute__((visibility("hidden")))
@interface CKDPAssetsToDownload : PBCodable

{
    CKDPRequestedFields *_assetFields;
    _Bool _allAssets;
    struct {
        unsigned int allAssets:1;
    } _has;
}

@property (nonatomic) _Bool hasAllAssets;
@property (nonatomic) _Bool allAssets;
@property (nonatomic, readonly) _Bool hasAssetFields;
@property (retain, nonatomic) CKDPRequestedFields *assetFields;

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
