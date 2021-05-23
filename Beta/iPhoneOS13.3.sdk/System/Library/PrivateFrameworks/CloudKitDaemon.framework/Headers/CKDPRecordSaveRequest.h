/*
 Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

#import <ProtocolBuffer/PBRequest.h>

@class CKDPRecord, CKDPRecordSaveRequestConflictLoserUpdate, CKDPRecordSaveRequestShareIdUpdate, CKDPRequestedFields, NSMutableArray, NSString;

__attribute__((visibility("hidden")))
@interface CKDPRecordSaveRequest : PBRequest

{
    CKDPRecordSaveRequestConflictLoserUpdate *_conflictLoserUpdate;
    NSMutableArray *_conflictLosersToResolves;
    NSString *_etag;
    NSMutableArray *_fieldsToDeleteIfExistOnMerges;
    NSString *_parentChainProtectionInfoTag;
    CKDPRecord *_record;
    NSString *_recordProtectionInfoTag;
    CKDPRequestedFields *_requestedFields;
    int _saveSemantics;
    NSString *_shareEtag;
    CKDPRecordSaveRequestShareIdUpdate *_shareIDUpdate;
    NSString *_zoneProtectionInfoTag;
    _Bool _merge;
    struct {
        unsigned int saveSemantics:1;
        unsigned int merge:1;
    } _has;
}

@property (nonatomic, readonly) _Bool hasRecord;
@property (retain, nonatomic) CKDPRecord *record;
@property (nonatomic) _Bool hasMerge;
@property (nonatomic) _Bool merge;
@property (retain, nonatomic) NSMutableArray *fieldsToDeleteIfExistOnMerges;
@property (nonatomic, readonly) _Bool hasEtag;
@property (retain, nonatomic) NSString *etag;
@property (nonatomic, readonly) _Bool hasConflictLoserUpdate;
@property (retain, nonatomic) CKDPRecordSaveRequestConflictLoserUpdate *conflictLoserUpdate;
@property (nonatomic) _Bool hasSaveSemantics;
@property (nonatomic) int saveSemantics;
@property (nonatomic, readonly) _Bool hasZoneProtectionInfoTag;
@property (retain, nonatomic) NSString *zoneProtectionInfoTag;
@property (nonatomic, readonly) _Bool hasRecordProtectionInfoTag;
@property (retain, nonatomic) NSString *recordProtectionInfoTag;
@property (retain, nonatomic) NSMutableArray *conflictLosersToResolves;
@property (nonatomic, readonly) _Bool hasShareEtag;
@property (retain, nonatomic) NSString *shareEtag;
@property (nonatomic, readonly) _Bool hasShareIDUpdate;
@property (retain, nonatomic) CKDPRecordSaveRequestShareIdUpdate *shareIDUpdate;
@property (nonatomic, readonly) _Bool hasParentChainProtectionInfoTag;
@property (retain, nonatomic) NSString *parentChainProtectionInfoTag;
@property (nonatomic, readonly) _Bool hasRequestedFields;
@property (retain, nonatomic) CKDPRequestedFields *requestedFields;

+ (id)options;
+ (Class)fieldsToDeleteIfExistOnMergeType;
+ (Class)conflictLosersToResolveType;

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
- (void)addFieldsToDeleteIfExistOnMerge:(id)arg1;
- (void)addConflictLosersToResolve:(id)arg1;
- (unsigned long long)fieldsToDeleteIfExistOnMergesCount;
- (void)clearFieldsToDeleteIfExistOnMerges;
- (id)fieldsToDeleteIfExistOnMergeAtIndex:(unsigned long long)arg1;
- (unsigned long long)conflictLosersToResolvesCount;
- (void)clearConflictLosersToResolves;
- (id)conflictLosersToResolveAtIndex:(unsigned long long)arg1;
- (id)saveSemanticsAsString:(int)arg1;
- (int)StringAsSaveSemantics:(id)arg1;

@end
