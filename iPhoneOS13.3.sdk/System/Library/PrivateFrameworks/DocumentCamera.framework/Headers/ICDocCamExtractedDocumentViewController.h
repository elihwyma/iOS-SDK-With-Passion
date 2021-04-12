//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <DocumentCamera/DCUnsavedDataDelegate-Protocol.h>
#import <DocumentCamera/ICDocCamExtractedThumbnailContainerViewDelegate-Protocol.h>
#import <DocumentCamera/ICDocCamFilterViewDelegate-Protocol.h>
#import <DocumentCamera/ICDocCamThumbnailViewLayoutDelegate-Protocol.h>
#import <DocumentCamera/ICDocCamZoomablePageContentDelegate-Protocol.h>

@class CIContext, ICDocCamDocumentInfoCollection, ICDocCamExtractedThumbnailContainerView, ICDocCamFilterViewController, ICDocCamImageCache, ICDocCamReorderingThumbnailCollectionViewLayout, NSIndexPath, NSLayoutConstraint, NSMutableArray, UIAccessibilityHUDItem, UIAlertController, UIBarButtonItem, UIButton, UICollectionView, UICollectionViewController, UIColor, UIImageView, UILabel, UILongPressGestureRecognizer, UIPageViewController, UIScrollView, UIStackView, UIToolbar, UIView;
@protocol DCScanDataDelegate, ICDocCamExtractedDocumentControllerDelegate;

@interface ICDocCamExtractedDocumentViewController : UIViewController <CAAnimationDelegate, UIPageViewControllerDataSource, UIPageViewControllerDelegate, ICDocCamZoomablePageContentDelegate, ICDocCamFilterViewDelegate, UICollectionViewDataSource, UICollectionViewDelegate, ICDocCamThumbnailViewLayoutDelegate, UIScrollViewDelegate, UIPageViewControllerDelegatePrivate, ICDocCamExtractedThumbnailContainerViewDelegate, UITextFieldDelegate, UIGestureRecognizerDelegate, DCUnsavedDataDelegate>
{
    BOOL _statusBarWasHiddenWhenDoneTapped;
    BOOL _statusBarWasHiddenWhenRetakeTapped;
    BOOL _rotationUnderWay;
    BOOL _isScrollingBetweenPages;
    BOOL _barsShouldBeHidden;
    BOOL _cameraRestricted;
    BOOL _adjustPageViewControllerForMarkup;
    BOOL _isAnimatingPageViewController;
    BOOL _layoutHasHappened;
    int _mode;
    UIView *_topToolbar;
    UIToolbar *_bottomToolbar;
    ICDocCamFilterViewController *_filterViewController;
    UIPageViewController *_pageViewController;
    UIBarButtonItem *_trashButtonItem;
    UIBarButtonItem *_rotateButtonItem;
    UIBarButtonItem *_filterButtonItem;
    UIBarButtonItem *_addButtonItem;
    UIBarButtonItem *_actionButtonItem;
    UIBarButtonItem *_doneButtonItem;
    UIBarButtonItem *_retakeButtonItem;
    UIBarButtonItem *_filterButtonItemForNavBar;
    UIBarButtonItem *_trashButtonItemForNavBar;
    UIBarButtonItem *_rotateButtonItemForNavBar;
    UIBarButtonItem *_compactRotateButtonItem;
    UIBarButtonItem *_compactFilterButtonItem;
    UIBarButtonItem *_compactRotateButtonItemForNavBar;
    UIBarButtonItem *_compactFilterButtonItemForNavBar;
    UIBarButtonItem *_recropButtonItem;
    UIBarButtonItem *_recropButtonItemForNavBar;
    UIBarButtonItem *_compactRecropButtonItemForNavBar;
    UILabel *_pageIndexLabel;
    UIButton *_collectionTitleButton;
    UIView *_titleViewWrapper;
    UIStackView *_titleView;
    NSLayoutConstraint *_titleViewWrapperWidthConstraint;
    NSLayoutConstraint *_titleViewWrapperHeightConstraint;
    UIView *_pageViewControllerContainerView;
    long long _presentationPageIndex;
    UICollectionViewController *_thumbnailCollectionViewController;
    UICollectionView *_thumbnailCollectionView;
    ICDocCamExtractedThumbnailContainerView *_thumbnailContainerView;
    UIBarButtonItem *_thumbnailContainerViewItem;
    ICDocCamDocumentInfoCollection *_documentInfoCollection;
    ICDocCamImageCache *_imageCache;
    UILongPressGestureRecognizer *_imageLongPressGestureRecognizer;
    UILongPressGestureRecognizer *_thumbnailLongPressGestureRecognizer;
    NSIndexPath *_movingIndexPath;
    double _movingXPosition;
    double _movingYPosition;
    id <ICDocCamExtractedDocumentControllerDelegate> _delegate;
    UIAlertController *_editTitleAlert;
    CIContext *_sharedCoreImageContext;
    UIScrollView *_pageViewControllerScrollView;
    NSMutableArray *_documentsToUpdateWhenScrollingStops;
    long long _lastAXProposedIndexForReordering;
    NSLayoutConstraint *_pageViewLeadingConstraint;
    NSLayoutConstraint *_pageViewTrailingConstraint;
    NSLayoutConstraint *_pageViewTopConstraint;
    NSLayoutConstraint *_pageViewBottomConstraint;
    UIAccessibilityHUDItem *_hudItemForAccessibilityLargerText;
    UILongPressGestureRecognizer *_axHUDLongPressGestureRecognizer;
    UIColor *_defaultCollectionViewTitleTintColor;
    UIColor *_darkenedCollectionViewTitleTintColor;
    CGSize _previousViewSize;
    CGRect _menuControllerTargetRect;
}

