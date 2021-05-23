/*
 Image: /System/Library/PrivateFrameworks/Settings/DataSourceKit.framework/DataSourceKit
 */

#import <Foundation/NSObject.h>

@class NSMutableArray;

@protocol DSKDataSourceUpdates;

@interface DSKDataSource : NSObject

{
    id <DSKDataSourceUpdates> _updateDelegate;
    NSMutableArray *__sections;
}

@property (retain, nonatomic) NSMutableArray *_sections;
@property (weak, nonatomic) id <DSKDataSourceUpdates> updateDelegate;
@property (nonatomic, readonly) long long numberOfSections;

- (id)init;
- (long long)numberOfItemsInSection:(long long)arg1;
- (void)deleteSectionAtIndex:(long long)arg1;
- (id)itemAtIndexPath:(id)arg1;
- (void)appendItems:(id)arg1;
- (void)insertItems:(id)arg1 afterItem:(id)arg2;
- (id)_dataSourceSectionAtSectionIndex:(long long)arg1;
- (void)_insertSectionWithIdentifiableObject:(id)arg1 atSectionIndex:(long long)arg2;
- (long long)_sectionIndexForSectionWithIdentifiableObject:(id)arg1;
- (void)insertSectionWithIdentifiableObject:(id)arg1 beforeSectionWithIndex:(long long)arg2;
- (id)itemForSection:(long long)arg1;
- (void)insertSectionWithIdentifiableObject:(id)arg1 afterSectionWithIndex:(long long)arg2;
- (void)reloadSectionAtIndex:(long long)arg1;
- (void)appendItems:(id)arg1 intoSectionWithIndex:(long long)arg2;
- (long long)_sectionIndexForSectionContainingIdentifiableObject:(id)arg1;
- (void)insertItems:(id)arg1 beforeItem:(id)arg2;
- (void)deleteItems:(id)arg1 fromSectionWithIndex:(long long)arg2;
- (void)appendSectionWithIdentifiableObject:(id)arg1;
- (void)insertSectionWithIdentifiableObject:(id)arg1 beforeSectionWithIdentifiableObject:(id)arg2;
- (void)insertSectionWithIdentifiableObject:(id)arg1 afterSectionWithIdentifiableObject:(id)arg2;
- (void)deleteSectionWithIdentifiableObject:(id)arg1;
- (void)reloadSectionWithIdentifiableObject:(id)arg1;
- (void)appendItems:(id)arg1 intoSectionWithIdentifiableObject:(id)arg2;
- (void)deleteItems:(id)arg1 fromSectionWithIdentifiableObject:(id)arg2;
- (void)reloadItems:(id)arg1;

@end
