/*
 Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

#import <ProtocolBuffer/PBCodable.h>

@class CKDPProtectionInfo, CKDPRecordIdentifier, NSData, NSString;

__attribute__((visibility("hidden")))
@interface CKDPAsset : PBCodable

{
    long long _constructedAssetDownloadEstimatedSize;
    long long _constructedAssetDownloadURLExpiration;
    long long _downloadTokenExpiration;
    long long _downloadURLExpiration;
    long long _size;
    NSString *_assetAuthorizationResponseUUID;
    NSData *_clearAssetKey;
    NSString *_constructedAssetDownloadURL;
    NSString *_contentBaseURL;
    NSString *_downloadBaseURL;
    NSData *_downloadRequest;
    NSString *_downloadToken;
    NSString *_owner;
    CKDPProtectionInfo *_protectionInfo;
    CKDPRecordIdentifier *_recordId;
    NSData *_referenceSignature;
    NSString *_requestor;
    NSData *_signature;
    NSString *_uploadReceipt;
    struct {
        unsigned int constructedAssetDownloadEstimatedSize:1;
        unsigned int constructedAssetDownloadURLExpiration:1;
        unsigned int downloadTokenExpiration:1;
        unsigned int downloadURLExpiration:1;
        unsigned int size:1;
    } _has;
}

@property (nonatomic, readonly) _Bool hasOwner;
@property (retain, nonatomic) NSString *owner;
@property (nonatomic, readonly) _Bool hasSignature;
@property (retain, nonatomic) NSData *signature;
@property (nonatomic) _Bool hasSize;
@property (nonatomic) long long size;
@property (nonatomic, readonly) _Bool hasDownloadToken;
@property (retain, nonatomic) NSString *downloadToken;
@property (nonatomic, readonly) _Bool hasDownloadRequest;
@property (retain, nonatomic) NSData *downloadRequest;
@property (nonatomic, readonly) _Bool hasContentBaseURL;
@property (retain, nonatomic) NSString *contentBaseURL;
@property (nonatomic, readonly) _Bool hasRequestor;
@property (retain, nonatomic) NSString *requestor;
@property (nonatomic, readonly) _Bool hasRecordId;
@property (retain, nonatomic) CKDPRecordIdentifier *recordId;
@property (nonatomic, readonly) _Bool hasUploadReceipt;
@property (retain, nonatomic) NSString *uploadReceipt;
@property (nonatomic, readonly) _Bool hasDownloadBaseURL;
@property (retain, nonatomic) NSString *downloadBaseURL;
@property (nonatomic) _Bool hasDownloadURLExpiration;
@property (nonatomic) long long downloadURLExpiration;
@property (nonatomic, readonly) _Bool hasProtectionInfo;
@property (retain, nonatomic) CKDPProtectionInfo *protectionInfo;
@property (nonatomic, readonly) _Bool hasReferenceSignature;
@property (retain, nonatomic) NSData *referenceSignature;
@property (nonatomic) _Bool hasDownloadTokenExpiration;
@property (nonatomic) long long downloadTokenExpiration;
@property (nonatomic, readonly) _Bool hasClearAssetKey;
@property (retain, nonatomic) NSData *clearAssetKey;
@property (nonatomic, readonly) _Bool hasAssetAuthorizationResponseUUID;
@property (retain, nonatomic) NSString *assetAuthorizationResponseUUID;
@property (nonatomic, readonly) _Bool hasConstructedAssetDownloadURL;
@property (retain, nonatomic) NSString *constructedAssetDownloadURL;
@property (nonatomic) _Bool hasConstructedAssetDownloadURLExpiration;
@property (nonatomic) long long constructedAssetDownloadURLExpiration;
@property (nonatomic) _Bool hasConstructedAssetDownloadEstimatedSize;
@property (nonatomic) long long constructedAssetDownloadEstimatedSize;

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
