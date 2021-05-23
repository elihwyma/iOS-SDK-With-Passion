/*
 Image: /System/Library/PrivateFrameworks/ContactsFoundation.framework/ContactsFoundation
 */

#import <ContactsFoundation/CNObservable.h>

@protocol CNCancelable, CNObservable, CNScheduler;

@interface _CNThrottledObservable : CNObservable

{
    id <CNObservable> _observable;
    double _interval;
    unsigned long long _options;
    id <CNScheduler> _observerScheduler;
    id <CNScheduler> _resourceLock;
    id _mostRecentResult;
    id <CNCancelable> _delayToken;
    _Bool _isCoalescing;
}

@property (readonly) CNObservable *observable;
@property (readonly) double interval;
@property (readonly) unsigned long long options;
@property (readonly) id <CNScheduler> observerScheduler;
@property (readonly) id <CNScheduler> resourceLock;
@property (retain) id mostRecentResult;
@property (retain) id <CNCancelable> delayToken;
@property _Bool isCoalescing;

- (void)dealloc;
- (id)subscribe:(id)arg1;
- (id)initWithInterval:(double)arg1 options:(unsigned long long)arg2 observable:(id)arg3 schedulerProvider:(id)arg4;
- (void)observerScheduler_sendResultToObserver:(id)arg1;

@end
