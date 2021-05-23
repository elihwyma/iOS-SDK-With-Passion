/*
 Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

#import <ProtocolBuffer/PBRequest.h>

@class CKDPAssetsToDownload, CKDPRecordIdentifier, CKDPRecordRetrieveRequestRetrieveAssetURL, CKDPRequestedFields, NSString;

__attribute__((visibility("hidden")))
@interface CKDPRecordRetrieveRequest : PBRequest

{
    CKDPAssetsToDownload *_assetsToDownload;
    NSString *_clientVersionETag;
    CKDPRecordRetrieveRequestRetrieveAssetURL *_getAssetURL;
    CKDPRecordIdentifier *_recordIdentifier;
    CKDPRequestedFields *_requestedFields;
    NSString *_versionETag;
    _Bool _shouldFailBatch;
    struct {
        unsigned int shouldFailBatch:1;
    } _has;
}

@property (nonatomic, readonly) _Bool hasRecordIdentifier;
@property (retain, nonatomic) CKDPRecordIdentifier *recordIdentifier;
@property (nonatomic, readonly) _Bool hasRequestedFields;
@property (retain, nonatomic) CKDPRequestedFields *requestedFields;
@property (nonatomic, readonly) _Bool hasVersionETag;
@property (retain, nonatomic) NSString *versionETag;
@property (nonatomic, readonly) _Bool hasClientVersionETag;
@property (retain, nonatomic) NSString *clientVersionETag;
@property (nonatomic, readonly) _Bool hasGetAssetURL;
@property (retain, nonatomic) CKDPRecordRetrieveRequestRetrieveAssetURL *getAssetURL;
@property (nonatomic, readonly) _Bool hasAssetsToDownload;
@property (retain, nonatomic) CKDPAssetsToDownload *assetsToDownload;
@property (nonatomic) _Bool hasShouldFailBatch;
@property (nonatomic) _Bool shouldFailBatch;

+ (id)options;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;
- (unsigned int)requestTypeCode;
- (Class)responseClass;

@end
