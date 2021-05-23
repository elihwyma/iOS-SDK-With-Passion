/*
 Image: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
 */

#import <ProtocolBuffer/PBCodable.h>

@class NSMutableArray;

@interface NTPBPrivateDataControllerSyncState : PBCodable

{
    unsigned long long _version;
    NSMutableArray *_recordStates;
    NSMutableArray *_zoneStates;
    CDStruct_f20694ce _has;
}

@property (retain, nonatomic) NSMutableArray *zoneStates;
@property (retain, nonatomic) NSMutableArray *recordStates;
@property (nonatomic) _Bool hasVersion;
@property (nonatomic) unsigned long long version;

+ (Class)zoneStatesType;
+ (Class)recordStatesType;

- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)addZoneStates:(id)arg1;
- (void)addRecordStates:(id)arg1;
- (void)clearZoneStates;
- (unsigned long long)zoneStatesCount;
- (id)zoneStatesAtIndex:(unsigned long long)arg1;
- (void)clearRecordStates;
- (unsigned long long)recordStatesCount;
- (id)recordStatesAtIndex:(unsigned long long)arg1;

@end
