/*
 Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

#import <ProtocolBuffer/PBCodable.h>

@class CKDPProtectionInfo, CKDPRecord, CKDPShareMetadata, CKDPZone, NSMutableArray, NSString;

__attribute__((visibility("hidden")))
@interface CKDPRecordResolveTokenResponse : PBCodable

{
    NSString *_container;
    int _containerEnvironment;
    CKDPProtectionInfo *_protectionInfo;
    CKDPProtectionInfo *_recordProtectionInfo;
    CKDPZone *_recordZone;
    NSMutableArray *_records;
    CKDPShareMetadata *_shareMetadata;
    CKDPRecord *_shareRecord;
    struct {
        unsigned int containerEnvironment:1;
    } _has;
}

@property (nonatomic, readonly) _Bool hasContainer;
@property (retain, nonatomic) NSString *container;
@property (nonatomic) _Bool hasContainerEnvironment;
@property (nonatomic) int containerEnvironment;
@property (retain, nonatomic) NSMutableArray *records;
@property (nonatomic, readonly) _Bool hasShareRecord;
@property (retain, nonatomic) CKDPRecord *shareRecord;
@property (nonatomic, readonly) _Bool hasShareMetadata;
@property (retain, nonatomic) CKDPShareMetadata *shareMetadata;
@property (nonatomic, readonly) _Bool hasProtectionInfo;
@property (retain, nonatomic) CKDPProtectionInfo *protectionInfo;
@property (nonatomic, readonly) _Bool hasRecordProtectionInfo;
@property (retain, nonatomic) CKDPProtectionInfo *recordProtectionInfo;
@property (nonatomic, readonly) _Bool hasRecordZone;
@property (retain, nonatomic) CKDPZone *recordZone;

+ (Class)recordType;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;
- (void)addRecord:(id)arg1;
- (unsigned long long)recordsCount;
- (void)clearRecords;
- (id)recordAtIndex:(unsigned long long)arg1;
- (id)containerEnvironmentAsString:(int)arg1;
- (int)StringAsContainerEnvironment:(id)arg1;

@end
