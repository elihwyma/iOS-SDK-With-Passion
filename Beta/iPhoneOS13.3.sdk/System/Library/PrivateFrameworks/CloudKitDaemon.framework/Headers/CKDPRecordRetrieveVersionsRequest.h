/*
 Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

#import <ProtocolBuffer/PBRequest.h>

@class CKDPAssetsToDownload, CKDPRecordIdentifier, CKDPRequestedFields, NSString;

__attribute__((visibility("hidden")))
@interface CKDPRecordRetrieveVersionsRequest : PBRequest

{
    CKDPAssetsToDownload *_assetsToDownload;
    NSString *_minimumVersionEtag;
    CKDPRecordIdentifier *_recordIdentifier;
    CKDPRequestedFields *_requestedFields;
}

@property (nonatomic, readonly) _Bool hasRecordIdentifier;
@property (retain, nonatomic) CKDPRecordIdentifier *recordIdentifier;
@property (nonatomic, readonly) _Bool hasRequestedFields;
@property (retain, nonatomic) CKDPRequestedFields *requestedFields;
@property (nonatomic, readonly) _Bool hasMinimumVersionEtag;
@property (retain, nonatomic) NSString *minimumVersionEtag;
@property (nonatomic, readonly) _Bool hasAssetsToDownload;
@property (retain, nonatomic) CKDPAssetsToDownload *assetsToDownload;

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
