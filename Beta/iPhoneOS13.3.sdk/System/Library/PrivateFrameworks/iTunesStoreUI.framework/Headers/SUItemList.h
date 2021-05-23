/*
 Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

#import <Foundation/NSObject.h>

@class NSArray, NSDictionary, NSMutableArray;

@interface SUItemList : NSObject

{
    NSMutableArray *_groups;
    NSDictionary *_hintText;
    _Bool _ignoresEmptySections;
}

@property (nonatomic, readonly) long long numberOfItems;
@property (nonatomic) _Bool ignoresEmptySections;
@property (nonatomic, readonly) long long numberOfSections;
@property (nonatomic, readonly) NSArray *sectionIndexTitles;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)setItems:(id)arg1;
- (void)enumerateItemsUsingBlock:(CDUnknownBlockType)arg1;
- (id)itemAtIndexPath:(id)arg1;
- (void)removeItemAtIndexPath:(id)arg1;
- (id)copyItems;
- (void)setItemsFromPropertyList:(id)arg1;
- (void)setHintText:(id)arg1;
- (long long)sectionIndexForIndexTitle:(id)arg1 atIndex:(long long)arg2;
- (id)indexPathOfItemWithIdentifier:(unsigned long long)arg1;
- (id)indexPathOfItem:(id)arg1;
- (void)replaceItemAtIndexPath:(id)arg1 withItems:(id)arg2;
- (id)itemsForSectionAtIndex:(long long)arg1;
- (id)sectionItemForSectionAtIndex:(long long)arg1;
- (id)_groupAtExternalIndex:(long long)arg1;
- (void)insertItems:(id)arg1 atIndexPath:(id)arg2;
- (void)_removeHiddenItemsFromArray:(id)arg1;
- (id)hintTextForKey:(id)arg1;

@end
