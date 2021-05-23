/*
 Image: /System/Library/PrivateFrameworks/PowerlogLiteOperators.framework/PowerlogLiteOperators
 */

#import <ProtocolBuffer/PBCodable.h>

@interface KCellularLqmStateChange : PBCodable

{
    unsigned long long _timestamp;
    int _hiPowerEvent;
    int _hiPowerExitReason;
    unsigned int _lqmState;
    int _lteRsrp;
    int _lteRsrq;
    int _lteRssi;
    int _lteRssnr;
    unsigned int _prevLqmState;
    unsigned int _prevStateDurationSec;
    unsigned int _prevSysMode;
    int _sysMode;
    int _wcdmaEcio;
    int _wcdmaRscp;
    _Bool _isScreenOn;
    _Bool _prevIsScreenOn;
    struct {
        unsigned int timestamp:1;
        unsigned int hiPowerEvent:1;
        unsigned int hiPowerExitReason:1;
        unsigned int lqmState:1;
        unsigned int lteRsrp:1;
        unsigned int lteRsrq:1;
        unsigned int lteRssi:1;
        unsigned int lteRssnr:1;
        unsigned int prevLqmState:1;
        unsigned int prevStateDurationSec:1;
        unsigned int prevSysMode:1;
        unsigned int sysMode:1;
        unsigned int wcdmaEcio:1;
        unsigned int wcdmaRscp:1;
        unsigned int isScreenOn:1;
        unsigned int prevIsScreenOn:1;
    } _has;
}

@property (nonatomic) _Bool hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) _Bool hasPrevStateDurationSec;
@property (nonatomic) unsigned int prevStateDurationSec;
@property (nonatomic) _Bool hasLqmState;
@property (nonatomic) unsigned int lqmState;
@property (nonatomic) _Bool hasSysMode;
@property (nonatomic) int sysMode;
@property (nonatomic) _Bool hasIsScreenOn;
@property (nonatomic) _Bool isScreenOn;
@property (nonatomic) _Bool hasPrevLqmState;
@property (nonatomic) unsigned int prevLqmState;
@property (nonatomic) _Bool hasPrevSysMode;
@property (nonatomic) unsigned int prevSysMode;
@property (nonatomic) _Bool hasPrevIsScreenOn;
@property (nonatomic) _Bool prevIsScreenOn;
@property (nonatomic) _Bool hasHiPowerEvent;
@property (nonatomic) int hiPowerEvent;
@property (nonatomic) _Bool hasHiPowerExitReason;
@property (nonatomic) int hiPowerExitReason;
@property (nonatomic) _Bool hasWcdmaEcio;
@property (nonatomic) int wcdmaEcio;
@property (nonatomic) _Bool hasWcdmaRscp;
@property (nonatomic) int wcdmaRscp;
@property (nonatomic) _Bool hasLteRssi;
@property (nonatomic) int lteRssi;
@property (nonatomic) _Bool hasLteRsrp;
@property (nonatomic) int lteRsrp;
@property (nonatomic) _Bool hasLteRsrq;
@property (nonatomic) int lteRsrq;
@property (nonatomic) _Bool hasLteRssnr;
@property (nonatomic) int lteRssnr;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)hiPowerEventAsString:(int)arg1;
- (int)StringAsHiPowerEvent:(id)arg1;
- (id)hiPowerExitReasonAsString:(int)arg1;
- (int)StringAsHiPowerExitReason:(id)arg1;

@end
