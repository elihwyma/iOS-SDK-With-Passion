/*
 Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

#import <ProtocolBuffer/PBRequest.h>

@class CKDPAssetsToDownload, CKDPRecordZoneIdentifier, CKDPRequestedFields, NSData;

__attribute__((visibility("hidden")))
@interface CKDPRecordRetrieveChangesRequest : PBRequest

{
    CKDPAssetsToDownload *_assetsToDownload;
    unsigned int _maxChanges;
    int _requestedChangeTypes;
    CKDPRequestedFields *_requestedFields;
    NSData *_syncContinuationToken;
    CKDPRecordZoneIdentifier *_zoneIdentifier;
    _Bool _ignoreCallingDeviceChanges;
    _Bool _newestFirst;
    struct {
        unsigned int maxChanges:1;
        unsigned int requestedChangeTypes:1;
        unsigned int ignoreCallingDeviceChanges:1;
        unsigned int newestFirst:1;
    } _has;
}

@property (nonatomic, readonly) _Bool hasSyncContinuationToken;
@property (retain, nonatomic) NSData *syncContinuationToken;
@property (nonatomic, readonly) _Bool hasZoneIdentifier;
@property (retain, nonatomic) CKDPRecordZoneIdentifier *zoneIdentifier;
@property (nonatomic, readonly) _Bool hasRequestedFields;
@property (retain, nonatomic) CKDPRequestedFields *requestedFields;
@property (nonatomic) _Bool hasMaxChanges;
@property (nonatomic) unsigned int maxChanges;
@property (nonatomic) _Bool hasRequestedChangeTypes;
@property (nonatomic) int requestedChangeTypes;
@property (nonatomic, readonly) _Bool hasAssetsToDownload;
@property (retain, nonatomic) CKDPAssetsToDownload *assetsToDownload;
@property (nonatomic) _Bool hasNewestFirst;
@property (nonatomic) _Bool newestFirst;
@property (nonatomic) _Bool hasIgnoreCallingDeviceChanges;
@property (nonatomic) _Bool ignoreCallingDeviceChanges;

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
- (id)requestedChangeTypesAsString:(int)arg1;
- (int)StringAsRequestedChangeTypes:(id)arg1;

@end
