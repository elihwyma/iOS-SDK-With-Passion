/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

#import <UIKitCore/Swift-Protocol.h>

@class NSArray, __UIDiffableDataSourceSnapshot;

@interface NSDiffableDataSourceSnapshot : NSObject <Swift>

{
    __UIDiffableDataSourceSnapshot *_impl;
}

@property (nonatomic, readonly) __UIDiffableDataSourceSnapshot *impl;
@property (nonatomic, readonly) long long numberOfItems;
@property (nonatomic, readonly) long long numberOfSections;
@property (nonatomic, readonly) NSArray *sectionIdentifiers;
@property (nonatomic, readonly) NSArray *itemIdentifiers;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithDataSource:(id)arg1;
- (long long)numberOfItemsInSection:(id)arg1;
- (id)itemIdentifiersInSectionWithIdentifier:(id)arg1;
- (id)sectionIdentifierForSectionContainingItemIdentifier:(id)arg1;
- (long long)indexOfItemIdentifier:(id)arg1;
- (long long)indexOfSectionIdentifier:(id)arg1;
- (void)appendItemsWithIdentifiers:(id)arg1;
- (void)appendItemsWithIdentifiers:(id)arg1 intoSectionWithIdentifier:(id)arg2;
- (void)insertItemsWithIdentifiers:(id)arg1 beforeItemWithIdentifier:(id)arg2;
- (void)insertItemsWithIdentifiers:(id)arg1 afterItemWithIdentifier:(id)arg2;
- (void)deleteItemsWithIdentifiers:(id)arg1;
- (void)deleteAllItems;
- (void)moveItemWithIdentifier:(id)arg1 beforeItemWithIdentifier:(id)arg2;
- (void)moveItemWithIdentifier:(id)arg1 afterItemWithIdentifier:(id)arg2;
- (void)reloadItemsWithIdentifiers:(id)arg1;
- (void)appendSectionsWithIdentifiers:(id)arg1;
- (void)insertSectionsWithIdentifiers:(id)arg1 beforeSectionWithIdentifier:(id)arg2;
- (void)insertSectionsWithIdentifiers:(id)arg1 afterSectionWithIdentifier:(id)arg2;
- (void)deleteSectionsWithIdentifiers:(id)arg1;
- (void)moveSectionWithIdentifier:(id)arg1 beforeSectionWithIdentifier:(id)arg2;
- (void)moveSectionWithIdentifier:(id)arg1 afterSectionWithIdentifier:(id)arg2;
- (void)reloadSectionsWithIdentifiers:(id)arg1;

@end
