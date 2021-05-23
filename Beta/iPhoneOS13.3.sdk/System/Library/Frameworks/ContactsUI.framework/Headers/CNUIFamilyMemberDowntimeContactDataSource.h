/*
 Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
 */

#import <Foundation/NSObject.h>

@class CNContact, CNContactStore, NSArray, NSMutableArray, NSString;

__attribute__((visibility("hidden")))
@interface CNUIFamilyMemberDowntimeContactDataSource : NSObject

{
    _Bool _meContactNeedsUpdate;
    NSString *_filterString;
    CNContactStore *_store;
    CNContact *_meContact;
    NSArray *_familyMembers;
    NSArray *_filteredSections;
    NSArray *_sections;
    NSMutableArray *_selectedContactItems;
    NSArray *_requiredKeys;
}

@property (retain, nonatomic) CNContactStore *store;
@property (nonatomic) _Bool meContactNeedsUpdate;
@property (retain, nonatomic) CNContact *meContact;
@property (retain, nonatomic) NSArray *familyMembers;
@property (retain, nonatomic) NSArray *filteredSections;
@property (retain, nonatomic) NSArray *sections;
@property (retain, nonatomic) NSMutableArray *selectedContactItems;
@property (nonatomic, readonly) NSArray *requiredKeys;
@property (copy, nonatomic) NSString *filterString;

+ (_Bool)isErrorPossiblyRelatedToExtraStores:(id)arg1;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (long long)numberOfSections;
- (long long)numberOfRowsInSection:(long long)arg1;
- (long long)sortOrder;
- (id)initWithStore:(id)arg1 familyMembers:(id)arg2 requiredKeys:(id)arg3;
- (id)titleForSection:(long long)arg1;
- (id)contactItemForIndexPath:(id)arg1;
- (id)selectedContacts;
- (void)setContactItemSelected:(_Bool)arg1 forIndexPath:(id)arg2;
- (void)filterSectionsForString:(id)arg1;
- (void)_loadAllContactsIfNeeded;
- (void)postProcessForFamilyMembersWithContacts:(id)arg1;
- (id)labelForFamilyMember:(id)arg1;
- (id)completeContactFromContact:(id)arg1 fromMainStoreOnly:(_Bool)arg2 keysToFetch:(id)arg3;
- (id)preferredForNameMeContactIdentifier;
- (id)preferredForNameMeContactWithKeysToFetch:(id)arg1;

@end
