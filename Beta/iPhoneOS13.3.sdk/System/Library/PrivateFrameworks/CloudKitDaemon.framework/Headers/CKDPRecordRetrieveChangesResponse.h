/*
 Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

#import <ProtocolBuffer/PBCodable.h>

@class NSData, NSMutableArray;

__attribute__((visibility("hidden")))
@interface CKDPRecordRetrieveChangesResponse : PBCodable

{
    NSMutableArray *_changedRecords;
    NSMutableArray *_changedShares;
    NSData *_clientChangeToken;
    int _status;
    NSData *_syncContinuationToken;
    _Bool _pendingArchivedRecords;
    struct {
        unsigned int status:1;
        unsigned int pendingArchivedRecords:1;
    } _has;
}

@property (retain, nonatomic) NSMutableArray *changedRecords;
@property (nonatomic, readonly) _Bool hasSyncContinuationToken;
@property (retain, nonatomic) NSData *syncContinuationToken;
@property (nonatomic, readonly) _Bool hasClientChangeToken;
@property (retain, nonatomic) NSData *clientChangeToken;
@property (nonatomic) _Bool hasStatus;
@property (nonatomic) int status;
@property (retain, nonatomic) NSMutableArray *changedShares;
@property (nonatomic) _Bool hasPendingArchivedRecords;
@property (nonatomic) _Bool pendingArchivedRecords;

+ (Class)changedRecordType;
+ (Class)changedShareType;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)statusAsString:(int)arg1;
- (int)StringAsStatus:(id)arg1;
- (void)addChangedRecord:(id)arg1;
- (void)addChangedShare:(id)arg1;
- (unsigned long long)changedRecordsCount;
- (void)clearChangedRecords;
- (id)changedRecordAtIndex:(unsigned long long)arg1;
- (unsigned long long)changedSharesCount;
- (void)clearChangedShares;
- (id)changedShareAtIndex:(unsigned long long)arg1;

@end
