/*
 Image: /System/Library/PrivateFrameworks/EmailFoundation.framework/EmailFoundation
 */

#import <EmailFoundation/EFObservable.h>

@class EFCancelationToken, NSLock, NSString;

@protocol EFObservable, EFObservable><EFObserver;

@interface _EFConnectableObservable : EFObservable

{
    id <EFObservable> _observable;
    id <EFObservable><EFObserver> _subject;
    NSLock *_lock;
    EFCancelationToken *_cancelable;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)_disconnect;
- (id)connect;
- (id)subscribe:(id)arg1;
- (id)initWithObservable:(id)arg1 subject:(id)arg2;

@end
