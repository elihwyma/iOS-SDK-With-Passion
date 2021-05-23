/*
 Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

#import <VideosUI/VUILibraryFetchControllerViewController.h>

#import <VideosUI/Swift-Protocol.h>

@class NSArray, NSMutableDictionary, NSString, UIBarButtonItem, UICollectionView, VUICollectionHeaderView, VUILibraryLockupViewCell, VUIMediaEntityFetchRequest;

@protocol VUILibraryGridCollectionViewControllerDelegate;

__attribute__((visibility("hidden")))
@interface VUILibraryGridCollectionViewController : VUILibraryFetchControllerViewController <Swift>

{
    _Bool _requiresRelayout;
    _Bool _displaySortFilter;
    struct CGSize _cellSize;
    NSMutableDictionary *_cellMetrics;
    VUICollectionHeaderView *_sizingHeaderView;
    _Bool _hideLockupTitles;
    _Bool _forceBackButton;
    id <VUILibraryGridCollectionViewControllerDelegate> _delegate;
    long long _gridFilter;
    long long _gridStyle;
    long long _gridType;
    UIBarButtonItem *_libraryBarButton;
    NSString *_pageType;
    VUIMediaEntityFetchRequest *_fetchRequest;
    UICollectionView *_collectionView;
    NSArray *_totalResults;
    NSArray *_genreGroupedResults;
    VUILibraryLockupViewCell *_sizingCell;
    double _cellWidth;
    UIBarButtonItem *_currentNavBarButtonItem;
}

@property (retain, nonatomic) VUIMediaEntityFetchRequest *fetchRequest;
@property (retain, nonatomic) UICollectionView *collectionView;
@property (retain, nonatomic) NSArray *totalResults;
@property (retain, nonatomic) NSArray *genreGroupedResults;
@property (retain, nonatomic) VUILibraryLockupViewCell *sizingCell;
@property (nonatomic) double cellWidth;
@property (retain, nonatomic) UIBarButtonItem *currentNavBarButtonItem;
@property (weak, nonatomic) id <VUILibraryGridCollectionViewControllerDelegate> delegate;
@property (nonatomic) long long gridFilter;
@property (nonatomic) long long gridStyle;
@property (nonatomic) long long gridType;
@property (nonatomic) _Bool hideLockupTitles;
@property (retain, nonatomic) UIBarButtonItem *libraryBarButton;
@property (nonatomic) _Bool forceBackButton;
@property (retain, nonatomic) NSString *pageType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic) _Bool onlyShowLocalContent;

- (void)traitCollectionDidChange:(id)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)viewDidLayoutSubviews;
- (void)viewDidAppear:(_Bool)arg1;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForHeaderInSection:(long long)arg3;
- (struct UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3;
- (double)collectionView:(id)arg1 layout:(id)arg2 minimumLineSpacingForSectionAtIndex:(long long)arg3;
- (void)_updateLayout;
- (void)_updateNavigationBarPadding;
- (void)controller:(id)arg1 fetchRequests:(id)arg2 didCompleteWithResult:(id)arg3;
- (void)controller:(id)arg1 fetchRequests:(id)arg2 didFailWithError:(id)arg3;
- (void)updateWithLatestMediaEntities:(id)arg1 andChangeSet:(id)arg2;
- (double)_computeBottomMargin;
- (id)initWithMediaLibrary:(id)arg1 mediaEntities:(id)arg2 displaySortFilter:(_Bool)arg3;
- (void)setTitle:(id)arg1 withLargeTitleDisplayEnabled:(_Bool)arg2;
- (void)updateWithLatestMediaEntities:(id)arg1;
- (void)_updateWithMediaEntities:(id)arg1 mediaEntitiesChangeSet:(id)arg2 grouping:(id)arg3 groupingChangeSet:(id)arg4;
- (void)_updateCurrentViewIfNeeded;
- (id)_getFilterTitleForEnum:(long long)arg1;
- (void)_toggleSortFilter;
- (void)_configureSizingCellForItemAtIndexPath:(id)arg1;
- (id)initWithMediaLibrary:(id)arg1 fetchRequest:(id)arg2 displaySortFilter:(_Bool)arg3;

@end
