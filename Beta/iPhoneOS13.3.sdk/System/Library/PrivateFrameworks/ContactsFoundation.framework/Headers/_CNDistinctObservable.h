/*
 Image: /System/Library/PrivateFrameworks/ContactsFoundation.framework/ContactsFoundation
 */

#import <ContactsFoundation/CNObservable.h>

@class NSMutableSet;

@protocol CNObservable;

@interface _CNDistinctObservable : CNObservable

{
    id <CNObservable> _observable;
    NSMutableSet *_previouslyObservedResults;
}

- (id)subscribe:(id)arg1;
- (_Bool)_resultIsDistinct:(id)arg1;
- (id)initWithObservable:(id)arg1;

@end
