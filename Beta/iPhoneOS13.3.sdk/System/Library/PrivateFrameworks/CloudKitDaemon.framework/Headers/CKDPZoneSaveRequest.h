/*
 Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

#import <ProtocolBuffer/PBRequest.h>

@class CKDPZone, NSString;

__attribute__((visibility("hidden")))
@interface CKDPZoneSaveRequest : PBRequest

{
    CKDPZone *_recordZone;
    NSString *_zoneProtectionInfoTag;
}

@property (nonatomic, readonly) _Bool hasRecordZone;
@property (retain, nonatomic) CKDPZone *recordZone;
@property (nonatomic, readonly) _Bool hasZoneProtectionInfoTag;
@property (retain, nonatomic) NSString *zoneProtectionInfoTag;

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
