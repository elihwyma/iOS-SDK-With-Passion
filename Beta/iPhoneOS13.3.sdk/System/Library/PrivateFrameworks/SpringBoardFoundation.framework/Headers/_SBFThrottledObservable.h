/*
 Image: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
 */

#import <SpringBoardFoundation/SBFObservable.h>

@protocol SBFCancelable, SBFObservable, SBFScheduler;

@interface _SBFThrottledObservable : SBFObservable

{
    double _interval;
    id <SBFCancelable> _delayToken;
    id <SBFObservable> _observable;
    id <SBFScheduler> _scheduler;
    id _result;
    _Bool _hasResult;
    unsigned long long _resultCounter;
}

- (void)dealloc;
- (void)_cancel;
- (id)subscribe:(id)arg1;
- (void)_clearResult;
- (void)_setDelayToken:(id)arg1;
- (unsigned long long)_setResult:(id)arg1;
- (void)_sendResultToObserver:(id)arg1 withIdentifier:(unsigned long long)arg2;
- (void)_sendCompletionToObsever:(id)arg1;
- (id)initWithInterval:(double)arg1 observable:(id)arg2 scheduler:(id)arg3;

@end
