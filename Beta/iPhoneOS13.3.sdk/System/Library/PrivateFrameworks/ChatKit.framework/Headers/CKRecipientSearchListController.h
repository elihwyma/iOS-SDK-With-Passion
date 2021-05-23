/*
 Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

#import <ContactsAutocompleteUI/CNAutocompleteResultsTableViewController.h>

@class CKContactsSearchManager, IDSBatchIDQueryController, IMAccount, NSArray, NSDate, NSString;

@protocol CKRecipientSearchListControllerDelegate;

@interface CKRecipientSearchListController : CNAutocompleteResultsTableViewController

{
    _Bool shouldHideGroupsDonations;
    _Bool _smsEnabled;
    NSArray *_enteredRecipients;
    NSArray *_prefilteredRecipients;
    IMAccount *_defaultiMessageAccount;
    IDSBatchIDQueryController *_statusQueryController;
    CKContactsSearchManager *_searchManager;
    NSArray *_searchResults;
    NSDate *_idsQueryStartTime;
    NSArray *_conversationCache;
}

@property (retain, nonatomic) CKContactsSearchManager *searchManager;
@property (copy, nonatomic) NSArray *searchResults;
@property (retain, nonatomic) NSDate *idsQueryStartTime;
@property (copy, nonatomic) NSArray *conversationCache;
@property (weak, nonatomic) id <CKRecipientSearchListControllerDelegate> delegate;
@property (retain, nonatomic) NSArray *enteredRecipients;
@property (retain, nonatomic) NSArray *prefilteredRecipients;
@property (nonatomic) _Bool smsEnabled;
@property (nonatomic) _Bool suppressGroupSuggestions;
@property (retain, nonatomic) IMAccount *defaultiMessageAccount;
@property (retain, nonatomic) IDSBatchIDQueryController *statusQueryController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic) _Bool shouldHideGroupsDonations;

- (void)dealloc;
- (void)loadView;
- (id)initWithStyle:(long long)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (_Bool)scrollViewShouldScrollToTop:(id)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (_Bool)_canShowWhileLocked;
- (void)viewDidAppear:(_Bool)arg1;
- (void)removeRecipient:(id)arg1;
- (void)batchQueryController:(id)arg1 updatedDestinationsStatus:(id)arg2 onService:(id)arg3 error:(id)arg4;
- (void)cancelSearch;
- (void)searchWithText:(id)arg1;
- (void)didSelectRecipient:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)viewDidAppearDeferredSetup;
- (void)chatStateChanged:(id)arg1;
- (_Bool)isSearchResultsHidden;
- (id)_statusQueryController;
- (id)_conversationList;
- (void)contactsSearchManager:(id)arg1 finishedSearchingWithResults:(id)arg2;
- (id)conversationCacheForContactsSearchManager:(id)arg1;
- (_Bool)hasSearchResults;
- (void)invalidateOutstandingIDStatusRequests;
- (void)invalidateSearchManager;
- (BOOL)_serviceColorForRecipients:(id)arg1;
- (long long)idsStatusForAddress:(id)arg1;

@end
