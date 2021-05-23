/*
 Image: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
 */

#import <Foundation/NSObject.h>

@class TURepeatingAction;

@protocol OS_dispatch_queue;

@interface TURepeatingActor : NSObject

{
    _Bool _stopped;
    _Bool _currentlyPerformingAction;
    NSObject<OS_dispatch_queue> *_queue;
    TURepeatingAction *_currentRepeatingAction;
    TURepeatingAction *_pendingRepeatingAction;
    CDUnknownBlockType _attemptNextIterationBlock;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic, getter=isStopped) _Bool stopped;
@property (nonatomic, getter=isCurrentlyPerformingAction) _Bool currentlyPerformingAction;
@property (retain, nonatomic) TURepeatingAction *currentRepeatingAction;
@property (retain, nonatomic) TURepeatingAction *pendingRepeatingAction;
@property (copy, nonatomic) CDUnknownBlockType attemptNextIterationBlock;
@property (nonatomic, readonly, getter=isRunning) _Bool running;

- (id)init;
- (void)stop;
- (void)beginRepeatingAction:(CDUnknownBlockType)arg1 iterations:(unsigned long long)arg2 pauseDurationBetweenIterations:(double)arg3 completion:(CDUnknownBlockType)arg4;
- (void)_beginRepeatingAction:(id)arg1;
- (void)_stopWithDidFinish:(_Bool)arg1;
- (void)_attemptNextIteration;
- (_Bool)_hasIterationsRemaining;
- (void)_completeWithDidFinish:(_Bool)arg1;
- (void)beginRepeatingAction:(CDUnknownBlockType)arg1 iterations:(unsigned long long)arg2 completion:(CDUnknownBlockType)arg3;

@end
