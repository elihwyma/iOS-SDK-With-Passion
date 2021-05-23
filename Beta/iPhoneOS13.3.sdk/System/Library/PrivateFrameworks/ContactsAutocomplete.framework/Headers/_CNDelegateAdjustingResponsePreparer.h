/*
 Image: /System/Library/PrivateFrameworks/ContactsAutocomplete.framework/ContactsAutocomplete
 */

#import <ContactsAutocomplete/_CNAutocompleteResponsePreparerDecorator.h>

@interface _CNDelegateAdjustingResponsePreparer : _CNAutocompleteResponsePreparerDecorator

- (id)prepareResults:(id)arg1;
- (void)adjustArray:(id)arg1 byRemovingResults:(id)arg2;
- (void)adjustArray:(id)arg1 byAddingResults:(id)arg2;

@end
