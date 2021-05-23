/*
 Image: /System/Library/PrivateFrameworks/SpringBoardHome.framework/SpringBoardHome
 */

#import <SpringBoardHome/SBIconImageView.h>

@class NSHashTable, NSMutableArray, NSString, SBFloatyFolderView, UIView, _SBIconGridWrapperView;

@interface SBFolderIconImageView : SBIconImageView

{
    UIView *_backgroundView;
    UIView *_solidColorBackgroundView;
    UIView *_pageGridContainer;
    _SBIconGridWrapperView *_leftWrapperView;
    _SBIconGridWrapperView *_rightWrapperView;
    NSMutableArray *_pageElements;
    unsigned long long _currentPageIndex;
    SBFloatyFolderView *_crossfadeFolderView;
    UIView *_crossfadeScalingView;
    _Bool _animating;
    NSHashTable *_imageUpdateDisableAssertions;
    unsigned long long _transitionToken;
    _Bool _hasCustomBackgroundView;
    unsigned long long _backgroundStyle;
    unsigned long long _currentBackgroundStyle;
}

@property (nonatomic, readonly) unsigned long long concreteBackgroundStyle;
@property (nonatomic) unsigned long long currentBackgroundStyle;
@property (nonatomic) unsigned long long backgroundStyle;
@property (nonatomic, readonly) unsigned long long currentPageIndex;
@property (nonatomic, readonly, getter=isAnimating) _Bool animating;
@property (retain, nonatomic) UIView *backgroundView;
@property (nonatomic, readonly) _Bool hasCustomBackgroundView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (void)prepareForReuse;
- (id)snapshot;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (id)contentsImage;
- (void)_setAnimating:(_Bool)arg1;
- (struct CGSize)_interPageSpacing;
- (void)setBackgroundScale:(double)arg1;
- (unsigned long long)visibleMiniIconListIndex;
- (void)scrollToTopOfPage:(unsigned long long)arg1 animated:(_Bool)arg2;
- (void)prepareToCrossfadeWithFloatyFolderView:(id)arg1 allowFolderInteraction:(_Bool)arg2;
- (void)setIconGridImageAlpha:(double)arg1;
- (void)setFloatyFolderCrossfadeFraction:(double)arg1;
- (void)cleanupAfterFloatyFolderCrossfade;
- (struct CGRect)visibleImageRelativeFrameForMiniIconAtIndex:(unsigned long long)arg1;
- (void)scrollToGapOrTopIfFullOfPage:(unsigned long long)arg1 animated:(_Bool)arg2;
- (void)scrollToFirstGapAnimated:(_Bool)arg1;
- (void)scrollToTopOfFirstPageAnimated:(_Bool)arg1;
- (id)_folderIconImageCache;
- (void)setIcon:(id)arg1 location:(id)arg2 animated:(_Bool)arg3;
- (void)updateImageAnimated:(_Bool)arg1;
- (void)iconViewLegibilitySettingsDidChange;
- (void)iconViewFolderIconImageCacheDidChange;
- (unsigned long long)visibleMiniIconCount;
- (unsigned long long)firstVisibleMiniIconIndex;
- (unsigned long long)centerVisibleMiniIconIndex;
- (unsigned long long)lastVisibleMiniIconIndex;
- (struct CGRect)frameForMiniIconAtIndex:(unsigned long long)arg1;
- (void)setBackgroundAndIconGridImageAlpha:(double)arg1;
- (id)disableImageUpdatesForReason:(id)arg1;
- (id)_folderIcon;
- (id)_generateSquareContentsImage;
- (void)fulfillGridImageForPageElement:(id)arg1;
- (void)_updateRasterization;
- (void)_updateAccessibilityBackgroundContrast;
- (void)_updateCurrentBackgroundStyle;
- (void)_setPageElements:(id)arg1;
- (struct CGSize)_interiorGridSizeClipRect;
- (void)_performScrollingDirection:(long long)arg1 targetPageIndex:(unsigned long long)arg2 targetPageScrollRow:(unsigned long long)arg3 newLeftElement:(id)arg4 newRightElement:(id)arg5 animated:(_Bool)arg6;
- (id)representedListLayout;
- (id)_currentPageElement;
- (struct CGRect)frameForMiniIconAtIndexPath:(id)arg1;
- (void)_showLeftMinigrid;
- (void)_showRightMinigrid;
- (Class)_iconGridImageClass;
- (void)_setupGridViewsInDefaultConfiguration;
- (void)folderIconImageCache:(id)arg1 didUpdateImagesForFolderIcon:(id)arg2;
- (void)invalidateImageUpdatesAssertion:(id)arg1;

@end
