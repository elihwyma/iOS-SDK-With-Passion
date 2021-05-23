/*
 Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import <AVFoundation/AVTimebaseObserver.h>

@class NSArray;

@interface AVOccasionalTimebaseObserver : AVTimebaseObserver

{
    NSArray *_times;
    CDUnknownBlockType _block;
}

- (void)dealloc;
- (void)_fireBlock;
- (id)initWithTimebase:(struct OpaqueCMTimebase *)arg1 times:(id)arg2 queue:(id)arg3 block:(CDUnknownBlockType)arg4;
- (void)_effectiveRateChanged;
- (void)_resetNextFireTime;
- (void)_handleTimeDiscontinuity;
- (CDStruct_1b6d18a9)_nextFiringTimeAfterTime:(CDStruct_1b6d18a9)arg1;
- (CDStruct_1b6d18a9)_previousFiringTimeBeforeTime:(CDStruct_1b6d18a9)arg1;

@end
