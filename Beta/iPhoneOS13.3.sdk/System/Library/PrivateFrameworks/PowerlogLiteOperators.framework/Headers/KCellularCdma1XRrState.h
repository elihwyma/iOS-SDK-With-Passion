/*
 Image: /System/Library/PrivateFrameworks/PowerlogLiteOperators.framework/PowerlogLiteOperators
 */

#import <ProtocolBuffer/PBCodable.h>

@interface KCellularCdma1XRrState : PBCodable

{
    unsigned long long _timestamp;
    unsigned int _currCpState;
    int _currNormalizedState;
    unsigned int _prevCpState;
    unsigned int _prevStateDurMs;
    unsigned int _subsId;
    struct {
        unsigned int timestamp:1;
        unsigned int currCpState:1;
        unsigned int currNormalizedState:1;
        unsigned int prevCpState:1;
        unsigned int prevStateDurMs:1;
        unsigned int subsId:1;
    } _has;
}

@property (nonatomic) _Bool hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) _Bool hasSubsId;
@property (nonatomic) unsigned int subsId;
@property (nonatomic) _Bool hasPrevCpState;
@property (nonatomic) unsigned int prevCpState;
@property (nonatomic) _Bool hasCurrCpState;
@property (nonatomic) unsigned int currCpState;
@property (nonatomic) _Bool hasPrevStateDurMs;
@property (nonatomic) unsigned int prevStateDurMs;
@property (nonatomic) _Bool hasCurrNormalizedState;
@property (nonatomic) int currNormalizedState;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)currNormalizedStateAsString:(int)arg1;
- (int)StringAsCurrNormalizedState:(id)arg1;

@end
