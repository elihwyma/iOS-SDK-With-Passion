/*
 Image: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
 */

#import <Foundation/NSObject.h>

@class GKGridLayoutMetrics, GKSectionMetrics, NSHashTable, NSMutableDictionary, NSString;

@protocol GKCollectionViewDataSourceDelegate;

@interface GKCollectionViewDataSource : NSObject

{
    id <GKCollectionViewDataSourceDelegate> _delegate;
    NSMutableDictionary *_kindsToFactories;
    NSHashTable *_listeners;
    NSMutableDictionary *_sectionsToMetrics;
    NSMutableDictionary *_sectionsToSearchKeys;
    GKGridLayoutMetrics *_dataSourceMetricsInternal;
    GKSectionMetrics *_defaultSectionMetricsInternal;
    NSString *_defaultSearchKey;
}

@property (retain, nonatomic) NSMutableDictionary *kindsToFactories;
@property (retain, nonatomic) NSHashTable *listeners;
@property (retain, nonatomic) NSMutableDictionary *sectionsToMetrics;
@property (retain, nonatomic) NSMutableDictionary *sectionsToSearchKeys;
@property (nonatomic) id <GKCollectionViewDataSourceDelegate> delegate;
@property (retain, nonatomic) GKGridLayoutMetrics *dataSourceMetricsInternal;
@property (retain, nonatomic) GKSectionMetrics *defaultSectionMetricsInternal;
@property (nonatomic, readonly) _Bool isRootDataSource;
@property (copy, nonatomic) GKSectionMetrics *defaultSectionMetrics;
@property (copy, nonatomic) GKGridLayoutMetrics *dataSourceMetrics;
@property (retain, nonatomic) NSString *defaultSearchKey;
@property (nonatomic, readonly) _Bool isSearchable;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (id)itemAtIndexPath:(id)arg1;
- (long long)totalItemCount;
- (id)localDescription;
- (id)_gkDescriptionWithChildren:(int)arg1;
- (void)notifyDidReloadData;
- (id)dataSourceForSection:(unsigned long long)arg1;
- (void)notifyPlaceholderUpdated:(_Bool)arg1;
- (void)notifySectionsRemoved:(id)arg1;
- (void)notifySectionsInserted:(id)arg1;
- (void)notifySectionsRefreshed:(id)arg1;
- (void)notifyBatchUpdate:(CDUnknownBlockType)arg1 complete:(CDUnknownBlockType)arg2;
- (void)refreshContentsForDataType:(unsigned int)arg1 userInfo:(id)arg2 updateNotifier:(id)arg3;
- (id)indexPathsForItem:(id)arg1;
- (_Bool)item:(id)arg1 matchesSearchTerms:(id)arg2 inSection:(long long)arg3;
- (void)removeItemAtIndexPath:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)configureCollectionView:(id)arg1;
- (void)registerSupplementaryViewOfKind:(id)arg1 withClass:(Class)arg2 target:(id)arg3 configurator:(SEL)arg4;
- (id)targetForAction:(SEL)arg1;
- (id)collectionView:(id)arg1 evaluateFactoryForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3 isRecursive:(_Bool)arg4;
- (id)collectionView:(id)arg1 defaultViewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (id)createMetricsTreeWithGridLayout:(id)arg1;
- (void)collectionViewWillBecomeActive:(id)arg1;
- (void)collectionViewDidBecomeInactive:(id)arg1;
- (_Bool)containsDataSource:(id)arg1;
- (unsigned long long)sectionForDataSource:(id)arg1;
- (void)notifyItemsInsertedAtIndexPaths:(id)arg1;
- (void)notifyItemsRemovedAtIndexPaths:(id)arg1;
- (void)notifyItemsRefreshedAtIndexPaths:(id)arg1;
- (void)notifyItemMovedFromIndexPath:(id)arg1 toIndexPaths:(id)arg2;
- (void)notifySectionMovedFrom:(long long)arg1 to:(long long)arg2;
- (void)notifyBatchUpdate:(CDUnknownBlockType)arg1;
- (id)searchKeyForSection:(long long)arg1;
- (id)metricsForSection:(long long)arg1;
- (void)setMetrics:(id)arg1 forSection:(long long)arg2;
- (void)loadDataWithCompletionHandlerAndError:(CDUnknownBlockType)arg1;
- (void)enumerateItemsAndIndexPathsUsingBlock:(CDUnknownBlockType)arg1;
- (id)metricsForSectionInternal:(long long)arg1;
- (id)supplementaryViewFactoryForKind:(id)arg1;
- (void)setSearchKey:(id)arg1 forSection:(long long)arg2;
- (void)updateSupplementaryMetricsForKey:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (void)notifySectionsMovedWithItems;
- (void)registerSupplementaryViewOfKind:(id)arg1 withFactory:(id)arg2;

@end
