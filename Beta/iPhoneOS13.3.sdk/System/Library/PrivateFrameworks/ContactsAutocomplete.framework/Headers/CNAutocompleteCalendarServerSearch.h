/*
 Image: /System/Library/PrivateFrameworks/ContactsAutocomplete.framework/ContactsAutocomplete
 */

#import <Foundation/NSObject.h>

@class CNAutocompleteCalendarServerOperationFactory, CNStringTokenizer, EKEventStore, NSString;

@interface CNAutocompleteCalendarServerSearch : NSObject

{
    EKEventStore *_eventStore;
    CNAutocompleteCalendarServerOperationFactory *_operationFactory;
    CNStringTokenizer *_tokenizer;
}

@property (retain, nonatomic) CNStringTokenizer *tokenizer;
@property (nonatomic, readonly) EKEventStore *eventStore;
@property (nonatomic, readonly) CNAutocompleteCalendarServerOperationFactory *operationFactory;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (id)executeRequest:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)initWithEventStore:(id)arg1 operationFactory:(id)arg2;
- (id)executeRequest:(id)arg1 source:(id)arg2 resultsFactory:(id)arg3 withCompletionHandler:(CDUnknownBlockType)arg4;
- (id)queryForFetchRequest:(id)arg1;
- (CDUnknownBlockType)resultTransformWithFactory:(id)arg1;

@end
