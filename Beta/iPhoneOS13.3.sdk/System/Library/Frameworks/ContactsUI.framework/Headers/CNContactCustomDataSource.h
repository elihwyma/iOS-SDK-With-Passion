/*
 Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
 */

#import <Foundation/NSObject.h>

@class CNContactFilter, CNContactFormatter, CNContactStore, NSArray, NSDictionary, NSMapTable, NSMutableArray, NSString;

@protocol CNContactDataSourceDelegate;

@interface CNContactCustomDataSource : NSObject

{
    _Bool _autoUpdateContacts;
    _Bool _observingContacts;
    id <CNContactDataSourceDelegate> delegate;
    CNContactFilter *_filter;
    NSMutableArray *_allContacts;
    NSArray *_keysToFetch;
    NSMapTable *_identifiersToIndexes;
    NSArray *_filteredContacts;
    CNContactFormatter *_contactFormatterImpl;
}

@property (retain, nonatomic) NSMutableArray *allContacts;
@property (retain, nonatomic) NSArray *keysToFetch;
@property (retain, nonatomic) NSMapTable *identifiersToIndexes;
@property (retain, nonatomic) NSArray *filteredContacts;
@property (nonatomic) _Bool observingContacts;
@property (retain, nonatomic) CNContactFormatter *contactFormatterImpl;
@property (nonatomic) _Bool autoUpdateContacts;
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
@property (nonatomic, readonly) CNContactStore *store;
@property (copy, nonatomic) CNContactFilter *filter;
@property (nonatomic, readonly) CNContactFilter *effectiveFilter;
@property (retain, nonatomic) CNContactFormatter *contactFormatter;
@property (nonatomic, readonly) _Bool shouldReturnToAccountsAndGroupsViewAfterSearchIsCanceled;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)contactDidChange:(id)arg1;
- (id)initWithContacts:(id)arg1;
- (id)completeContactFromContact:(id)arg1 fromMainStoreOnly:(_Bool)arg2 keysToFetch:(id)arg3;
- (id)preferredForNameMeContactIdentifier;
- (id)indexPathForContact:(id)arg1;
- (id)initWithContacts:(id)arg1 keysToFetch:(id)arg2;
- (id)initWithContacts:(id)arg1 keysToFetch:(id)arg2 filter:(id)arg3;
- (void)_updateFilter;
- (void)_startObservingContacts;
- (void)_stopObservingContacts;
- (void)_updateContactsObserving;
- (void)_sendDataSourceDidChange;

@end
