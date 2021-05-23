/*
 Image: /System/Library/PrivateFrameworks/ContactsAutocomplete.framework/ContactsAutocomplete
 */

#import <ContactsAutocomplete/_CNAutocompleteResponsePreparerDecorator.h>

@protocol CNFuture;

@interface _CNDiagnosticResponsePreparer : _CNAutocompleteResponsePreparerDecorator

{
    id <CNFuture> _logFuture;
}

@property (readonly) id <CNFuture> logFuture;

- (id)prepareResults:(id)arg1;
- (id)initWithResponsePreparer:(id)arg1 delegate:(id)arg2 log:(CDUnknownBlockType)arg3;

@end
