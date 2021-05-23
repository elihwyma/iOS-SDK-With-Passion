/*
 Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

#import <ProtocolBuffer/PBCodable.h>

@class CKDPProtectionInfo, CKDPRecordStableUrl, CKDPRecordZoneIdentifier, CKDPShareIdentifier, NSData, NSMutableArray;

__attribute__((visibility("hidden")))
@interface CKDPZone : PBCodable

{
    NSData *_encryptedZoneishLastRollDate;
    CKDPProtectionInfo *_protectionInfo;
    NSMutableArray *_protectionInfoKeysToRemoves;
    CKDPProtectionInfo *_recordProtectionInfo;
    CKDPShareIdentifier *_shareId;
    CKDPRecordStableUrl *_stableUrl;
    CKDPRecordZoneIdentifier *_zoneIdentifier;
}

@property (nonatomic, readonly) _Bool hasZoneIdentifier;
@property (retain, nonatomic) CKDPRecordZoneIdentifier *zoneIdentifier;
@property (nonatomic, readonly) _Bool hasProtectionInfo;
@property (retain, nonatomic) CKDPProtectionInfo *protectionInfo;
@property (nonatomic, readonly) _Bool hasRecordProtectionInfo;
@property (retain, nonatomic) CKDPProtectionInfo *recordProtectionInfo;
@property (nonatomic, readonly) _Bool hasEncryptedZoneishLastRollDate;
@property (retain, nonatomic) NSData *encryptedZoneishLastRollDate;
@property (nonatomic, readonly) _Bool hasStableUrl;
@property (retain, nonatomic) CKDPRecordStableUrl *stableUrl;
@property (nonatomic, readonly) _Bool hasShareId;
@property (retain, nonatomic) CKDPShareIdentifier *shareId;
@property (retain, nonatomic) NSMutableArray *protectionInfoKeysToRemoves;

+ (Class)protectionInfoKeysToRemoveType;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;
- (void)addProtectionInfoKeysToRemove:(id)arg1;
- (unsigned long long)protectionInfoKeysToRemovesCount;
- (void)clearProtectionInfoKeysToRemoves;
- (id)protectionInfoKeysToRemoveAtIndex:(unsigned long long)arg1;

@end
