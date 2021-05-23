/*
 Image: /System/Library/PrivateFrameworks/ContactsFoundation.framework/ContactsFoundation
 */

#import <ContactsFoundation/CNObservable.h>

@protocol CNObservable;

@interface _CNOnEmptyObservable : CNObservable

{
    id <CNObservable> _observable;
    id <CNObservable> _nextObservable;
    _Bool _observableIsEmpty;
}

@property (retain, nonatomic) id <CNObservable> observable;

- (id)subscribe:(id)arg1;
- (id)initWithObservable:(id)arg1 nextObservable:(id)arg2;
- (void)observableDidSendResult;
- (_Bool)isObservableEmpty;
- (id)subscribeNextObservable:(id)arg1;

@end
