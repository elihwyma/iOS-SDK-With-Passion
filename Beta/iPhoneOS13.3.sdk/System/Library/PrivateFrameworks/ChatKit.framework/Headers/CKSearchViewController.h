/*
 Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

#import <ChatKit/CKScrollViewController.h>

#import <ChatKit/Swift-Protocol.h>

@class CKSearchCollectionView, IMTimingCollection, NSArray, NSMutableSet, NSString, UICollectionViewCompositionalLayout, UICollectionViewDiffableDataSource, _UIContextMenuInteraction;

@protocol CKContainerSearchControllerDelegate;

@interface CKSearchViewController : CKScrollViewController <Swift>

{
    _Bool _isInitialLoad;
    _Bool _suppressNextReloadAnimation;
    id <CKContainerSearchControllerDelegate> _delegate;
    unsigned long long _mode;
    NSArray *_searchControllers;
    NSString *_searchText;
    CKSearchCollectionView *_collectionView;
    UICollectionViewDiffableDataSource *_dataSource;
    UICollectionViewCompositionalLayout *_collectionViewLayout;
    CDUnknownBlockType _performAfterInitialLoadBlock;
    NSMutableSet *_searchCompleteControllerSet;
    IMTimingCollection *_timingCollection;
    _UIContextMenuInteraction *_contextMenuInteraction;
}

@property (retain, nonatomic) NSArray *searchControllers;
@property (copy, nonatomic) NSString *searchText;
@property (retain, nonatomic) CKSearchCollectionView *collectionView;
@property (retain, nonatomic) UICollectionViewDiffableDataSource *dataSource;
@property (retain, nonatomic) UICollectionViewCompositionalLayout *collectionViewLayout;
@property (nonatomic) _Bool isInitialLoad;
@property (nonatomic) _Bool suppressNextReloadAnimation;
@property (copy, nonatomic) CDUnknownBlockType performAfterInitialLoadBlock;
@property (retain, nonatomic) NSMutableSet *searchCompleteControllerSet;
@property (retain, nonatomic) IMTimingCollection *timingCollection;
@property (retain, nonatomic) _UIContextMenuInteraction *contextMenuInteraction;
@property (weak, nonatomic) id <CKContainerSearchControllerDelegate> delegate;
@property (nonatomic) unsigned long long mode;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (void)loadView;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)reloadData;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)viewDidLayoutSubviews;
- (void)viewDidDisappear:(_Bool)arg1;
- (_Bool)collectionView:(id)arg1 shouldSelectItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 willDisplaySupplementaryView:(id)arg2 forElementKind:(id)arg3 atIndexPath:(id)arg4;
- (id)scrollView;
- (void)viewLayoutMarginsDidChange;
- (_Bool)contextMenuInteractionShouldBegin:(id)arg1;
- (id)contextMenuInteraction:(id)arg1 previewForHighlightingAtLocation:(struct CGPoint)arg2;
- (id)contextMenuInteraction:(id)arg1 actionsForMenuAtLocation:(struct CGPoint)arg2 withSuggestedActions:(id)arg3;
- (void)updateSearchResultsForSearchController:(id)arg1;
- (_Bool)_isInternalInstall;
- (void)searchWithText:(id)arg1;
- (id)searchController:(id)arg1 conversationForChatGUID:(id)arg2;
- (void)searchControllerContentsDidChange:(id)arg1;
- (void)deleteMessageItem:(id)arg1;
- (struct UIEdgeInsets)parentMarginInsetsForSearchController:(id)arg1;
- (void)cancelCurrentQuery;
- (void)searchEnded;
- (id)layoutSectionForSection:(long long)arg1 withEnvironment:(id)arg2;
- (id)cellForItemInCollectionView:(id)arg1 atIndexPath:(id)arg2 withIdentifier:(id)arg3;
- (void)searchController:(id)arg1 requestsItemDeletionAtIndexPath:(id)arg2;
- (void)deleteTransferGUID:(id)arg1;
- (id)initWithSearchControllerClasses:(id)arg1;
- (id)containerTraitCollectionForController:(id)arg1;
- (void)searchResultsTitleCellShowAllButtonTapped:(id)arg1;
- (double)containerWidthForController:(id)arg1;
- (_Bool)_currentModeIsDetails;
- (void)searchController:(id)arg1 requestsPresentationOfShareController:(id)arg2 atRect:(struct CGRect)arg3;
- (void)_searchImmediately;
- (id)globalLayoutConfiguration;
- (void)_registerCells;
- (id)_identifiersToAppendForResults:(id)arg1;
- (Class)_searchResultsHeaderClass;
- (_Bool)_needsIndexing;
- (void)_configureIndexingCell:(id)arg1;
- (id)_newSnapshotForCurrentControllerState;
- (id)headerBoundryItemsForController:(id)arg1 withEnvironment:(id)arg2;
- (id)footerBoundryItemsForController:(id)arg1 withEnvironment:(id)arg2;
- (id)cellForSupplementryItemInCollectionView:(id)arg1 atIndexPath:(id)arg2 forSupplementryViewKind:(id)arg3;
- (id)_layoutSectionForController:(id)arg1 withEnvironment:(id)arg2;
- (void)searchController:(id)arg1 requestsPresentationOfAlertController:(id)arg2 atRect:(struct CGRect)arg3;
- (void)viewWillDissapeaer:(_Bool)arg1;

@end
