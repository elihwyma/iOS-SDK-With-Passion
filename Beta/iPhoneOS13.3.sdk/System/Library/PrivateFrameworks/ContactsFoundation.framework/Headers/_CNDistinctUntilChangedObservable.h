/*
 Image: /System/Library/PrivateFrameworks/ContactsFoundation.framework/ContactsFoundation
 */

#import <ContactsFoundation/CNObservable.h>

@protocol CNObservable;

@interface _CNDistinctUntilChangedObservable : CNObservable

{
    id <CNObservable> _observable;
    id _lastObservedResult;
}

- (id)subscribe:(id)arg1;
- (id)initWithObservable:(id)arg1;
- (_Bool)_resultIsDistinctFromLastResult:(id)arg1;

@end
