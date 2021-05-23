/*
 Image: /System/Library/PrivateFrameworks/PowerlogLiteOperators.framework/PowerlogLiteOperators
 */

#import <ProtocolBuffer/PBCodable.h>

@interface KCellularTdsRrcState : PBCodable

{
    unsigned long long _timestamp;
    int _newRrcState;
    unsigned int _prevStateDurMs;
    int _rrcState;
    unsigned int _subsId;
    struct {
        unsigned int timestamp:1;
        unsigned int newRrcState:1;
        unsigned int prevStateDurMs:1;
        unsigned int rrcState:1;
        unsigned int subsId:1;
    } _has;
}

@property (nonatomic) _Bool hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) _Bool hasRrcState;
@property (nonatomic) int rrcState;
@property (nonatomic) _Bool hasNewRrcState;
@property (nonatomic) int newRrcState;
@property (nonatomic) _Bool hasPrevStateDurMs;
@property (nonatomic) unsigned int prevStateDurMs;
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
- (id)rrcStateAsString:(int)arg1;
- (int)StringAsRrcState:(id)arg1;
- (id)newRrcStateAsString:(int)arg1;
- (int)StringAsNewRrcState:(id)arg1;

@end
