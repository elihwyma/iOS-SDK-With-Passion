/*
 Image: /System/Library/PrivateFrameworks/EmailFoundation.framework/EmailFoundation
 */

#import <EmailFoundation/EFObservable.h>

@class NSError, NSMutableArray, NSString;

@interface _EFManualObservable : EFObservable

{
    NSMutableArray *_observers;
    NSError *_failureError;
    struct os_unfair_lock_s _lock;
    _Bool _didCompleteOrFail;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)_removeObserver:(id)arg1;
- (void)observerDidReceiveResult:(id)arg1;
- (void)observerDidFailWithError:(id)arg1;
- (void)observerDidComplete;
- (id)subscribe:(id)arg1;
- (_Bool)_addObserver:(id)arg1 failureError:(id *)arg2;

@end
