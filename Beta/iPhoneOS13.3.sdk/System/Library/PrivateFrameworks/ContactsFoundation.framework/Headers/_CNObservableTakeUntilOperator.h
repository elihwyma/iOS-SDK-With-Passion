/*
 Image: /System/Library/PrivateFrameworks/ContactsFoundation.framework/ContactsFoundation
 */

#import <ContactsFoundation/CNObservable.h>

@class NSString;

@protocol CNCancelable;

@interface _CNObservableTakeUntilOperator : CNObservable

{
    _Bool _active;
    CNObservable *_input;
    CNObservable *_signal;
    id <CNCancelable> _inputToken;
    id <CNCancelable> _signalToken;
}

@property (readonly) CNObservable *input;
@property (readonly) CNObservable *signal;
@property (getter=isActive) _Bool active;
@property (retain) id <CNCancelable> inputToken;
@property (retain) id <CNCancelable> signalToken;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)cancel;
- (id)subscribe:(id)arg1;
- (_Bool)shouldMirrorEvent:(id)arg1;
- (id)initWithInput:(id)arg1 signal:(id)arg2;
- (void)signalDidGenerateEventWithObserver:(id)arg1;

@end
