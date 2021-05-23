/*
 Image: /System/Library/PrivateFrameworks/ContactsFoundation.framework/ContactsFoundation
 */

#import <Foundation/NSObject.h>

@class NSString;

@protocol CNObserver, _CNObservableTakeUntilSignalObserverDelegate;

@interface _CNObservableTakeUntilSignalObserver : NSObject

{
    id <CNObserver> _observer;
    id <_CNObservableTakeUntilSignalObserverDelegate> _delegate;
}

@property (readonly) id <CNObserver> observer;
@property (weak, readonly) id <_CNObservableTakeUntilSignalObserverDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)observerDidReceiveResult:(id)arg1;
- (void)observerDidFailWithError:(id)arg1;
- (void)observerDidComplete;
- (id)initWithObserver:(id)arg1 delegate:(id)arg2;

@end
