/*
 Image: /System/Library/PrivateFrameworks/ContactsAutocomplete.framework/ContactsAutocomplete
 */

#import <Foundation/NSObject.h>

@class CNAutocompleteFetchRequest, CNContactStore, NSString;

@protocol CNAutocompleteLocalQueryDelegate;

@interface CNAutocompleteLocalQuery : NSObject

{
    CNAutocompleteFetchRequest *_request;
    CNContactStore *_contactStore;
    CNContactStore *_contactFetcherStore;
    id <CNAutocompleteLocalQueryDelegate> _delegate;
}

@property (retain) CNAutocompleteFetchRequest *request;
@property (retain) CNContactStore *contactStore;
@property (retain) CNContactStore *contactFetcherStore;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)queryWithDelegate:(id)arg1;
+ (id)peopleQuery;
+ (id)groupsQuery;

- (id)run;
- (void)cancel;
- (id)fetchResults;
- (id)searchableProperties;
- (id)makeResultFactory;
- (id)autocompleteResultsForFetchResults:(id)arg1 resultFactory:(id)arg2;

@end