+ (CGRect)targetRectForOrientation:(long long)arg1;
@property(retain, nonatomic) UIColor *darkenedCollectionViewTitleTintColor; // @synthesize darkenedCollectionViewTitleTintColor=_darkenedCollectionViewTitleTintColor;
@property(retain, nonatomic) UIColor *defaultCollectionViewTitleTintColor; // @synthesize defaultCollectionViewTitleTintColor=_defaultCollectionViewTitleTintColor;
@property(nonatomic) BOOL layoutHasHappened; // @synthesize layoutHasHappened=_layoutHasHappened;
@property(retain, nonatomic) UILongPressGestureRecognizer *axHUDLongPressGestureRecognizer; // @synthesize axHUDLongPressGestureRecognizer=_axHUDLongPressGestureRecognizer;
@property(retain, nonatomic) UIAccessibilityHUDItem *hudItemForAccessibilityLargerText; // @synthesize hudItemForAccessibilityLargerText=_hudItemForAccessibilityLargerText;
@property(nonatomic) BOOL isAnimatingPageViewController; // @synthesize isAnimatingPageViewController=_isAnimatingPageViewController;
@property(nonatomic) BOOL adjustPageViewControllerForMarkup; // @synthesize adjustPageViewControllerForMarkup=_adjustPageViewControllerForMarkup;
@property(retain, nonatomic) NSLayoutConstraint *pageViewBottomConstraint; // @synthesize pageViewBottomConstraint=_pageViewBottomConstraint;
@property(retain, nonatomic) NSLayoutConstraint *pageViewTopConstraint; // @synthesize pageViewTopConstraint=_pageViewTopConstraint;
@property(retain, nonatomic) NSLayoutConstraint *pageViewTrailingConstraint; // @synthesize pageViewTrailingConstraint=_pageViewTrailingConstraint;
@property(retain, nonatomic) NSLayoutConstraint *pageViewLeadingConstraint; // @synthesize pageViewLeadingConstraint=_pageViewLeadingConstraint;
@property(nonatomic) BOOL cameraRestricted; // @synthesize cameraRestricted=_cameraRestricted;
@property(nonatomic) BOOL barsShouldBeHidden; // @synthesize barsShouldBeHidden=_barsShouldBeHidden;
@property(nonatomic) long long lastAXProposedIndexForReordering; // @synthesize lastAXProposedIndexForReordering=_lastAXProposedIndexForReordering;
@property(retain, nonatomic) NSMutableArray *documentsToUpdateWhenScrollingStops; // @synthesize documentsToUpdateWhenScrollingStops=_documentsToUpdateWhenScrollingStops;
@property(retain, nonatomic) UIScrollView *pageViewControllerScrollView; // @synthesize pageViewControllerScrollView=_pageViewControllerScrollView;
@property(nonatomic) BOOL isScrollingBetweenPages; // @synthesize isScrollingBetweenPages=_isScrollingBetweenPages;
@property(nonatomic) CGSize previousViewSize; // @synthesize previousViewSize=_previousViewSize;
@property(retain, nonatomic) CIContext *sharedCoreImageContext; // @synthesize sharedCoreImageContext=_sharedCoreImageContext;
@property(nonatomic) __weak UIAlertController *editTitleAlert; // @synthesize editTitleAlert=_editTitleAlert;
@property(nonatomic) __weak id <ICDocCamExtractedDocumentControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) CGRect menuControllerTargetRect; // @synthesize menuControllerTargetRect=_menuControllerTargetRect;
@property(nonatomic) double movingYPosition; // @synthesize movingYPosition=_movingYPosition;
@property(nonatomic) double movingXPosition; // @synthesize movingXPosition=_movingXPosition;
@property(retain, nonatomic) NSIndexPath *movingIndexPath; // @synthesize movingIndexPath=_movingIndexPath;
@property(retain, nonatomic) UILongPressGestureRecognizer *thumbnailLongPressGestureRecognizer; // @synthesize thumbnailLongPressGestureRecognizer=_thumbnailLongPressGestureRecognizer;
@property(retain, nonatomic) UILongPressGestureRecognizer *imageLongPressGestureRecognizer; // @synthesize imageLongPressGestureRecognizer=_imageLongPressGestureRecognizer;
@property(retain, nonatomic) ICDocCamImageCache *imageCache; // @synthesize imageCache=_imageCache;
@property(retain, nonatomic) ICDocCamDocumentInfoCollection *documentInfoCollection; // @synthesize documentInfoCollection=_documentInfoCollection;
@property(nonatomic) int mode; // @synthesize mode=_mode;
@property(retain, nonatomic) UIBarButtonItem *thumbnailContainerViewItem; // @synthesize thumbnailContainerViewItem=_thumbnailContainerViewItem;
@property(retain, nonatomic) ICDocCamExtractedThumbnailContainerView *thumbnailContainerView; // @synthesize thumbnailContainerView=_thumbnailContainerView;
@property(retain, nonatomic) UICollectionView *thumbnailCollectionView; // @synthesize thumbnailCollectionView=_thumbnailCollectionView;
@property(retain, nonatomic) UICollectionViewController *thumbnailCollectionViewController; // @synthesize thumbnailCollectionViewController=_thumbnailCollectionViewController;
@property(nonatomic) long long presentationPageIndex; // @synthesize presentationPageIndex=_presentationPageIndex;
@property(nonatomic) __weak UIView *pageViewControllerContainerView; // @synthesize pageViewControllerContainerView=_pageViewControllerContainerView;
@property(retain, nonatomic) NSLayoutConstraint *titleViewWrapperHeightConstraint; // @synthesize titleViewWrapperHeightConstraint=_titleViewWrapperHeightConstraint;
@property(retain, nonatomic) NSLayoutConstraint *titleViewWrapperWidthConstraint; // @synthesize titleViewWrapperWidthConstraint=_titleViewWrapperWidthConstraint;
@property(retain, nonatomic) UIStackView *titleView; // @synthesize titleView=_titleView;
@property(retain, nonatomic) UIView *titleViewWrapper; // @synthesize titleViewWrapper=_titleViewWrapper;
@property(retain, nonatomic) UIButton *collectionTitleButton; // @synthesize collectionTitleButton=_collectionTitleButton;
@property(retain, nonatomic) UILabel *pageIndexLabel; // @synthesize pageIndexLabel=_pageIndexLabel;
@property(nonatomic) BOOL rotationUnderWay; // @synthesize rotationUnderWay=_rotationUnderWay;
@property(retain, nonatomic) UIBarButtonItem *compactRecropButtonItemForNavBar; // @synthesize compactRecropButtonItemForNavBar=_compactRecropButtonItemForNavBar;
@property(retain, nonatomic) UIBarButtonItem *recropButtonItemForNavBar; // @synthesize recropButtonItemForNavBar=_recropButtonItemForNavBar;
@property(retain, nonatomic) UIBarButtonItem *recropButtonItem; // @synthesize recropButtonItem=_recropButtonItem;
@property(retain, nonatomic) UIBarButtonItem *compactFilterButtonItemForNavBar; // @synthesize compactFilterButtonItemForNavBar=_compactFilterButtonItemForNavBar;
@property(retain, nonatomic) UIBarButtonItem *compactRotateButtonItemForNavBar; // @synthesize compactRotateButtonItemForNavBar=_compactRotateButtonItemForNavBar;
@property(retain, nonatomic) UIBarButtonItem *compactFilterButtonItem; // @synthesize compactFilterButtonItem=_compactFilterButtonItem;
@property(retain, nonatomic) UIBarButtonItem *compactRotateButtonItem; // @synthesize compactRotateButtonItem=_compactRotateButtonItem;
@property(retain, nonatomic) UIBarButtonItem *rotateButtonItemForNavBar; // @synthesize rotateButtonItemForNavBar=_rotateButtonItemForNavBar;
@property(retain, nonatomic) UIBarButtonItem *trashButtonItemForNavBar; // @synthesize trashButtonItemForNavBar=_trashButtonItemForNavBar;
@property(retain, nonatomic) UIBarButtonItem *filterButtonItemForNavBar; // @synthesize filterButtonItemForNavBar=_filterButtonItemForNavBar;
@property(retain, nonatomic) UIBarButtonItem *retakeButtonItem; // @synthesize retakeButtonItem=_retakeButtonItem;
@property(retain, nonatomic) UIBarButtonItem *doneButtonItem; // @synthesize doneButtonItem=_doneButtonItem;
@property(retain, nonatomic) UIBarButtonItem *actionButtonItem; // @synthesize actionButtonItem=_actionButtonItem;
@property(retain, nonatomic) UIBarButtonItem *addButtonItem; // @synthesize addButtonItem=_addButtonItem;
@property(retain, nonatomic) UIBarButtonItem *filterButtonItem; // @synthesize filterButtonItem=_filterButtonItem;
@property(retain, nonatomic) UIBarButtonItem *rotateButtonItem; // @synthesize rotateButtonItem=_rotateButtonItem;
@property(retain, nonatomic) UIBarButtonItem *trashButtonItem; // @synthesize trashButtonItem=_trashButtonItem;
@property(nonatomic) BOOL statusBarWasHiddenWhenRetakeTapped; // @synthesize statusBarWasHiddenWhenRetakeTapped=_statusBarWasHiddenWhenRetakeTapped;
@property(nonatomic) BOOL statusBarWasHiddenWhenDoneTapped; // @synthesize statusBarWasHiddenWhenDoneTapped=_statusBarWasHiddenWhenDoneTapped;
@property(retain, nonatomic) UIPageViewController *pageViewController; // @synthesize pageViewController=_pageViewController;
@property(retain, nonatomic) ICDocCamFilterViewController *filterViewController; // @synthesize filterViewController=_filterViewController;
@property(nonatomic) __weak UIToolbar *bottomToolbar; // @synthesize bottomToolbar=_bottomToolbar;
@property(nonatomic) __weak UIView *topToolbar; // @synthesize topToolbar=_topToolbar;
// - (void).cxx_destruct;
- (void)resetImageCentering;
- (id)indexPathForCurrentDocument;
- (NSUInteger)documentCount;
- (CGRect)recropTargetForIndexPath:(id)arg1;
- (CGRect)retakeTargetForIndexPath:(id)arg1;
- (CGRect)imageRectWithZoomAndPanForIndexPath:(id)arg1;
- (CGRect)zoomTargetForIndexPath:(id)arg1;
- (BOOL)thumbnailContainerViewIsVisible;
- (BOOL)thumbnailContainerViewIsVisible:(id)arg1;
- (BOOL)thumbnailContainerViewSupportsReordering:(id)arg1;
- (void)thumbnailContainerView:(id)arg1 moveItemFromIndex:(long long)arg2 toIndex:(long long)arg3;
- (NSUInteger)thumbnailContainerViewNumberOfItems:(id)arg1;
- (NSUInteger)thumbnailContainerViewCurrentIndex:(id)arg1;
- (void)thumbnailContainerViewDecrementCurrentIndex:(id)arg1;
- (void)thumbnailContainerViewIncrementCurrentIndex:(id)arg1;
- (BOOL)accessibilityScrollLeftPage;
- (BOOL)accessibilityScrollRightPage;
- (id)_accessibilitySpeakThisElementsAndStrings;
- (void)speakAccessibilityAnnouncementForMovingItemFromIndexPath:(id)arg1 toIndexPath:(id)arg2;
- (void)speakAccessibilityAnnouncementForReorderIfNecessaryForProposedIndexPath:(id)arg1;
- (void)suppressImageHairlineThickeningForBarButtonItems:(id)arg1;
- (void)updateForAccessibilityDarkerSystemColors;
- (BOOL)accessibilityPerformEscape;
- (void)updateImageViewAccessibilityForPageContentViewController:(id)arg1;
- (void)updateFilterButtonItemAccessibilityInfo;
- (void)setupAccessibilityInfo;
- (void)_pageViewControllerDidFinishTransitions:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)collectionView:(id)arg1 moveItemAtIndexPath:(id)arg2 toIndexPath:(id)arg3;
- (BOOL)collectionView:(id)arg1 canMoveItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (void)handleAccessibilityLongPressOnCollectionTitle:(id)arg1;
- (void)respondToThumbnailLongPressGesture:(id)arg1;
- (BOOL)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (void)delete:(id)arg1;
- (void)copy:(id)arg1;
- (void)share:(id)arg1;
- (void)respondToImageLongPressGesture:(id)arg1;
- (id)rootView;
- (CGRect)targetViewRect;
- (CGSize)collectionView:(id)arg1 imageSizeAtIndex:(long long)arg2;
@property(readonly, nonatomic) ICDocCamReorderingThumbnailCollectionViewLayout *thumbnailCollectionViewLayout;
- (void)collectionNameTapped:(id)arg1;
- (void)showPrimaryControllerForNotes:(id)arg1 animated:(BOOL)arg2;
- (BOOL)filterViewControllerApplyToAll:(short)arg1;
- (BOOL)filterViewControllerCanApplyToAll:(short)arg1;
- (BOOL)filterViewControllerDidSelectFilter:(short)arg1;
- (id)imageForDocInfo:(id)arg1 newFilter:(short)arg2;
- (void)changePage:(long long)arg1;
- (void)updatePageIndicatorForPageIndex:(long long)arg1;
- (void)setCurrentThumbnailItem:(NSUInteger)arg1 animated:(BOOL)arg2;
- (void)pageViewController:(id)arg1 didFinishAnimating:(BOOL)arg2 previousViewControllers:(id)arg3 transitionCompleted:(BOOL)arg4;
- (void)pageViewController:(id)arg1 willTransitionToViewControllers:(id)arg2;
- (id)viewControllerAtIndex:(NSUInteger)arg1;
- (double)normalizedPageViewControllerScrollPosition;
@property(readonly, nonatomic) BOOL shouldDisableSharrow;
@property(readonly, nonatomic) BOOL shouldDisableActions;
@property(readonly, nonatomic) BOOL isPageViewControllerScrolled;
- (id)pageViewController:(id)arg1 viewControllerAfterViewController:(id)arg2;
- (id)pageViewController:(id)arg1 viewControllerBeforeViewController:(id)arg2;
- (id)currentBackgroundColor;
- (BOOL)isShowingBarsForZoomablePageContentViewController:(id)arg1;
- (void)switchBarVisibilityForZoomablePageContentViewController:(id)arg1;
- (void)showBarsForZoomablePageContentViewController:(id)arg1;
- (void)hideBarsForZoomablePageContentViewController:(id)arg1;
- (void)pencilDownInZoomablePageContentViewController:(id)arg1;
- (id)truncatedString:(id)arg1 clipLength:(NSUInteger)arg2;
- (void)selectFilterButtons;
- (void)deselectFilterButtons;
- (void)didDismissMarkupViewController;
- (void)startMarkupViewController;
- (void)showViewControllerAtIndex:(NSUInteger)arg1 animated:(BOOL)arg2;
- (void)deleteCurrentPage;
- (id)makeUIImageFromCIImage:(id)arg1;
- (void)deleteButtonAction:(id)arg1;
- (void)filterButtonAction:(id)arg1;
- (void)rotateCurrentImage;
- (void)rotateAction:(id)arg1;
- (BOOL)imageIsPortrait:(id)arg1;
- (BOOL)currentImageHasMarkup;
- (void)alertAndDiscardMarkup;
@property(readonly, nonatomic) UIImageView *currentImageView;
- (id)currentPageContentViewController;
- (id)orientationString:(long long)arg1;
@property(readonly, nonatomic) id <DCScanDataDelegate> selectedScanDataDelegate;
@property(readonly, nonatomic) id <DCScanDataDelegate> scanCollectionDataDelegate;
- (void)shareAction:(id)arg1;
- (void)doneAction:(id)arg1;
- (void)retakeAction:(id)arg1;
- (void)recropButtonPressed:(id)arg1;
- (void)addImageAction:(id)arg1;
- (id)currentDocument;
- (void)updateDocumentImage:(id)arg1;
- (void)didUpdateDocumentImage:(id)arg1;
- (void)didUpdateDocumentInfoArrayNewCurrentDocument:(id)arg1;
- (void)didUpdateDocumentTitle:(id)arg1;
- (void)updateImage:(id)arg1 document:(id)arg2 withFilterType:(short)arg3;
- (void)hideFilterViewIfNecessary;
- (void)showFilterViewIfNecessary;
- (void)updatePageViewControllerConstraints:(BOOL)arg1 animationBlock:(id /* CDUnknownBlockType */)arg2 completionBlock:(id /* CDUnknownBlockType */)arg3;
- (long long)orientationRotated90DegreesFromOrientation:(long long)arg1;
- (void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)setImage:(id)arg1 forCell:(id)arg2 useResizedImage:(BOOL)arg3;
- (CGSize)frameSizeForImageSize:(CGSize)arg1;
- (void)setupThumbnailViewController;
- (void)recreateThumbnailContainerWithWidth:(double)arg1 leadingTrailingMargin:(double)arg2;
- (double)thumbnailToolbarHeight;
- (void)updateTitleView;
- (void)updateFilterViewLayoutIfNeeded;
- (void)updateStatusBarFromWindowLevel;
- (void)updateLayout;
- (void)traitCollectionDidChange:(id)arg1;
- (void)prepareForDismissal;
- (void)contentSizeCategoryDidChange:(id)arg1;
- (long long)preferredStatusBarUpdateAnimation;
- (BOOL)prefersStatusBarHidden;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewWillLayoutSubviews;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidLoad;
- (BOOL)cameraDisabled;
- (void)defaultsChanged;
- (BOOL)canBecomeFirstResponder;
- (id)undoManager;
- (long long)preferredStatusBarStyle;
- (void)dealloc;
- (id)initWithDelegate:(id)arg1 documentInfoCollection:(id)arg2 imageCache:(id)arg3 currentIndex:(long long)arg4 mode:(int)arg5;
- (id)croppedButNotFilteredImageForDocInfo:(id)arg1;
- (id)croppedButNotFilteredImageForDocumentAtIndex:(long long)arg1;
- (id)croppedAndFilteredmageForDocumentAtIndex:(long long)arg1;
- (CGSize)imageSizeForDocumentAtIndex:(long long)arg1;

@end

