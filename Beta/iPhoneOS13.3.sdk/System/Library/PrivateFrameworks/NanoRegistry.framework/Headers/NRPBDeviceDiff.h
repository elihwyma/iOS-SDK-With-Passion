/*
 Image: /System/Library/PrivateFrameworks/NanoRegistry.framework/NanoRegistry
 */

#import <ProtocolBuffer/PBCodable.h>

#import <NanoRegistry/Swift-Protocol.h>

@class NSMutableArray;

@interface NRPBDeviceDiff : PBCodable <Swift>

{
    NSMutableArray *_diffs;
    NSMutableArray *_names;
}

@property (retain, nonatomic) NSMutableArray *names;
@property (retain, nonatomic) NSMutableArray *diffs;

+ (Class)diffsType;
+ (Class)namesType;

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
- (unsigned long long)namesCount;
- (void)clearNames;
- (void)addDiffs:(id)arg1;
- (unsigned long long)diffsCount;
- (id)diffsAtIndex:(unsigned long long)arg1;
- (void)addNames:(id)arg1;
- (id)namesAtIndex:(unsigned long long)arg1;

@end
