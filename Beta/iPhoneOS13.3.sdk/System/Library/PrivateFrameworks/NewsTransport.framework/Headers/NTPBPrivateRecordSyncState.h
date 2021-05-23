/*
 Image: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
 */

#import <ProtocolBuffer/PBCodable.h>

@class NSString, NTPBDate;

@interface NTPBPrivateRecordSyncState : PBCodable

{
    NTPBDate *_lastCleanDate;
    NTPBDate *_lastDirtyDate;
    NSString *_recordName;
    NSString *_recordZoneName;
}

@property (nonatomic, readonly) _Bool hasRecordName;
@property (retain, nonatomic) NSString *recordName;
@property (nonatomic, readonly) _Bool hasRecordZoneName;
@property (retain, nonatomic) NSString *recordZoneName;
@property (nonatomic, readonly) _Bool hasLastCleanDate;
@property (retain, nonatomic) NTPBDate *lastCleanDate;
@property (nonatomic, readonly) _Bool hasLastDirtyDate;
@property (retain, nonatomic) NTPBDate *lastDirtyDate;

- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;

@end
