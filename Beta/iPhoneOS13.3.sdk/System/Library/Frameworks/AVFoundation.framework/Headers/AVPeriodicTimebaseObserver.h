/*
 Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import <AVFoundation/AVTimebaseObserver.h>

@interface AVPeriodicTimebaseObserver : AVTimebaseObserver

{
    CDStruct_1b6d18a9 _intervalRequested;
    CDStruct_1b6d18a9 _lastIntervalUsed;
    CDStruct_1b6d18a9 _lastPeriodicFireTime;
    CDStruct_1b6d18a9 _lastNonperiodicFireTime;
    CDStruct_1b6d18a9 _lastStopTime;
    unsigned int _sequenceNum;
    CDUnknownBlockType _block;
}

- (void)dealloc;
- (id)initWithTimebase:(struct OpaqueCMTimebase *)arg1 interval:(CDStruct_1b6d18a9)arg2 queue:(id)arg3 block:(CDUnknownBlockType)arg4;
- (void)_effectiveRateChanged;
- (void)_resetNextFireTime;
- (void)_handleTimeDiscontinuity;
- (void)_fireBlockForTime:(CDStruct_1b6d18a9)arg1;

@end
