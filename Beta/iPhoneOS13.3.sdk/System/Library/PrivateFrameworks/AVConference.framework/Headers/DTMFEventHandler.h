/*
 Image: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
 */

#import <Foundation/NSObject.h>

@class NSMutableArray;

@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface DTMFEventHandler : NSObject

{
    NSMutableArray *dtmfEventQueue;
    NSObject<OS_dispatch_queue> *dtmfQueue;
    int _currentEventState;
    _Bool currentEventNeedsEndBlock;
    unsigned long long currentEventRetransmitFinalPacketCount;
    unsigned char currentEvent;
    unsigned char currentVolume;
    unsigned int currentStartTimestamp;
    unsigned int currentDurationCounter;
    unsigned int currentEndTimestamp;
    unsigned int _currentPauseCompleteTimestamp;
}

- (id)init;
- (void)dealloc;
- (_Bool)shouldTransmitDTMFWithTimestamp:(unsigned int)arg1;
- (void)sendingDTMFEventWithTimeStamp:(unsigned int)arg1 interval:(unsigned int)arg2 RTPHandle:(struct tagHANDLE *)arg3;
- (void)sendDTMFEvent:(id)arg1 atTimestamp:(unsigned int)arg2 withSampleRate:(unsigned int)arg3;
- (void)stopDTMFEventAtTimestamp:(unsigned int)arg1 withSampleRate:(unsigned int)arg2;
- (_Bool)shouldAdjustForLastPauseCompleteTimestamp:(unsigned int *)arg1;
- (_Bool)insertStartBlockWithEvent:(unsigned char)arg1 volume:(unsigned char)arg2 timestamp:(unsigned int)arg3;
- (_Bool)insertStopBlockWithEndTimestamp:(unsigned int)arg1 withPauseCompleteTimestamp:(unsigned int)arg2;
- (int)constructDTMFEventPacketWithEvent:(unsigned char)arg1 volume:(unsigned char)arg2 durationCounter:(unsigned int)arg3 interval:(unsigned int)arg4 dataBuffer:(char *)arg5 isEnd:(_Bool)arg6;

@end
