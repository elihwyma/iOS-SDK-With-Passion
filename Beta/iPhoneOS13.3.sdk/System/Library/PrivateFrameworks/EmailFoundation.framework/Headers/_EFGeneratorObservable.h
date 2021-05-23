/*
 Image: /System/Library/PrivateFrameworks/EmailFoundation.framework/EmailFoundation
 */

#import <EmailFoundation/EFObservable.h>

@class EFCancelationToken;

@protocol EFScheduler;

@interface _EFGeneratorObservable : EFObservable

{
    id <EFScheduler> _scheduler;
    EFCancelationToken *_cancelable;
    id _state;
    CDUnknownBlockType _condition;
    CDUnknownBlockType _nextStateForState;
    CDUnknownBlockType _resultFromState;
    CDUnknownBlockType _delayForState;
}

- (_Bool)_isFinished;
- (void)_updateState;
- (id)subscribe:(id)arg1;
- (id)initWithInitialState:(id)arg1 condition:(CDUnknownBlockType)arg2 nextState:(CDUnknownBlockType)arg3 resultSelector:(CDUnknownBlockType)arg4 delay:(CDUnknownBlockType)arg5 scheduler:(id)arg6;
- (void)_scheduleNextResultForObserver:(id)arg1;

@end
