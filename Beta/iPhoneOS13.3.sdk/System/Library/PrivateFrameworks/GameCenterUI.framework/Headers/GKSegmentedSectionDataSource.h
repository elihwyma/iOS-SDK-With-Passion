/*
 Image: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
 */

#import <GameCenterUI/GKCollectionViewDataSource.h>

@class GKCollectionViewPlaceholderView, GKSegmentInfo, GKSegmentedSectionHeaderView, NSArray, NSMutableArray, NSString;

@interface GKSegmentedSectionDataSource : GKCollectionViewDataSource

{
    _Bool _usePlaceholder;
    _Bool _shouldHideSegment;
    _Bool _waitingForAnimation;
    NSString *_noContentTitle;
    NSString *_noContentMessage;
    NSString *_noContentButtonTitle;
    id _noContentButtonTarget;
    SEL _noContentButtonAction;
    Class _segmentedHeaderClass;
    NSMutableArray *_segmentInfos;
    GKSegmentedSectionHeaderView *_headerView;
    GKCollectionViewPlaceholderView *_placeholderView;
    GKSegmentInfo *_selectedSegmentInfo;
    GKCollectionViewDataSource *_rootDataSource;
}

@property (retain, nonatomic) NSMutableArray *segmentInfos;
@property (retain, nonatomic) GKSegmentedSectionHeaderView *headerView;
@property (retain, nonatomic) GKCollectionViewPlaceholderView *placeholderView;
@property (retain, nonatomic) GKSegmentInfo *selectedSegmentInfo;
@property (nonatomic) _Bool waitingForAnimation;
@property (retain, nonatomic) GKCollectionViewDataSource *rootDataSource;
@property (nonatomic, readonly) NSArray *dataSources;
@property (nonatomic) GKCollectionViewDataSource *selectedDataSource;
@property (nonatomic) _Bool usePlaceholder;
@property (nonatomic) _Bool shouldHideSegment;
@property (nonatomic) unsigned long long selectedDataSourceIndex;
@property (retain, nonatomic) NSString *noContentTitle;
@property (retain, nonatomic) NSString *noContentMessage;
@property (retain, nonatomic) NSString *noContentButtonTitle;
@property (nonatomic) id noContentButtonTarget;
@property (nonatomic) SEL noContentButtonAction;
@property (nonatomic) Class segmentedHeaderClass;

- (void)dealloc;
- (id)description;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (id)itemAtIndexPath:(id)arg1;
- (void)addDataSource:(id)arg1;
- (void)removeDataSource:(id)arg1;
- (id)allTitles;
- (id)initWithDataSources:(id)arg1;
- (void)segmentDidChangeLoadingState:(id)arg1;
- (id)initWithDataSources:(id)arg1 rootDataSource:(id)arg2;
- (id)_gkDescriptionWithChildren:(int)arg1;
- (id)infoForDataSource:(id)arg1;
- (void)infosChanged;
- (id)dataSourceForSection:(unsigned long long)arg1;
- (void)updatePlaceholderNotify:(_Bool)arg1;
- (void)dataSourceDidLoad;
- (void)dataSourceWillLoad;
- (void)refreshContentsForDataType:(unsigned int)arg1 userInfo:(id)arg2 updateNotifier:(id)arg3;
- (void)groupDidLoad:(id)arg1;
- (void)setSelectedDataSourceIndex:(unsigned long long)arg1 reload:(_Bool)arg2;
- (id)indexPathsForItem:(id)arg1;
- (_Bool)item:(id)arg1 matchesSearchTerms:(id)arg2 inSection:(long long)arg3;
- (void)removeItemAtIndexPath:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)configureCollectionView:(id)arg1;
- (void)configureSegmentedHeader:(id)arg1;
- (id)collectionView:(id)arg1 evaluateFactoryForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3 isRecursive:(_Bool)arg4;
- (id)createMetricsTreeWithGridLayout:(id)arg1;
- (void)collectionViewWillBecomeActive:(id)arg1;
- (void)collectionViewDidBecomeInactive:(id)arg1;
- (_Bool)containsDataSource:(id)arg1;
- (unsigned long long)sectionForDataSource:(id)arg1;
- (id)infoForSegment:(long long)arg1;
- (void)setTitle:(id)arg1 forDataSource:(id)arg2;
- (void)selectedSegmentChanged:(id)arg1;
- (void)hoistSegmentedFactoryToRoot;
- (void)dataSource:(id)arg1 didInsertItemsAtIndexPaths:(id)arg2;
- (void)dataSource:(id)arg1 didRemoveItemsAtIndexPaths:(id)arg2;
- (void)dataSource:(id)arg1 didRefreshItemsAtIndexPaths:(id)arg2;
- (void)dataSource:(id)arg1 didMoveItemAtIndexPath:(id)arg2 toIndexPath:(id)arg3;
- (void)dataSource:(id)arg1 didInsertSections:(id)arg2;
- (void)dataSource:(id)arg1 didRemoveSections:(id)arg2;
- (void)dataSource:(id)arg1 didRefreshSections:(id)arg2;
- (void)dataSource:(id)arg1 didMoveSection:(long long)arg2 toSection:(long long)arg3;
- (void)dataSourceDidReloadData:(id)arg1;
- (void)dataSource:(id)arg1 performBatchUpdate:(CDUnknownBlockType)arg2 complete:(CDUnknownBlockType)arg3;

@end
