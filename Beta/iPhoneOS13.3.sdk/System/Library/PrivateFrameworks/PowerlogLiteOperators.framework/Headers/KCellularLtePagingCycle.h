/*
 Image: /System/Library/PrivateFrameworks/PowerlogLiteOperators.framework/PowerlogLiteOperators
 */

#import <ProtocolBuffer/PBCodable.h>

@interface KCellularLtePagingCycle : PBCodable

{
    unsigned long long _timestamp;
    unsigned int _earfcn;
    unsigned int _nbMs;
    unsigned int _pagingCycleMs;
    unsigned int _phyCellId;
    unsigned int _subsId;
    struct {
        unsigned int timestamp:1;
        unsigned int earfcn:1;
        unsigned int nbMs:1;
        unsigned int pagingCycleMs:1;
        unsigned int phyCellId:1;
        unsigned int subsId:1;
    } _has;
}

@property (nonatomic) _Bool hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) _Bool hasEarfcn;
@property (nonatomic) unsigned int earfcn;
@property (nonatomic) _Bool hasPhyCellId;
@property (nonatomic) unsigned int phyCellId;
@property (nonatomic) _Bool hasNbMs;
@property (nonatomic) unsigned int nbMs;
@property (nonatomic) _Bool hasPagingCycleMs;
@property (nonatomic) unsigned int pagingCycleMs;
@property (nonatomic) _Bool hasSubsId;
@property (nonatomic) unsigned int subsId;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;

@end
