/*
 Image: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
 */

#import <TVMLKit/_TVBgImageLoadingViewController.h>

#import <TVMLKit/Swift-Protocol.h>

@class CALayer, IKAudioElement, IKImageElement, IKViewElement, NSArray, NSIndexPath, NSString, UICollectionView, UIImage, UIImageView, UIView, UIViewController, _TVProductCollectionViewCell;

__attribute__((visibility("hidden")))
@interface _TVProductTemplateController : _TVBgImageLoadingViewController <Swift>

{
    IKViewElement *_templateElement;
    IKImageElement *_bgImageElement;
    IKImageElement *_heroImageElement;
    UIImage *_bgImage;
    UIImageView *_bgImageView;
    CALayer *_bgBlurSublayer;
    UIView *_backdropView;
    IKViewElement *_backdropTintElement;
    UIView *_backdropTintView;
    UIViewController *_backdropTintViewController;
    UIImageView *_vignetteView;
    UIImageView *_tvVignetteView;
    IKAudioElement *_bgAudioElement;
    IKViewElement *_productBannerElement;
    IKViewElement *_infoListElement;
    IKViewElement *_titleElement;
    UICollectionView *_collectionView;
    UIViewController *_bannerViewController;
    NSArray *_viewControllers;
    NSArray *_rowSpacingMetricsList;
    double _productBannerHeight;
    _Bool _isPartialScrollingTemplate;
    NSIndexPath *_autoHighlightIndexPath;
    _Bool _fadedIn;
    double _impressionThreshold;
    _Bool _preloadOnLayout;
    struct CGSize _preloadContentSize;
    UIImageView *_topHeroImageView;
    UIView *_topHeroSeparatorView;
    UIImageView *_topHeroGradientView;
    _Bool _topHeroImageVisible;
    _Bool _lightStatusBar;
    IKImageElement *_topHeroImageElement;
    double _largeTitleHeight;
    _Bool _sportsProductTemplate;
    _TVProductCollectionViewCell *_bannerCell;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)loadView;
- (id)preferredFocusEnvironments;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)viewDidLayoutSubviews;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)animationDidStop:(id)arg1 finished:(_Bool)arg2;
- (double)_largeTitleHeight;
- (long long)_blurEffectStyle;
- (long long)preferredStatusBarUpdateAnimation;
- (long long)preferredStatusBarStyle;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (_Bool)collectionView:(id)arg1 shouldHighlightItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didHighlightItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 didEndDisplayingCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (id)indexPathForPreferredFocusedViewInCollectionView:(id)arg1;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForHeaderInSection:(long long)arg3;
- (struct UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3;
- (_Bool)automaticallyAdjustsScrollViewInsets;
- (void)updateWithViewElement:(id)arg1;
- (struct CGSize)_backgroundImageProxySize;
- (id)_backgroundImageProxy;
- (_Bool)_backgroundImageRequiresBlur;
- (void)_configureWithBgImage:(id)arg1 backdropImage:(id)arg2;
- (void)_cancelImpressionsUpdate;
- (id)impressionableElementsContainedInDocument:(id)arg1;
- (void)_configureBackgroundTintView;
- (void)_updateBackgroundTintView;
- (void)_updateBackgroundTintViewEffects;
- (struct CGSize)_maxContentSize;
- (void)updateWithProductTemplate:(id)arg1;
- (void)_configureWithBgElement:(id)arg1;
- (void)_updateImpressions;
- (void)_recordImpressionsForVisibleView;
- (_Bool)_isBackdropNeeded;
- (void)_configureTopHeroImage:(id)arg1;
- (id)_spacingMetricsForViewControllers:(id)arg1 contentSize:(struct CGSize *)arg2;
- (void)_configureWithBannerElement:(id)arg1;
- (_Bool)_shouldUsePartialScrollingTemplate;
- (id)_adamIDForElement:(id)arg1;
- (id)_canonicalIDForElement:(id)arg1;
- (_Bool)_shouldShowTopHeroImage;
- (_Bool)_sportsLandscapePhone;
- (void)_updateTopHeroImageOverlay;
- (void)configureAppearanceTransition;
- (struct CGSize)_topHeroImageViewSize;
- (long long)_overrideLargeTitleDisplayMode;
- (struct UIEdgeInsets)_cellMarginForIndex:(long long)arg1 partialMargins:(struct UIEdgeInsets *)arg2;
- (_Bool)_sportsLandscapePhoneIsOverlaySection:(id)arg1;
- (void)_updateTopHeroImageVisibility:(id)arg1;
- (unsigned long long)_lastFocusableCellIndex;
- (id)_yOffsetForView:(id)arg1 withScrollView:(id)arg2 targetYOffset:(double)arg3;
- (id)_relatedSectionHeaderView;

@end
