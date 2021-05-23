/*
 Image: /System/Library/PrivateFrameworks/TinCanShared.framework/TinCanShared
 */

#import <Foundation/NSObject.h>

@class CNCoalescingTimer, CNContactStore, IDSBatchIDQueryController, NPSManager, NSArray, NSHashTable, NSMutableDictionary, NSString, NSTimer, NSUserDefaults, TCSContacts;

@protocol OS_dispatch_queue;

@interface TCSSuggestions : NSObject

{
    int _firstUnlockToken;
    int _npsInitialSyncToken;
    NSObject<OS_dispatch_queue> *_generationQueue;
    NSObject<OS_dispatch_queue> *_coreRecentsQueue;
    NSHashTable *_observers;
    NPSManager *_npsManager;
    CNCoalescingTimer *_suggestionsSaveTimer;
    NSTimer *_suggestionGenerationTimer;
    IDSBatchIDQueryController *_queryController;
    NSMutableDictionary *_suggestedDestinationToStatus;
    _Bool _generationTimerEnabled;
    _Bool _shouldObserveSuggestionsDefaultChanges;
    CNContactStore *_contactStore;
    TCSContacts *_contacts;
    NSUserDefaults *_defaults;
    NSMutableDictionary *_suggestions;
    NSArray *_suggestedDestinations;
}

@property (retain, nonatomic) CNContactStore *contactStore;
@property (retain, nonatomic) TCSContacts *contacts;
@property (retain, nonatomic) NSUserDefaults *defaults;
@property (nonatomic) _Bool shouldObserveSuggestionsDefaultChanges;
@property (retain, nonatomic) NSMutableDictionary *suggestions;
@property (retain, nonatomic) NSArray *suggestedDestinations;
@property (nonatomic) _Bool generationTimerEnabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)_descriptorForRequiredKeys;

- (void)dealloc;
- (void)_invalidate;
- (void)addObserver:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)removeObserver:(id)arg1;
- (void)batchQueryController:(id)arg1 updatedDestinationsStatus:(id)arg2 onService:(id)arg3 error:(id)arg4;
- (void)_deviceDidPair:(id)arg1;
- (void)_saveSuggestions;
- (void)_handleDeviceFirstUnlock;
- (_Bool)_shouldGenerateNewSuggestions;
- (void)_generateNewSuggestions;
- (id)_performHousekeepingOnSuggestions:(id)arg1;
- (void)generateNewSuggestionsIfNecessary;
- (void)_stopGenerationTimer;
- (void)_addSuggestedDestination:(id)arg1 withTimestamp:(id)arg2;
- (void)_notifyObserversSuggestionsChanged;
- (void)_startGenerationTimerWithFireDate:(id)arg1;
- (id)_destinationsFromFavorites;
- (id)_destinationsFromCallHistory;
- (id)_destinationsFromCoreRecents;
- (void)_updateGenerationTimestamps;
- (void)_performIDQueryForSuggestions:(id)arg1;
- (void)_syncSuggestions;
- (void)destinationsDidChange:(id)arg1;
- (id)initWithContactStore:(id)arg1 contacts:(id)arg2;
- (void)_deleteSuggestions;

@end
