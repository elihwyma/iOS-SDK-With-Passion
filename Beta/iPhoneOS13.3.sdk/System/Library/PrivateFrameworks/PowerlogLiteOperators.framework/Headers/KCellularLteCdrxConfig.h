/*
 Image: /System/Library/PrivateFrameworks/PowerlogLiteOperators.framework/PowerlogLiteOperators
 */

#import <ProtocolBuffer/PBCodable.h>

@interface KCellularLteCdrxConfig : PBCodable

{
    unsigned long long _timestamp;
    unsigned int _cdrxConfigStatus;
    unsigned int _cellStatus;
    unsigned int _drxInactivityMs;
    unsigned int _drxRetxTimerMs;
    unsigned int _drxShortCycleNum;
    unsigned int _longDrxCycleMs;
    unsigned int _onDurationMs;
    int _rrcState;
    unsigned int _shortDrxCycleMs;
    unsigned int _subsId;
    unsigned int _transmissionMode;
    struct {
        unsigned int timestamp:1;
        unsigned int cdrxConfigStatus:1;
        unsigned int cellStatus:1;
        unsigned int drxInactivityMs:1;
        unsigned int drxRetxTimerMs:1;
        unsigned int drxShortCycleNum:1;
        unsigned int longDrxCycleMs:1;
        unsigned int onDurationMs:1;
        unsigned int rrcState:1;
        unsigned int shortDrxCycleMs:1;
        unsigned int subsId:1;
        unsigned int transmissionMode:1;
    } _has;
}

@property (nonatomic) _Bool hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) _Bool hasCellStatus;
@property (nonatomic) unsigned int cellStatus;
@property (nonatomic) _Bool hasOnDurationMs;
@property (nonatomic) unsigned int onDurationMs;
@property (nonatomic) _Bool hasDrxInactivityMs;
@property (nonatomic) unsigned int drxInactivityMs;
@property (nonatomic) _Bool hasDrxRetxTimerMs;
@property (nonatomic) unsigned int drxRetxTimerMs;
@property (nonatomic) _Bool hasLongDrxCycleMs;
@property (nonatomic) unsigned int longDrxCycleMs;
@property (nonatomic) _Bool hasShortDrxCycleMs;
@property (nonatomic) unsigned int shortDrxCycleMs;
@property (nonatomic) _Bool hasDrxShortCycleNum;
@property (nonatomic) unsigned int drxShortCycleNum;
@property (nonatomic) _Bool hasRrcState;
@property (nonatomic) int rrcState;
@property (nonatomic) _Bool hasCdrxConfigStatus;
@property (nonatomic) unsigned int cdrxConfigStatus;
@property (nonatomic) _Bool hasTransmissionMode;
@property (nonatomic) unsigned int transmissionMode;
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

@end
