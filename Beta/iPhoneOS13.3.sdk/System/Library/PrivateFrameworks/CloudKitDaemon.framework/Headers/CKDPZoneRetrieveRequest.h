/*
 Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

#import <ProtocolBuffer/PBRequest.h>

@class CKDPRecordZoneIdentifier, NSData;

__attribute__((visibility("hidden")))
@interface CKDPZoneRetrieveRequest : PBRequest

{
    NSData *_continuationMarker;
    CKDPRecordZoneIdentifier *_zoneIdentifier;
    _Bool _onlyFetchPCSInfo;
    struct {
        unsigned int onlyFetchPCSInfo:1;
    } _has;
}

@property (nonatomic, readonly) _Bool hasZoneIdentifier;
@property (retain, nonatomic) CKDPRecordZoneIdentifier *zoneIdentifier;
@property (nonatomic) _Bool hasOnlyFetchPCSInfo;
@property (nonatomic) _Bool onlyFetchPCSInfo;
@property (nonatomic, readonly) _Bool hasContinuationMarker;
@property (retain, nonatomic) NSData *continuationMarker;

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
