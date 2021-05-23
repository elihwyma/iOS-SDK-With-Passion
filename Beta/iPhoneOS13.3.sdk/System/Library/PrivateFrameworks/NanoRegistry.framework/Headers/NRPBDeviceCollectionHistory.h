/*
 Image: /System/Library/PrivateFrameworks/NanoRegistry.framework/NanoRegistry
 */

#import <ProtocolBuffer/PBCodable.h>

#import <NanoRegistry/Swift-Protocol.h>

@class NRPBSwitchRecordCollection, NSMutableArray;

@interface NRPBDeviceCollectionHistory : PBCodable <Swift>

{
    long long _startIndex;
    NSMutableArray *_historys;
    NRPBSwitchRecordCollection *_switchRecords;
    struct {
        unsigned int startIndex:1;
    } _has;
}

@property (nonatomic) _Bool hasStartIndex;
@property (nonatomic) long long startIndex;
@property (retain, nonatomic) NSMutableArray *historys;
@property (nonatomic, readonly) _Bool hasSwitchRecords;
@property (retain, nonatomic) NRPBSwitchRecordCollection *switchRecords;

+ (Class)historyType;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;
- (void)addHistory:(id)arg1;
- (unsigned long long)historysCount;
- (void)clearHistorys;
- (id)historyAtIndex:(unsigned long long)arg1;

@end
