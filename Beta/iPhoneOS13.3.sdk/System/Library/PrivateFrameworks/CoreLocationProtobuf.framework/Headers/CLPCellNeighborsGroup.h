/*
 Image: /System/Library/PrivateFrameworks/CoreLocationProtobuf.framework/CoreLocationProtobuf
 */

#import <PBCodable.h>

@class NSMutableArray;

@interface CLPCellNeighborsGroup : PBCodable

{
    NSMutableArray *_cdmaNeighbors;
    NSMutableArray *_gsmNeighbors;
    NSMutableArray *_lteNeighbors;
    NSMutableArray *_scdmaNeighbors;
}

@property (retain, nonatomic) NSMutableArray *gsmNeighbors;
@property (retain, nonatomic) NSMutableArray *scdmaNeighbors;
@property (retain, nonatomic) NSMutableArray *cdmaNeighbors;
@property (retain, nonatomic) NSMutableArray *lteNeighbors;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;
- (void)addGsmNeighbors:(id)arg1;
- (void)addScdmaNeighbors:(id)arg1;
- (void)addCdmaNeighbors:(id)arg1;
- (void)addLteNeighbors:(id)arg1;
- (unsigned long long)gsmNeighborsCount;
- (void)clearGsmNeighbors;
- (id)gsmNeighborsAtIndex:(unsigned long long)arg1;
- (unsigned long long)scdmaNeighborsCount;
- (void)clearScdmaNeighbors;
- (id)scdmaNeighborsAtIndex:(unsigned long long)arg1;
- (unsigned long long)cdmaNeighborsCount;
- (void)clearCdmaNeighbors;
- (id)cdmaNeighborsAtIndex:(unsigned long long)arg1;
- (unsigned long long)lteNeighborsCount;
- (void)clearLteNeighbors;
- (id)lteNeighborsAtIndex:(unsigned long long)arg1;

@end
