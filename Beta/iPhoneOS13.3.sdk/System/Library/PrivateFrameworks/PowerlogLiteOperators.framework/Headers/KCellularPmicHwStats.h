/*
 Image: /System/Library/PrivateFrameworks/PowerlogLiteOperators.framework/PowerlogLiteOperators
 */

#import <ProtocolBuffer/PBCodable.h>

@interface KCellularPmicHwStats : PBCodable

{
    unsigned long long _timestamp;
    unsigned int _activeDurMs;
    unsigned int _bctActiveDurMs;
    unsigned int _cdmaActiveDurMs;
    unsigned int _dbgActiveDurMs;
    unsigned int _dpuActiveDurMs;
    unsigned int _durationMs;
    unsigned int _gsmActiveDurMs;
    unsigned int _gsmCa5ActiveDurMs;
    unsigned int _highVoltActiveDurMs;
    unsigned int _hostActiveDurMs;
    unsigned int _hostCpuActiveDurMs;
    unsigned int _hostCpuSysActiveDurMs;
    unsigned int _ioActiveDurMs;
    unsigned int _lowVoltActiveDurMs;
    unsigned int _lteActiveDurMs;
    unsigned int _midVoltActiveDurMs;
    unsigned int _perActiveDurMs;
    unsigned int _phyActiveDurMs;
    unsigned int _phyNocActiveDurMs;
    unsigned int _rauActiveDurMs;
    unsigned int _rpcuActiveDurMs;
    unsigned int _sleepDurMs;
    unsigned int _sleepEntryCount;
    unsigned int _tdscdmaActiveDurMs;
    unsigned int _tpcuActiveDurMs;
    unsigned int _wcdmaActiveDurMs;
    struct {
        unsigned int timestamp:1;
        unsigned int activeDurMs:1;
        unsigned int bctActiveDurMs:1;
        unsigned int cdmaActiveDurMs:1;
        unsigned int dbgActiveDurMs:1;
        unsigned int dpuActiveDurMs:1;
        unsigned int durationMs:1;
        unsigned int gsmActiveDurMs:1;
        unsigned int gsmCa5ActiveDurMs:1;
        unsigned int highVoltActiveDurMs:1;
        unsigned int hostActiveDurMs:1;
        unsigned int hostCpuActiveDurMs:1;
        unsigned int hostCpuSysActiveDurMs:1;
        unsigned int ioActiveDurMs:1;
        unsigned int lowVoltActiveDurMs:1;
        unsigned int lteActiveDurMs:1;
        unsigned int midVoltActiveDurMs:1;
        unsigned int perActiveDurMs:1;
        unsigned int phyActiveDurMs:1;
        unsigned int phyNocActiveDurMs:1;
        unsigned int rauActiveDurMs:1;
        unsigned int rpcuActiveDurMs:1;
        unsigned int sleepDurMs:1;
        unsigned int sleepEntryCount:1;
        unsigned int tdscdmaActiveDurMs:1;
        unsigned int tpcuActiveDurMs:1;
        unsigned int wcdmaActiveDurMs:1;
    } _has;
}

@property (nonatomic) _Bool hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) _Bool hasDurationMs;
@property (nonatomic) unsigned int durationMs;
@property (nonatomic) _Bool hasSleepDurMs;
@property (nonatomic) unsigned int sleepDurMs;
@property (nonatomic) _Bool hasActiveDurMs;
@property (nonatomic) unsigned int activeDurMs;
@property (nonatomic) _Bool hasSleepEntryCount;
@property (nonatomic) unsigned int sleepEntryCount;
@property (nonatomic) _Bool hasLowVoltActiveDurMs;
@property (nonatomic) unsigned int lowVoltActiveDurMs;
@property (nonatomic) _Bool hasMidVoltActiveDurMs;
@property (nonatomic) unsigned int midVoltActiveDurMs;
@property (nonatomic) _Bool hasHighVoltActiveDurMs;
@property (nonatomic) unsigned int highVoltActiveDurMs;
@property (nonatomic) _Bool hasGsmCa5ActiveDurMs;
@property (nonatomic) unsigned int gsmCa5ActiveDurMs;
@property (nonatomic) _Bool hasLteActiveDurMs;
@property (nonatomic) unsigned int lteActiveDurMs;
@property (nonatomic) _Bool hasWcdmaActiveDurMs;
@property (nonatomic) unsigned int wcdmaActiveDurMs;
@property (nonatomic) _Bool hasTdscdmaActiveDurMs;
@property (nonatomic) unsigned int tdscdmaActiveDurMs;
@property (nonatomic) _Bool hasHostActiveDurMs;
@property (nonatomic) unsigned int hostActiveDurMs;
@property (nonatomic) _Bool hasHostCpuSysActiveDurMs;
@property (nonatomic) unsigned int hostCpuSysActiveDurMs;
@property (nonatomic) _Bool hasHostCpuActiveDurMs;
@property (nonatomic) unsigned int hostCpuActiveDurMs;
@property (nonatomic) _Bool hasRpcuActiveDurMs;
@property (nonatomic) unsigned int rpcuActiveDurMs;
@property (nonatomic) _Bool hasPhyActiveDurMs;
@property (nonatomic) unsigned int phyActiveDurMs;
@property (nonatomic) _Bool hasPhyNocActiveDurMs;
@property (nonatomic) unsigned int phyNocActiveDurMs;
@property (nonatomic) _Bool hasBctActiveDurMs;
@property (nonatomic) unsigned int bctActiveDurMs;
@property (nonatomic) _Bool hasCdmaActiveDurMs;
@property (nonatomic) unsigned int cdmaActiveDurMs;
@property (nonatomic) _Bool hasGsmActiveDurMs;
@property (nonatomic) unsigned int gsmActiveDurMs;
@property (nonatomic) _Bool hasTpcuActiveDurMs;
@property (nonatomic) unsigned int tpcuActiveDurMs;
@property (nonatomic) _Bool hasIoActiveDurMs;
@property (nonatomic) unsigned int ioActiveDurMs;
@property (nonatomic) _Bool hasPerActiveDurMs;
@property (nonatomic) unsigned int perActiveDurMs;
@property (nonatomic) _Bool hasDbgActiveDurMs;
@property (nonatomic) unsigned int dbgActiveDurMs;
@property (nonatomic) _Bool hasDpuActiveDurMs;
@property (nonatomic) unsigned int dpuActiveDurMs;
@property (nonatomic) _Bool hasRauActiveDurMs;
@property (nonatomic) unsigned int rauActiveDurMs;

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
