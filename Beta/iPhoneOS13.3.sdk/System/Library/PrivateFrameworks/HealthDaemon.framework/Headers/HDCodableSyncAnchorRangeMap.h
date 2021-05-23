/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <ProtocolBuffer/PBCodable.h>

#import <HealthDaemon/Swift-Protocol.h>

@class NSMutableArray;

@interface HDCodableSyncAnchorRangeMap : PBCodable <Swift>

{
    NSMutableArray *_anchorRanges;
}

@property (retain, nonatomic) NSMutableArray *anchorRanges;

+ (Class)anchorRangesType;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;
- (void)addAnchorRanges:(id)arg1;
- (unsigned long long)anchorRangesCount;
- (void)clearAnchorRanges;
- (id)anchorRangesAtIndex:(unsigned long long)arg1;

@end
