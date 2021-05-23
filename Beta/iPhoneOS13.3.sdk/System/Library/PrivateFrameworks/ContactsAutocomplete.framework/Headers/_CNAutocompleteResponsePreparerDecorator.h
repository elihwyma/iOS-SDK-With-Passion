/*
 Image: /System/Library/PrivateFrameworks/ContactsAutocomplete.framework/ContactsAutocomplete
 */

#import <ContactsAutocomplete/CNAutocompleteQueryResponsePreparer.h>

@interface _CNAutocompleteResponsePreparerDecorator : CNAutocompleteQueryResponsePreparer

{
    CNAutocompleteQueryResponsePreparer *_preparer;
}

@property (readonly) CNAutocompleteQueryResponsePreparer *preparer;

- (id)prepareResults:(id)arg1;
- (void)setPriorityResultsFuture:(id)arg1;
- (void)setMatchingPriorityResultsPromise:(id)arg1;
- (id)initWithResponsePreparer:(id)arg1 delegate:(id)arg2;

@end
