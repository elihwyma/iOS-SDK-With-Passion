/*
 Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

#import <ProtocolBuffer/PBRequest.h>

@class NSData;

__attribute__((visibility("hidden")))
@interface CKDPZoneRetrieveChangesRequest : PBRequest

{
    unsigned int _maxChangedZones;
    NSData *_syncContinuationToken;
    struct {
        unsigned int maxChangedZones:1;
    } _has;
}

@property (nonatomic, readonly) _Bool hasSyncContinuationToken;
@property (retain, nonatomic) NSData *syncContinuationToken;
@property (nonatomic) _Bool hasMaxChangedZones;
@property (nonatomic) unsigned int maxChangedZones;

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
