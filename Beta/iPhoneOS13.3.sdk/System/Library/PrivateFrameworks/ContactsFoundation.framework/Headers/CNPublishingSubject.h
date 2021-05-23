/*
 Image: /System/Library/PrivateFrameworks/ContactsFoundation.framework/ContactsFoundation
 */

#import <ContactsFoundation/CNObservable.h>

@class CNObservableContractEnforcement, NSMutableArray, NSString;

@protocol CNCancelable;

@interface CNPublishingSubject : CNObservable

{
    CNObservable *_observable;
    id <CNCancelable> _upstreamToken;
    NSMutableArray *_observers;
    CNObservableContractEnforcement *_enforcement;
}

@property (nonatomic, readonly) CNObservable *observable;
@property (retain, nonatomic) id <CNCancelable> upstreamToken;
@property (nonatomic, readonly) NSMutableArray *observers;
@property (nonatomic, readonly) CNObservableContractEnforcement *enforcement;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)_removeObserver:(id)arg1;
- (void)_addObserver:(id)arg1;
- (void)observerDidReceiveResult:(id)arg1;
- (void)observerDidFailWithError:(id)arg1;
- (void)observerDidComplete;
- (id)subscribe:(id)arg1;
- (id)initWithObservable:(id)arg1;
- (void)_subscribeToObservableIfNecessary;
- (id)_allObservers;

@end
