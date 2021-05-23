/*
 Image: /System/Library/PrivateFrameworks/ContactsAutocompleteUI.framework/ContactsAutocompleteUI
 */

#import <Foundation/NSObject.h>

@class CNAutocompleteStore, NSArray, NSMutableArray, NSMutableDictionary, NSOperationQueue, NSString;

@protocol CNAutocompleteUIFetchDelegate;

@interface CNAutocompleteSearchManager : NSObject

{
    NSMutableDictionary *_taskContextsByTaskID;
    CNAutocompleteStore *_autocompleteStore;
    NSOperationQueue *_queue;
    unsigned int _genNumber;
    unsigned long long _searchTypes;
    NSArray *_explicitSearchAccountIDs;
    NSArray *_searchAccounts;
    int _contactSearchAccountChangedToken;
    _Bool _registeredForAddressBookChanges;
    struct NSNumber *_shouldIncludeGroupResultsImpl;
    NSMutableArray *_corecipientSearchTaskIDs;
    NSString *_sendingAddress;
    _Bool _includeUpcomingEventMembers;
    _Bool _shouldUnifyResults;
    _Bool _simulatedResultsEnabled;
    NSString *_recentsBundleIdentifier;
    id <CNAutocompleteUIFetchDelegate> _fetchDelegate;
    unsigned long long _implicitGroupCreationThreshold;
    unsigned long long _autocompleteSearchType;
    NSString *_sendingAccountIdentifier;
}

@property (nonatomic, readonly) NSArray *searchAccounts;
@property (weak) id <CNAutocompleteUIFetchDelegate> fetchDelegate;
@property (retain) NSArray *searchAccountIDs;
@property (copy, nonatomic) NSString *recentsBundleIdentifier;
@property (nonatomic) unsigned long long implicitGroupCreationThreshold;
@property (nonatomic) _Bool includeUpcomingEventMembers;
@property (nonatomic) unsigned long long autocompleteSearchType;
@property (copy, nonatomic) NSString *sendingAccountIdentifier;
@property (copy, nonatomic) NSString *sendingAddress;
@property (nonatomic) _Bool shouldIncludeGroupResults;
@property (nonatomic) _Bool shouldUnifyResults;
@property (nonatomic, getter=isSimulatedResultsEnabled) _Bool simulatedResultsEnabled;

- (id)init;
- (void)dealloc;
- (void)cancelTaskWithID:(id)arg1;
- (id)initWithAutocompleteSearchType:(unsigned long long)arg1;
- (void)setSearchTypes:(unsigned long long)arg1;
- (id)searchForText:(id)arg1 withAutocompleteFetchContext:(id)arg2 consumer:(id)arg3;
- (id)searchForCorecipientsWithAutocompleteFetchContext:(id)arg1 consumer:(id)arg2;
- (void)didSelectRecipient:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)removeRecipientResult:(id)arg1;
- (void)_handleContactsAutocompleteSearch:(id)arg1 returnedResults:(id)arg2 taskID:(id)arg3;
- (void)_handleContactsAutocompleteSearchFinished:(id)arg1 taskID:(id)arg2;
- (id)initWithAutocompleteStore:(id)arg1 searchType:(unsigned long long)arg2;
- (id)_nextTaskID;
- (void)_handleTaskFinished:(id)arg1 context:(id)arg2;
- (id)searchForText:(id)arg1 consumer:(id)arg2;

@end
