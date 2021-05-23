/*
 Image: /System/Library/PrivateFrameworks/Proximity.framework/Proximity
 */

#import <Foundation/NSObject.h>

@interface PRGetPowerStatsResponse : NSObject

{
    unsigned short _numPacketsReceived;
    unsigned short _numPacketsTransmitted;
    unsigned int _sleepDuration;
    unsigned int _wakeDuration;
    unsigned int _singleAntennaSearchDuration;
    unsigned int _dualAntennaSearchDuration;
    unsigned int _singleChainRxPacketDuration;
    unsigned int _dualChainRxPacketDuration;
    unsigned int _tripleChainRxPacketDuration;
    unsigned int _dspProcessingDuration;
    unsigned int _txDuration;
}

@property (nonatomic, readonly) unsigned int sleepDuration;
@property (nonatomic, readonly) unsigned int wakeDuration;
@property (nonatomic, readonly) unsigned int singleAntennaSearchDuration;
@property (nonatomic, readonly) unsigned int dualAntennaSearchDuration;
@property (nonatomic, readonly) unsigned int singleChainRxPacketDuration;
@property (nonatomic, readonly) unsigned int dualChainRxPacketDuration;
@property (nonatomic, readonly) unsigned int tripleChainRxPacketDuration;
@property (nonatomic, readonly) unsigned int dspProcessingDuration;
@property (nonatomic, readonly) unsigned int txDuration;
@property (nonatomic, readonly) unsigned short numPacketsReceived;
@property (nonatomic, readonly) unsigned short numPacketsTransmitted;

+ (_Bool)supportsSecureCoding;

- (_Bool)isEqual:(id)arg1;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithSleepDuration:(unsigned int)arg1 wakeDuration:(unsigned int)arg2 singleAntennaSearchDuration:(unsigned int)arg3 dualAntennaSearchDuration:(unsigned int)arg4 singleChainRxPacketDuration:(unsigned int)arg5 dualChainRxPacketDuration:(unsigned int)arg6 tripleChainRxPacketDuration:(unsigned int)arg7 dspProcessingDuration:(unsigned int)arg8 txDuration:(unsigned int)arg9 numPacketsReceived:(unsigned short)arg10 numPacketsTransmitted:(unsigned short)arg11;
- (id)initWithGetPowerStatsResponse:(const struct GetPowerStatsResponse *)arg1;

@end
