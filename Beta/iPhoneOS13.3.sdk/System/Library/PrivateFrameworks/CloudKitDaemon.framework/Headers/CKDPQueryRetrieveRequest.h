/*
 Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

#import <ProtocolBuffer/PBRequest.h>

@class CKDPAssetsToDownload, CKDPQuery, CKDPRecordZoneIdentifier, CKDPRequestedFields, NSData;

__attribute__((visibility("hidden")))
@interface CKDPQueryRetrieveRequest : PBRequest

{
    CKDPAssetsToDownload *_assetsToDownload;
    NSData *_continuationMarker;
    unsigned int _limit;
    CKDPQuery *_query;
    CKDPRequestedFields *_requestedFields;
    CKDPRecordZoneIdentifier *_zoneIdentifier;
    struct {
        unsigned int limit:1;
    } _has;
}

@property (nonatomic, readonly) _Bool hasQuery;
@property (retain, nonatomic) CKDPQuery *query;
@property (nonatomic, readonly) _Bool hasContinuationMarker;
@property (retain, nonatomic) NSData *continuationMarker;
@property (nonatomic) _Bool hasLimit;
@property (nonatomic) unsigned int limit;
@property (nonatomic, readonly) _Bool hasZoneIdentifier;
@property (retain, nonatomic) CKDPRecordZoneIdentifier *zoneIdentifier;
@property (nonatomic, readonly) _Bool hasRequestedFields;
@property (retain, nonatomic) CKDPRequestedFields *requestedFields;
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
