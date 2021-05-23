/*
 Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

#import <ProtocolBuffer/PBCodable.h>

@class CKDPStreamingAssetIdentifier, CKDPStreamingAssetRetrieveAssetResponse, CKDPStreamingAssetSaveAssetRequest, CKDPStreamingAssetSaveAssetResponse;

__attribute__((visibility("hidden")))
@interface CKDPStreamingAsset : PBCodable

{
    CKDPStreamingAssetIdentifier *_assetId;
    CKDPStreamingAssetRetrieveAssetResponse *_retrieveAssetResponse;
    CKDPStreamingAssetSaveAssetRequest *_saveAssetRequest;
    CKDPStreamingAssetSaveAssetResponse *_saveAssetResponse;
}

@property (nonatomic, readonly) _Bool hasAssetId;
@property (retain, nonatomic) CKDPStreamingAssetIdentifier *assetId;
@property (nonatomic, readonly) _Bool hasSaveAssetRequest;
@property (retain, nonatomic) CKDPStreamingAssetSaveAssetRequest *saveAssetRequest;
@property (nonatomic, readonly) _Bool hasSaveAssetResponse;
@property (retain, nonatomic) CKDPStreamingAssetSaveAssetResponse *saveAssetResponse;
@property (nonatomic, readonly) _Bool hasRetrieveAssetResponse;
@property (retain, nonatomic) CKDPStreamingAssetRetrieveAssetResponse *retrieveAssetResponse;

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
