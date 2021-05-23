/*
 Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
 */

#import <Foundation/NSObject.h>

@class CNContactDataSourceLIFOScheduler, CNContactMatchSummarizer, CNContactStoreDataSource, CNContactStoreFilter, CNManagedConfiguration, NSArray, NSMapTable, NSMutableArray, NSMutableAttributedString, NSMutableDictionary, NSPointerArray;

@protocol OS_dispatch_semaphore;

__attribute__((visibility("hidden")))
@interface CNContactStoreSnapshot : NSObject

{
    unsigned long long _contactsCount;
    NSMapTable *_contactsCache;
    NSObject<OS_dispatch_semaphore> *_cacheAccessSemaphore;
    struct _NSRange _currentlyLoadingBackgroundRange;
    NSArray *_sections;
    NSArray *_indexSections;
    CNContactMatchSummarizer *_summarizer;
    NSMutableAttributedString *_emptyExcerptInstanceMarker;
    unsigned long long _lastRequestedIndex;
    CNContactStoreDataSource *_dataSource;
    CNContactStoreFilter *_filter;
    CNManagedConfiguration *_managedConfiguration;
    NSMutableDictionary *_contactMatchInfos;
    CNContactDataSourceLIFOScheduler *_summarizationQueue;
    NSPointerArray *_summarizationFutures;
    NSMapTable *_identifiersToIndexPath;
    NSMutableArray *_batchContactIdentifiers;
}

@property (weak, nonatomic) CNContactStoreDataSource *dataSource;
@property (retain, nonatomic) CNContactStoreFilter *filter;
@property (retain, nonatomic) CNManagedConfiguration *managedConfiguration;
@property (nonatomic, readonly) NSArray *contacts;
@property (nonatomic, readonly) NSMutableDictionary *contactMatchInfos;
@property (nonatomic, readonly) CNContactDataSourceLIFOScheduler *summarizationQueue;
@property (nonatomic, readonly) NSPointerArray *summarizationFutures;
@property (nonatomic, readonly) NSArray *sections;
@property (nonatomic, readonly) NSArray *indexSections;
@property (nonatomic, readonly) NSMapTable *identifiersToIndexPath;
@property (nonatomic, readonly) NSMutableArray *batchContactIdentifiers;

- (id)init;
- (void)dealloc;
- (id)_keysToFetch;
- (unsigned long long)countOf_contacts;
- (id)objectIn_contactsAtIndex:(unsigned long long)arg1;
- (void)_loadContactsInRange:(struct _NSRange)arg1 inBackground:(_Bool)arg2;
- (void)_generateExcerptsInRange:(struct _NSRange)arg1;
- (void)_loadAllContacts;
- (void)prepareEnoughContacts;
- (void)prepareAllContacts;

@end
