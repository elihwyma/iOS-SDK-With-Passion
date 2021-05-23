/*
 Image: /System/Library/PrivateFrameworks/ContactsFoundation.framework/ContactsFoundation
 */

#import <ContactsFoundation/CNObservable.h>

@class CNCancelationToken;

@protocol CNScheduler;

@interface _CNGeneratorObservable : CNObservable

{
    id _state;
    CDUnknownBlockType _condition;
    CDUnknownBlockType _nextState;
    CDUnknownBlockType _resultSelector;
    CDUnknownBlockType _delay;
    id <CNScheduler> _scheduler;
    CNCancelationToken *_cancelable;
}

- (_Bool)isFinished;
- (_Bool)isCanceled;
- (void)updateState;
- (id)subscribe:(id)arg1;
- (id)initWithInitialState:(id)arg1 condition:(CDUnknownBlockType)arg2 nextState:(CDUnknownBlockType)arg3 resultSelector:(CDUnknownBlockType)arg4 delay:(CDUnknownBlockType)arg5 scheduler:(id)arg6;
- (void)sendResultsToObserver:(id)arg1;
- (void)scheduleNextResultForObserver:(id)arg1;
- (void)sendCurrentStateToObserver:(id)arg1;

@end
