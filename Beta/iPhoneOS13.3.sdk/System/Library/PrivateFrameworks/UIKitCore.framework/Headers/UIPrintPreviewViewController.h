/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UICollectionViewController.h>

#import <UIKitCore/Swift-Protocol.h>

@class NSArray, NSLayoutConstraint, NSMutableArray, NSObject, NSString, NSURL, UICollectionViewCell, UIDocumentInteractionController, UIImageView, UILabel, UIPrintPanelViewController, UIPrintPaper, UIView;

@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface UIPrintPreviewViewController : UICollectionViewController <Swift>

{
    long long _numPages;
    struct CGSize _pageSize;
    _Bool _grayscalePreview;
    _Bool _annotationsOnPreview;
    _Bool _accessibilityScrollTriggered;
    UIPrintPanelViewController *_printPanelViewController;
    UIView *_pageLabelBackgroundView;
    UIImageView *_pageLabelOnImageView;
    UILabel *_pageLabel;
    long long _pageIndexOnPageLabel;
    NSURL *_pdfURL;
    struct CGPDFDocument *_pdfDocRef;
    NSObject<OS_dispatch_queue> *_pageRendererQueue;
    NSLayoutConstraint *_pageLabelBadgeVerticalPositionConstraint;
    UIDocumentInteractionController *_documentInteractionController;
    NSURL *_sharePDFFileURL;
    UICollectionViewCell *_pinchGestureBeginningCell;
    UIImageView *_pinchAnimationView;
    UIView *_pinchAnimationWhiteBackgroundView;
    struct CGPoint _pinchGestureLastPoint;
    double _pinchGestureLastScale;
    _Bool _scaleUpOnDestinationPaper;
    _Bool _presentingDocumentInteractionController;
    NSMutableArray *_arrayOfPageImages;
    NSArray *_arrayOfCellSizes;
    NSURL *_quickLookPDFURL;
    UIPrintPaper *_destinationPaper;
    NSString *_pdfPassword;
    long long _initialPageIndexToCenter;
}

@property _Bool presentingDocumentInteractionController;
@property (retain) NSMutableArray *arrayOfPageImages;
@property (retain) NSArray *arrayOfCellSizes;
@property (retain) NSURL *pdfURL;
@property (retain) NSURL *quickLookPDFURL;
@property _Bool grayscalePreview;
@property _Bool annotationsOnPreview;
@property (retain) UIPrintPaper *destinationPaper;
@property _Bool scaleUpOnDestinationPaper;
@property (retain) NSString *pdfPassword;
@property (readonly) long long currentCenterPageIndex;
@property long long initialPageIndexToCenter;
@property (readonly) long long numPages;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (void)traitCollectionDidChange:(id)arg1;
- (_Bool)accessibilityScroll:(long long)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldBeRequiredToFailByGestureRecognizer:(id)arg2;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)viewDidLoad;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)viewDidAppear:(_Bool)arg1;
- (_Bool)canBecomeFirstResponder;
- (void)updateLayout;
- (_Bool)collectionView:(id)arg1 shouldShowMenuForItemAtIndexPath:(id)arg2;
- (_Bool)collectionView:(id)arg1 canPerformAction:(SEL)arg2 forItemAtIndexPath:(id)arg3 withSender:(id)arg4;
- (void)collectionView:(id)arg1 prefetchItemsAtIndexPaths:(id)arg2;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (struct UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3;
- (id)previewViewControllerForItemAtIndexPath:(id)arg1;
- (id)previewingContext:(id)arg1 viewControllerForLocation:(struct CGPoint)arg2;
- (void)previewingContext:(id)arg1 commitViewController:(id)arg2;
- (void)didReceiveMemoryWarning;
- (id)initWithPageSize:(struct CGSize)arg1 numberOfPages:(long long)arg2 viewSize:(struct CGSize)arg3 printPanelViewController:(id)arg4;
- (void)handleTap:(id)arg1;
- (void)setStartPage:(id)arg1 forPageIndex:(long long)arg2;
- (void)setEndPage:(id)arg1 forPageIndex:(long long)arg2;
- (void)addPage:(id)arg1 forPageIndex:(long long)arg2;
- (void)removePage:(id)arg1 forPageIndex:(long long)arg2;
- (void)addAllPages:(id)arg1;
- (_Bool)canSetStartPage:(id)arg1 forPageIndex:(long long)arg2;
- (_Bool)canSetEndPage:(id)arg1 forPageIndex:(long long)arg2;
- (_Bool)canAddPage:(id)arg1 forPageIndex:(long long)arg2;
- (_Bool)canRemovePage:(id)arg1 forPageIndex:(long long)arg2;
- (_Bool)canAddAllPages:(id)arg1;
- (_Bool)canShowMenuBar;
- (double)pageLabelBottomSpace;
- (void)handlePinch:(id)arg1;
- (void)updatePageNumberBadgeLocation;
- (void)trackCenterCell;
- (void)pageRangeUpdated;
- (void)resetAllPageImages;
- (void)resetCellSizesArray;
- (_Bool)pageIndexIsInRange:(long long)arg1;
- (void)updatePageLabel;
- (void)previewPDF;
- (void)animateCellAndPresentDocumentInteractionController;
- (id)gestureRecognizersOfVisibleCells;
- (_Bool)locationInTapTargetOfPageLabelBadge:(struct CGPoint)arg1;
- (void)pageBadgeTapped:(id)arg1;
- (void)updatePageBadgeImage;
- (id)getPageImageForPage:(long long)arg1 grayscale:(_Bool)arg2 deepColor:(_Bool)arg3;
- (void)fetchPageInBackground:(unsigned long long)arg1 reloadWhenDone:(_Bool)arg2;
- (void)configureCell:(id)arg1 atIndexPath:(id)arg2;
- (id)_newTempURLForPreviewing;
- (id)documentInteractionControllerByPreparedForPreviewing;
- (id)indexPathNearestToPointInCollectionView:(struct CGPoint)arg1;
- (id)pathOfCenterMostCell;
- (long long)_adjustScrollDirectionForLayout:(long long)arg1;
- (id)documentInteractionControllerViewControllerForPreview:(id)arg1;
- (void)documentInteractionControllerDidEndPreview:(id)arg1;
- (void)documentInteractionController:(id)arg1 didEndSendingToApplication:(id)arg2;
- (id)excludedActivityTypesForDocumentInteractionController:(id)arg1;

@end
