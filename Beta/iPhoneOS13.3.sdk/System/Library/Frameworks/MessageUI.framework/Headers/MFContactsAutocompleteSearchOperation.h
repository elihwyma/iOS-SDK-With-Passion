/*
 Image: /System/Library/Frameworks/MessageUI.framework/MessageUI
 */

#import <MessageUI/MFContactsSearchOperation.h>

@class CNAutocompleteFetchContext, CNAutocompleteStore, EFCancelationToken, EFPromise, NSString;

@interface MFContactsAutocompleteSearchOperation : MFContactsSearchOperation

{
    EFCancelationToken *_fetchRequestToken;
    EFPromise *_fetchRequestPromise;
    _Bool _includeContacts;
    _Bool _includeRecents;
    _Bool _includeSuggestions;
    _Bool _includeServers;
    _Bool _simulateResults;
    CNAutocompleteFetchContext *_fetchContext;
    CNAutocompleteStore *_autocompleteStore;
}

@property (nonatomic) _Bool includeContacts;
@property (nonatomic) _Bool includeRecents;
@property (nonatomic) _Bool includeSuggestions;
@property (nonatomic) _Bool includeServers;
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
- (id)_simulatedRecipientResults;
- (void)configureForSearchTypes:(unsigned long long)arg1;

@end
