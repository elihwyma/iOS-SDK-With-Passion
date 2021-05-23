/*
 Image: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
 */

#import <GameCenterUI/GKLoadingViewController.h>

#import <GameCenterUI/Swift-Protocol.h>

@class GKCollectionDataSource, GKNoContentView, NSLayoutConstraint, NSMutableIndexSet, NSString, UICollectionView, UIView;

@interface GKDashboardCollectionViewController : GKLoadingViewController <Swift>

{
    _Bool _autoWidthUsesTwoColumnsWhenSpace;
    UICollectionView *_collectionView;
    GKCollectionDataSource *_dataSource;
    NSMutableIndexSet *_sectionsToReload;
    GKNoContentView *_noContentView;
    NSLayoutConstraint *_keyboardConstraint;
    double _keyboardConstraintDefaultConstant;
    UIView *_keyboardAdjustedView;
    UIView *_collectionContainerView;
    struct UIEdgeInsets _contentInsetsBeforeKeyboard;
    struct UIEdgeInsets _scrollInsetsBeforeKeyboard;
}

@property (retain, nonatomic) UICollectionView *collectionView;
@property (nonatomic) struct UIEdgeInsets contentInsetsBeforeKeyboard;
@property (nonatomic) struct UIEdgeInsets scrollInsetsBeforeKeyboard;
@property (nonatomic) NSLayoutConstraint *keyboardConstraint;
@property (nonatomic) double keyboardConstraintDefaultConstant;
@property (nonatomic) UIView *keyboardAdjustedView;
@property (nonatomic) UIView *collectionContainerView;
@property (nonatomic, readonly) _Bool isLoading;
@property (retain, nonatomic) GKCollectionDataSource *dataSource;
@property (nonatomic) _Bool autoWidthUsesTwoColumnsWhenSpace;
@property (retain, nonatomic) NSMutableIndexSet *sectionsToReload;
@property (retain, nonatomic) GKNoContentView *noContentView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (void)loadView;
- (void)traitCollectionDidChange:(id)arg1;
- (id)preferredFocusEnvironments;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (_Bool)collectionView:(id)arg1 canFocusItemAtIndexPath:(id)arg2;
- (void)viewDidAppear:(_Bool)arg1;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (_Bool)collectionView:(id)arg1 shouldSelectItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didDeselectItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 didFocusItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didUnfocusItemAtIndexPath:(id)arg2;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForHeaderInSection:(long long)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForFooterInSection:(long long)arg3;
- (void)clearSelection;
- (void)loadData;
- (_Bool)hasData;
- (void)keyboardWillShow:(id)arg1;
- (void)keyboardWillHide:(id)arg1;
- (void)setupDataSource;
- (void)contentSizeCategoryDidChangeNotification:(id)arg1;
- (void)didEnterLoadingState;
- (void)setAutoWidthColumns:(long long)arg1;
- (void)setToHorizontalLayout:(_Bool)arg1;
- (void)dataUpdated:(_Bool)arg1 withError:(id)arg2;
- (void)setupNoContentView:(id)arg1 withError:(id)arg2;
- (void)setNeedsRefresh;
- (id)horizontalCollectionViewLayout;
- (id)verticalCollectionViewLayout;
- (void)createCollectionViewInsideView:(id)arg1;
- (void)prepareForAutomaticTwoColumnLayout;
- (void)hideNoContentPlaceholder;
- (void)showNoContentPlaceholderForError:(id)arg1;
- (void)clearSelectionForCollectionView:(id)arg1;
- (void)didEnterRefreshingState;
- (void)didExitRefreshingState;
- (void)popoverDidClose:(id)arg1;
- (void)windowDidEndSheet:(id)arg1;

@end
