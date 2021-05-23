/*
 Image: /System/Library/PrivateFrameworks/CloudDocsUI.framework/CloudDocsUI
 */

#import <UIKit/UICollectionViewController.h>

#import <CloudDocsUI/Swift-Protocol.h>

@class NSArray, NSString, UIActivityIndicatorView, UIScrollView, UIView, _UIDocumentPickerContainerModel, _UIDocumentPickerFlowLayout, _UIDocumentPickerSortOrderView, _UIDocumentPickerTableLayout;

@protocol UIViewControllerPreviewing, _UIDocumentPickerServiceViewController;

__attribute__((visibility("hidden")))
@interface _UIDocumentPickerDocumentCollectionViewController : UICollectionViewController <Swift>

{
    _Bool _editing;
    id <UIViewControllerPreviewing> _viewControllerPreviewContext;
    _Bool _monitoring;
    _Bool _shouldHideSortBar;
    _Bool _updatesMayAnimate;
    long long _displayMode;
    id <_UIDocumentPickerServiceViewController> _serviceViewController;
    _UIDocumentPickerContainerModel *_model;
    NSArray *_actions;
    _UIDocumentPickerFlowLayout *_gridLayout;
    _UIDocumentPickerTableLayout *_tableLayout;
    _UIDocumentPickerSortOrderView *_sortView;
    UIView *_pinnedHeaderView;
    NSArray *_modelObjects;
    UIActivityIndicatorView *_initialActivityView;
}

@property (retain, nonatomic) _UIDocumentPickerContainerModel *model;
@property (retain, nonatomic) NSArray *actions;
@property (retain, nonatomic) _UIDocumentPickerFlowLayout *gridLayout;
@property (retain, nonatomic) _UIDocumentPickerTableLayout *tableLayout;
@property (nonatomic) _Bool monitoring;
@property (nonatomic) _Bool shouldHideSortBar;
@property (retain, nonatomic) _UIDocumentPickerSortOrderView *sortView;
@property (retain, nonatomic) UIView *pinnedHeaderView;
@property (copy, nonatomic) NSArray *modelObjects;
@property (nonatomic) _Bool updatesMayAnimate;
@property (retain, nonatomic) UIActivityIndicatorView *initialActivityView;
@property (weak, nonatomic) id <_UIDocumentPickerServiceViewController> serviceViewController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (retain, nonatomic) NSArray *indexPathsForSelectedItems;
@property (nonatomic, readonly) UIScrollView *scrollView;
@property (nonatomic) long long displayMode;
@property (nonatomic, readonly) _Bool supportsActions;

- (void)dealloc;
- (id)initWithModel:(id)arg1;
- (void)presentViewController:(id)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillLayoutSubviews;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)willMoveToParentViewController:(id)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidAppear:(_Bool)arg1;
- (void)setContentSizeAdjustment:(double)arg1;
- (void)setEditing:(_Bool)arg1 animated:(_Bool)arg2;
- (long long)collectionView:(id)arg1 tableLayout:(id)arg2 indentationLevelForRowAtIndexPath:(id)arg3;
- (long long)collectionView:(id)arg1 tableLayout:(id)arg2 editingStyleForRowAtIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 tableLayout:(id)arg2 trailingSwipeActionsForRowAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 tableLayout:(id)arg2 accessoryButtonTappedForRowWithIndexPath:(id)arg3;
- (_Bool)collectionView:(id)arg1 shouldHighlightItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didHighlightItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didUnhighlightItemAtIndexPath:(id)arg2;
- (_Bool)collectionView:(id)arg1 shouldSelectItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didDeselectItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 didEndDisplayingCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (id)previewingContext:(id)arg1 viewControllerForLocation:(struct CGPoint)arg2;
- (void)previewingContext:(id)arg1 commitViewController:(id)arg2;
- (void)willPresentSearchController:(id)arg1;
- (void)willDismissSearchController:(id)arg1;
- (void)didDismissSearchController:(id)arg1;
- (void)updateContentInset;
- (void)_dynamicTypeSizeChanged:(id)arg1;
- (void)_updateRowHeight;
- (void)_unlockAnimations;
- (void)_updateIconSpacing;
- (void)modelChanged:(id)arg1;
- (void)containersChangedWithSnapshot:(id)arg1 differences:(id)arg2;
- (void)performAction:(long long)arg1 forRow:(id)arg2 view:(id)arg3;
- (void)_showMoreOptionsForRow:(id)arg1 view:(id)arg2;
- (void)ensureSortViewInvisible;
- (void)updatePinnedHeader;
- (id)itemForLocation:(struct CGPoint)arg1;
- (id)previewActionItemsForItem:(id)arg1;
- (void)setPinnedHeaderView:(id)arg1 animated:(_Bool)arg2;
- (void)scrollSortViewToVisible;
- (id)actionViewForLocation:(struct CGPoint)arg1;
- (_Bool)_smallCells;

@end
