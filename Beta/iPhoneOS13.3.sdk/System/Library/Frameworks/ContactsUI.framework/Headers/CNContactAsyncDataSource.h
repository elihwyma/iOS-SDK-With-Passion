/*
 Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
 */

#import <Foundation/NSObject.h>

@class CNContactDataSourceSafeDelegate, CNContactFilter, CNContactFormatter, CNContactStore, CNContactStoreFilter, CNPublishingSubject, NSArray, NSDictionary, NSMutableArray, NSString;

@protocol CNCancelable, CNContactDataSourceDelegate, CNSchedulerProvider;

__attribute__((visibility("hidden")))
@interface CNContactAsyncDataSource : NSObject

{
    CNContactDataSourceSafeDelegate *_delegate;
    CNContactFormatter *_contactFormatter;
    CNContactStore *_store;
    CNContactStoreFilter *_filter;
    NSArray *_allKeysToFetchForTransientContacts;
    id <CNCancelable> _searchCancelationToken;
    id <CNSchedulerProvider> _reloadSchedulerProvider;
    CNPublishingSubject *_reloadStream;
    NSMutableArray *_resultingContacts;
}

@property (retain, nonatomic) CNContactStore *store;
@property (retain, nonatomic) id <CNCancelable> searchCancelationToken;
@property (retain, nonatomic) id <CNSchedulerProvider> reloadSchedulerProvider;
@property (retain, nonatomic) CNPublishingSubject *reloadStream;
@property (retain, nonatomic) NSMutableArray *resultingContacts;
@property (copy, nonatomic) CNContactStoreFilter *filter;
@property (retain, nonatomic) NSArray *allKeysToFetchForTransientContacts;
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

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)invalidate;
- (id)initWithStore:(id)arg1;
- (void)reload;
- (void)setNetworkActivityIndicatorVisible:(_Bool)arg1;
- (id)completeContactFromContact:(id)arg1 fromMainStoreOnly:(_Bool)arg2 keysToFetch:(id)arg3;
- (id)preferredForNameMeContactIdentifier;
- (id)indexPathForContact:(id)arg1;
- (void)reloadWithRequest:(id)arg1;
- (void)invalidateResults;
- (void)invalidateSearch;

@end
