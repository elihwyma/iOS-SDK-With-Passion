/*
 Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
 */

#import <Foundation/NSObject.h>

@class CNAccountsAndGroupsItem, CNContactStore, CNContactStoreFilter, NSArray;

__attribute__((visibility("hidden")))
@interface CNAccountsAndGroupsDataSource : NSObject

{
    CNContactStoreFilter *_filter;
    CNContactStoreFilter *_serverFilter;
    _Bool _hidesSearchableSources;
    CNContactStore *_store;
    NSArray *_sections;
    CNAccountsAndGroupsItem *_rootItem;
}

@property (retain, nonatomic) CNContactStore *store;
@property (retain, nonatomic) NSArray *sections;
@property (retain, nonatomic) CNAccountsAndGroupsItem *rootItem;
@property (nonatomic) _Bool hidesSearchableSources;
@property (copy, nonatomic) CNContactStoreFilter *filter;
@property (nonatomic, readonly) CNContactStoreFilter *serverFilter;
@property (nonatomic, readonly, getter=isTrivial) _Bool trivial;

- (id)initWithStore:(id)arg1;
- (void)reload;
- (void)_reloadSections;
- (void)_applyFilter;
- (void)setServerFilterForItem:(id)arg1;
- (void)updateRootItemSelection;

@end
