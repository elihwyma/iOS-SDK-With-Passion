/*
 Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

#import <ProtocolBuffer/PBRequest.h>

@class CKDPAssetsToDownload, CKDPRecordZoneIdentifier, NSData;

__attribute__((visibility("hidden")))
@interface CKDPFetchArchivedRecordsRequest : PBRequest

{
    NSData *_archiveContinuationToken;
    CKDPAssetsToDownload *_assetsToDownload;
    unsigned int _limit;
    CKDPRecordZoneIdentifier *_zoneIdentifier;
    _Bool _newestFirst;
    struct {
        unsigned int limit:1;
        unsigned int newestFirst:1;
    } _has;
}

@property (nonatomic, readonly) _Bool hasZoneIdentifier;
@property (retain, nonatomic) CKDPRecordZoneIdentifier *zoneIdentifier;
@property (nonatomic, readonly) _Bool hasArchiveContinuationToken;
@property (retain, nonatomic) NSData *archiveContinuationToken;
@property (nonatomic) _Bool hasNewestFirst;
@property (nonatomic) _Bool newestFirst;
@property (nonatomic) _Bool hasLimit;
@property (nonatomic) unsigned int limit;
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

@end
