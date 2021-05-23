/*
 Image: /System/Library/PrivateFrameworks/ContactsFoundation.framework/ContactsFoundation
 */

#import <Foundation/NSObject.h>

@class NSString;

@protocol CNObserver, _CNAmbObserverDelegate;

@interface _CNAmbObserver : NSObject

{
    id <CNObserver> _observer;
    id <_CNAmbObserverDelegate> _delegate;
    _Bool _isWinner;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)observerDidReceiveResult:(id)arg1;
- (void)observerDidFailWithError:(id)arg1;
- (void)observerDidComplete;
- (id)initWithObserver:(id)arg1 delegate:(id)arg2;
- (void)declareWinner;

@end
