/*
 Image: /System/Library/PrivateFrameworks/ContactsAutocomplete.framework/ContactsAutocomplete
 */

#import <ContactsAutocomplete/_CNAutocompleteResponsePreparerDecorator.h>

@interface _CNFilteringResponsePreparer : _CNAutocompleteResponsePreparerDecorator

{
    CDUnknownBlockType _filter;
}

@property (copy, readonly) CDUnknownBlockType filter;

- (id)prepareResults:(id)arg1;
- (id)initWithResponsePreparer:(id)arg1 delegate:(id)arg2 filter:(CDUnknownBlockType)arg3;

@end
