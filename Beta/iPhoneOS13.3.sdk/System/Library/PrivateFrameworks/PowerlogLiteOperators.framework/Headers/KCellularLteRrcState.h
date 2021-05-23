/*
 Image: /System/Library/PrivateFrameworks/PowerlogLiteOperators.framework/PowerlogLiteOperators
 */

#import <ProtocolBuffer/PBCodable.h>

@interface KCellularLteRrcState : PBCodable

{
    unsigned long long _timestamp;
    int _cause;
    int _prevState;
    unsigned int _prevStateDurMs;
    int _state;
    unsigned int _subsId;
    struct {
        unsigned int timestamp:1;
        unsigned int cause:1;
        unsigned int prevState:1;
        unsigned int prevStateDurMs:1;
        unsigned int state:1;
        unsigned int subsId:1;
    } _has;
}

@property (nonatomic) _Bool hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) _Bool hasState;
@property (nonatomic) int state;
@property (nonatomic) _Bool hasPrevState;
@property (nonatomic) int prevState;
@property (nonatomic) _Bool hasPrevStateDurMs;
@property (nonatomic) unsigned int prevStateDurMs;
@property (nonatomic) _Bool hasCause;
@property (nonatomic) int cause;
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
- (id)stateAsString:(int)arg1;
- (int)StringAsState:(id)arg1;
- (id)prevStateAsString:(int)arg1;
- (int)StringAsPrevState:(id)arg1;
- (id)causeAsString:(int)arg1;
- (int)StringAsCause:(id)arg1;

@end
