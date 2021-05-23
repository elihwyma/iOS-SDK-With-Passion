/*
 Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
 */

#import <Foundation/NSObject.h>

@class CNContact, CNContactFilter, CNContactFormatter, CNContactStore, CNContactStoreFilter, CNContactStoreSnapshot, CNManagedConfiguration, NSArray, NSDictionary, NSString;

@protocol CNContactDataSourceDelegate, CNScheduler, OS_dispatch_queue;

@interface CNContactStoreDataSource : NSObject

{
    CNContactStoreSnapshot *_currentSnapshot;
    NSDictionary *_sectionHeadersDictionary;
    NSObject<OS_dispatch_queue> *_queue;
    _Bool _loadingSnapshot;
    id <CNScheduler> _mainThreadScheduler;
    _Bool _fetchUnified;
    _Bool _meContactNeedsUpdate;
    CNContactFormatter *contactFormatter;
    id <CNContactDataSourceDelegate> delegate;
    CNContactStoreFilter *_filter;
    CNContactStore *_store;
    CNManagedConfiguration *_managedConfiguration;
    NSArray *_keysToFetch;
    CNContact *_meContact;
    NSDictionary *_localizedSectionIndices;
}

@property (copy, nonatomic) CNContact *meContact;
@property (nonatomic) _Bool meContactNeedsUpdate;
@property (retain, nonatomic) CNContactStore *store;
@property (retain, nonatomic) CNContactStoreSnapshot *currentSnapshot;
@property (nonatomic, readonly) long long sortOrder;
@property (nonatomic, readonly) NSDictionary *sectionHeadersDictionary;
@property (nonatomic, readonly) NSArray *indexSectionsArray;
@property (nonatomic, readonly) NSDictionary *localizedSectionHeaders;
@property (nonatomic, readonly) NSDictionary *localizedSectionIndices;
@property (copy, nonatomic) CNContactStoreFilter *filter;
@property (retain, nonatomic) CNManagedConfiguration *managedConfiguration;
@property (retain, nonatomic) NSArray *keysToFetch;
@property (nonatomic) _Bool fetchUnified;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) NSArray *contacts;
@property (nonatomic, readonly) NSDictionary *contactMatchInfos;
@property (nonatomic, readonly) NSArray *sections;
@property (nonatomic, readonly) NSArray *indexSections;
@property (weak, nonatomic) id <CNContactDataSourceDelegate> delegate;
@property (nonatomic, readonly) _Bool canReload;
@property (nonatomic, readonly) NSString *displayName;
@property (nonatomic, readonly) CNContactFilter *effectiveFilter;
@property (retain, nonatomic) CNContactFormatter *contactFormatter;
@property (nonatomic, readonly) _Bool shouldReturnToAccountsAndGroupsViewAfterSearchIsCanceled;

+ (_Bool)isErrorPossiblyRelatedToExtraStores:(id)arg1;
+ (id)keyPathsForValuesAffectingEffectiveFilter;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)invalidate;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)reset;
- (id)initWithStore:(id)arg1;
- (void)reload;
- (_Bool)isLoading;
- (_Bool)setMeContact:(id)arg1 error:(id *)arg2;
- (void)contactStoreDidChange:(id)arg1;
- (id)completeContactFromContact:(id)arg1 fromMainStoreOnly:(_Bool)arg2 keysToFetch:(id)arg3;
- (id)preferredForNameMeContactIdentifier;
- (id)preferredForNameMeContactWithKeysToFetch:(id)arg1;
- (id)indexPathForContact:(id)arg1;
- (void)registerForRelevantChangeNotifications;
- (void)contactStoreMeContactDidChange:(id)arg1;
- (void)reloadAsynchronously;
- (void)_reloadSynchronously:(_Bool)arg1;

@end
