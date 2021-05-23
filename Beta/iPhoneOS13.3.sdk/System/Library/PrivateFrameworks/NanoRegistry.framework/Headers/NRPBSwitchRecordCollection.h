/*
 Image: /System/Library/PrivateFrameworks/NanoRegistry.framework/NanoRegistry
 */

#import <ProtocolBuffer/PBCodable.h>

#import <NanoRegistry/Swift-Protocol.h>

@class NSMutableArray;

@interface NRPBSwitchRecordCollection : PBCodable <Swift>

{
    NSMutableArray *_records;
}

@property (retain, nonatomic) NSMutableArray *records;

+ (Class)recordsType;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;
- (void)addRecords:(id)arg1;
- (unsigned long long)recordsCount;
- (void)clearRecords;
- (id)recordsAtIndex:(unsigned long long)arg1;

@end
