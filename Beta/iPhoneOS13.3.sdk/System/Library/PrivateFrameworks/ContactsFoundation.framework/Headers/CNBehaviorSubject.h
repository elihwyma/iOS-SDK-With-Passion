/*
 Image: /System/Library/PrivateFrameworks/ContactsFoundation.framework/ContactsFoundation
 */

#import <ContactsFoundation/CNObservable.h>

@class CNObservableContractEnforcement, CNObservableEvent, NSMutableArray, NSString;

@protocol CNScheduler, CNSchedulerProvider;

@interface CNBehaviorSubject : CNObservable

{
    NSMutableArray *_observers;
    CNObservableEvent *_mostRecentEvent;
    id <CNSchedulerProvider> _schedulerProvider;
    id <CNScheduler> _resourceLock;
    CNObservableContractEnforcement *_enforcement;
}

@property (retain, nonatomic) NSMutableArray *observers;
@property (retain, nonatomic) CNObservableEvent *mostRecentEvent;
@property (nonatomic, readonly) id <CNSchedulerProvider> schedulerProvider;
@property (nonatomic, readonly) id <CNScheduler> resourceLock;
@property (nonatomic, readonly) CNObservableContractEnforcement *enforcement;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)_removeObserver:(id)arg1;
- (id)_addObserver:(id)arg1;
- (void)observerDidReceiveResult:(id)arg1;
- (void)observerDidFailWithError:(id)arg1;
- (void)observerDidComplete;
- (id)subscribe:(id)arg1;
- (void)performWithResourceLock:(CDUnknownBlockType)arg1;
- (id)resultWithResourceLock:(CDUnknownBlockType)arg1;
- (id)initWithSeed:(id)arg1 schedulerProvider:(id)arg2;

@end
