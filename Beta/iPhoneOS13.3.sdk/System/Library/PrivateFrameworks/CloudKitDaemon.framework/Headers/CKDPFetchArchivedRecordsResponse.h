/*
 Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

#import <ProtocolBuffer/PBCodable.h>

@class NSData, NSMutableArray;

__attribute__((visibility("hidden")))
@interface CKDPFetchArchivedRecordsResponse : PBCodable

{
    NSData *_archiveContinuationToken;
    NSMutableArray *_records;
    int _status;
    CDStruct_47fe53f2 _has;
}

@property (retain, nonatomic) NSMutableArray *records;
@property (nonatomic, readonly) _Bool hasArchiveContinuationToken;
@property (retain, nonatomic) NSData *archiveContinuationToken;
@property (nonatomic) _Bool hasStatus;
@property (nonatomic) int status;

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
- (id)statusAsString:(int)arg1;
- (void)addRecord:(id)arg1;
- (int)StringAsStatus:(id)arg1;
- (unsigned long long)recordsCount;
- (void)clearRecords;
- (id)recordAtIndex:(unsigned long long)arg1;

@end
