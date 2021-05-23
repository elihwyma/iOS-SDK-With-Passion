/*
 Image: /System/Library/PrivateFrameworks/ContactsAutocompleteUI.framework/ContactsAutocompleteUI
 */

#import <ContactsAutocompleteUI/CNAutocompleteSearchOperation.h>

@class CNAutocompleteFetchContext, CNAutocompleteStore, CNCancelationToken, CNPromise, NSNumber, NSString;

@interface CNContactsAutocompleteSearchOperation : CNAutocompleteSearchOperation

{
    _Bool _includeContacts;
    _Bool _includeRecents;
    _Bool _includeSuggestions;
    _Bool _includeServers;
    _Bool _shouldUnifyResults;
    _Bool _simulateResults;
    CNCancelationToken *_fetchRequestToken;
    CNPromise *_fetchRequestPromise;
    struct NSNumber *_shouldIncludeGroupResults;
    CNAutocompleteFetchContext *_fetchContext;
    CNAutocompleteStore *_autocompleteStore;
}

@property (retain, nonatomic) CNCancelationToken *fetchRequestToken;
@property (retain, nonatomic) CNPromise *fetchRequestPromise;
@property (nonatomic) _Bool includeContacts;
@property (nonatomic) _Bool includeRecents;
@property (nonatomic) _Bool includeSuggestions;
@property (nonatomic) _Bool includeServers;
@property (retain, nonatomic) NSNumber *shouldIncludeGroupResults;
@property (nonatomic) _Bool shouldUnifyResults;
@property (nonatomic) _Bool simulateResults;
@property (copy, nonatomic) CNAutocompleteFetchContext *fetchContext;
@property (retain, nonatomic) CNAutocompleteStore *autocompleteStore;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)operationWithOwner:(id)arg1 text:(id)arg2 taskID:(id)arg3 autocompleteStore:(id)arg4;

- (id)init;
- (void)cancel;
- (void)main;
- (void)autocompleteFetch:(id)arg1 didReceiveResults:(id)arg2;
- (void)autocompleteFetch:(id)arg1 didFailWithError:(id)arg2;
- (void)autocompleteFetchDidFinish:(id)arg1;
- (_Bool)autocompleteFetch:(id)arg1 shouldExpectSupplementalResultsForRequest:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)_simulatedRecipientResults;
- (void)configureForSearchTypes:(unsigned long long)arg1;
- (id)originContextForResult:(id)arg1;
- (id)unifyRecipientsIfNeccesary:(id)arg1;
- (id)unifyingIdentifierForRecipient:(id)arg1;

@end
