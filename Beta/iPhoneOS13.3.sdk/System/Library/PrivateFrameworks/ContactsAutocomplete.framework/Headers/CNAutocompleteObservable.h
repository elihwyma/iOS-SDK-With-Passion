/*
 Image: /System/Library/PrivateFrameworks/ContactsAutocomplete.framework/ContactsAutocomplete
 */

#import <ContactsFoundation/CNObservable.h>

@class NSString;

@interface CNAutocompleteObservable : CNObservable

{
    NSString *_debugDescription;
    CNObservable *_observable;
}

@property (retain, nonatomic) CNObservable *observable;
@property (retain, nonatomic) NSString *debugDescription;

- (id)initWithBlock:(CDUnknownBlockType)arg1;
- (id)subscribe:(id)arg1;

@end
