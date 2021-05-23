/*
 Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

#import <ProtocolBuffer/PBCodable.h>

@class CKDPDateStatistics, CKDPIdentifier, CKDPProtectionInfo, CKDPRecordChainParent, CKDPRecordIdentifier, CKDPRecordStableUrl, CKDPRecordType, CKDPShare, CKDPShareIdentifier, NSData, NSMutableArray, NSString;

@interface CKDPRecord : PBCodable

{
    CKDPRecordChainParent *_chainParent;
    NSData *_chainPrivateKey;
    CKDPProtectionInfo *_chainProtectionInfo;
    NSMutableArray *_conflictLoserEtags;
    CKDPIdentifier *_createdBy;
    NSString *_etag;
    NSMutableArray *_fields;
    CKDPIdentifier *_modifiedBy;
    NSString *_modifiedByDevice;
    int _permission;
    NSMutableArray *_pluginFields;
    CKDPProtectionInfo *_protectionInfo;
    CKDPRecordIdentifier *_recordIdentifier;
    CKDPShareIdentifier *_shareId;
    CKDPShare *_shareInfo;
    CKDPRecordStableUrl *_stableUrl;
    CKDPDateStatistics *_timeStatistics;
    NSMutableArray *_tombstonedPublicKeyIDs;
    CKDPRecordType *_type;
    NSData *_zoneishMasterKeyId;
    struct {
        unsigned int permission:1;
    } _has;
}

@property (nonatomic, readonly) _Bool hasEtag;
@property (retain, nonatomic) NSString *etag;
@property (nonatomic, readonly) _Bool hasRecordIdentifier;
@property (retain, nonatomic) CKDPRecordIdentifier *recordIdentifier;
@property (nonatomic, readonly) _Bool hasType;
@property (retain, nonatomic) CKDPRecordType *type;
@property (nonatomic, readonly) _Bool hasCreatedBy;
@property (retain, nonatomic) CKDPIdentifier *createdBy;
@property (nonatomic, readonly) _Bool hasTimeStatistics;
@property (retain, nonatomic) CKDPDateStatistics *timeStatistics;
@property (retain, nonatomic) NSMutableArray *fields;
@property (nonatomic, readonly) _Bool hasShareId;
@property (retain, nonatomic) CKDPShareIdentifier *shareId;
@property (nonatomic, readonly) _Bool hasModifiedBy;
@property (retain, nonatomic) CKDPIdentifier *modifiedBy;
@property (retain, nonatomic) NSMutableArray *conflictLoserEtags;
@property (nonatomic, readonly) _Bool hasModifiedByDevice;
@property (retain, nonatomic) NSString *modifiedByDevice;
@property (retain, nonatomic) NSMutableArray *pluginFields;
@property (nonatomic, readonly) _Bool hasProtectionInfo;
@property (retain, nonatomic) CKDPProtectionInfo *protectionInfo;
@property (nonatomic) _Bool hasPermission;
@property (nonatomic) int permission;
@property (nonatomic, readonly) _Bool hasShareInfo;
@property (retain, nonatomic) CKDPShare *shareInfo;
@property (nonatomic, readonly) _Bool hasChainPrivateKey;
@property (retain, nonatomic) NSData *chainPrivateKey;
@property (nonatomic, readonly) _Bool hasChainProtectionInfo;
@property (retain, nonatomic) CKDPProtectionInfo *chainProtectionInfo;
@property (nonatomic, readonly) _Bool hasChainParent;
@property (retain, nonatomic) CKDPRecordChainParent *chainParent;
@property (nonatomic, readonly) _Bool hasStableUrl;
@property (retain, nonatomic) CKDPRecordStableUrl *stableUrl;
@property (retain, nonatomic) NSMutableArray *tombstonedPublicKeyIDs;
@property (nonatomic, readonly) _Bool hasZoneishMasterKeyId;
@property (retain, nonatomic) NSData *zoneishMasterKeyId;

+ (id)recordFromData:(id)arg1;
+ (Class)fieldsType;
+ (Class)conflictLoserEtagsType;
+ (Class)pluginFieldsType;
+ (Class)tombstonedPublicKeyIDsType;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (id)dataRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)fieldForKey:(id)arg1;
- (void)addFields:(id)arg1;
- (unsigned long long)fieldsCount;
- (void)clearFields;
- (id)fieldsAtIndex:(unsigned long long)arg1;
- (void)addConflictLoserEtags:(id)arg1;
- (unsigned long long)conflictLoserEtagsCount;
- (void)clearConflictLoserEtags;
- (id)conflictLoserEtagsAtIndex:(unsigned long long)arg1;
- (void)_inflateFieldsFromData:(id)arg1;
- (id)fieldData;
- (void)addPluginFields:(id)arg1;
- (void)addTombstonedPublicKeyIDs:(id)arg1;
- (unsigned long long)pluginFieldsCount;
- (void)clearPluginFields;
- (id)pluginFieldsAtIndex:(unsigned long long)arg1;
- (unsigned long long)tombstonedPublicKeyIDsCount;
- (void)clearTombstonedPublicKeyIDs;
- (id)tombstonedPublicKeyIDsAtIndex:(unsigned long long)arg1;
- (id)permissionAsString:(int)arg1;
- (int)StringAsPermission:(id)arg1;
- (id)_permissionAsString;

@end
