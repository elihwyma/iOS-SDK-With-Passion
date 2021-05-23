/*
 Image: /System/Library/PrivateFrameworks/PASampling.framework/PASampling
 */

#import <Foundation/NSObject.h>

@interface PAMicrostackshotData : NSObject

{
    unsigned int _cpuNumber;
    unsigned long long _timeInUsUnix;
    unsigned char _microSnapshotFlags;
    unsigned short _systemStatsFlags;
}

@property (readonly) unsigned int cpuNumber;
@property (readonly) unsigned long long timestampInUsUnix;
@property (readonly) unsigned char microSnapshotFlags;
@property (readonly) _Bool didInterruptUserMode;
@property (readonly) _Bool isInterruptRecord;
@property (readonly) _Bool isTimerArmingRecord;
@property (readonly) unsigned short systemStatsFlags;
@property (readonly) _Bool isUserIdle;
@property (readonly) _Bool isOnBattery;
@property (readonly) _Bool hasValidOnBatteryAndUserIdleFlags;
@property (readonly) _Bool didInterruptKernelMode;

- (unsigned int)powerstatsFlags;
- (unsigned long long)bytesUsedInBuffer;
- (id)initWithMicrosnapshot:(const struct micro_snapshot *)arg1 withRemainingBytes:(unsigned long long)arg2;

@end
