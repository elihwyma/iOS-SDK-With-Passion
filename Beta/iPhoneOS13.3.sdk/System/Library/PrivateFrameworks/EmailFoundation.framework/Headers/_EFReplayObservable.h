/*
 Image: /System/Library/PrivateFrameworks/EmailFoundation.framework/EmailFoundation
 */

#import <EmailFoundation/EFObservable.h>

@class EFQueue, NSError, NSLock, NSMutableArray, NSString;

@interface _EFReplayObservable : EFObservable

{
    NSLock *_lock;
    _Bool _isStopped;
    NSError *_error;
    EFQueue *_queue;
    NSMutableArray *_observers;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)initWithCount:(unsigned long long)arg1;
- (void)observerDidReceiveResult:(id)arg1;
- (void)observerDidFailWithError:(id)arg1;
- (void)observerDidComplete;
- (id)subscribe:(id)arg1;
- (void)_unsubscribe:(id)arg1;

@end
