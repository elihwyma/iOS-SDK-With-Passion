/*
 Image: /System/Library/PrivateFrameworks/NanoRegistry.framework/NanoRegistry
 */

#import <ProtocolBuffer/PBCodable.h>

#import <NanoRegistry/Swift-Protocol.h>

@class NSMutableArray;

@interface NRPBDeviceCollectionDiff : PBCodable <Swift>

{
    NSMutableArray *_diffs;
    NSMutableArray *_pairingIDs;
}

@property (retain, nonatomic) NSMutableArray *pairingIDs;
@property (retain, nonatomic) NSMutableArray *diffs;

+ (Class)pairingIDsType;
+ (Class)diffsType;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;
- (void)clearDiffs;
- (void)addPairingIDs:(id)arg1;
- (unsigned long long)pairingIDsCount;
- (void)clearPairingIDs;
- (id)pairingIDsAtIndex:(unsigned long long)arg1;
- (void)addDiffs:(id)arg1;
- (unsigned long long)diffsCount;
- (id)diffsAtIndex:(unsigned long long)arg1;

@end
