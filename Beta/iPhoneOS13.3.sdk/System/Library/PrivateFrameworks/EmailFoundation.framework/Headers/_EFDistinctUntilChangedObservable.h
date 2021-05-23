/*
 Image: /System/Library/PrivateFrameworks/EmailFoundation.framework/EmailFoundation
 */

#import <EmailFoundation/EFObservable.h>

@class NSLock;

@protocol EFObservable;

@interface _EFDistinctUntilChangedObservable : EFObservable

{
    id <EFObservable> _observable;
    id _lastObservedResult;
    NSLock *_lock;
}

- (id)subscribe:(id)arg1;
- (id)initWithObservable:(id)arg1;
- (_Bool)_isLastResultDistinctFromResult:(id)arg1;

@end
