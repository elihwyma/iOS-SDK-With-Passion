/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIControl.h>

@class NSMutableArray, UIColor, UIImage, UIVisualEffectView, _UILegibilitySettings;

@interface UIPageControl : UIControl

{
    long long _lastUserInterfaceIdiom;
    NSMutableArray *_indicators;
    long long _currentPage;
    long long _displayedPage;
    struct {
        unsigned int hideForSinglePage:1;
        unsigned int defersCurrentPageDisplay:1;
    } _pageControlFlags;
    UIImage *_currentPageImage;
    UIImage *_pageImage;
    NSMutableArray *_currentPageImages;
    NSMutableArray *_pageImages;
    UIVisualEffectView *_backgroundVisualEffectView;
    UIColor *_currentPageIndicatorTintColor;
    UIColor *_pageIndicatorTintColor;
    _UILegibilitySettings *_legibilitySettings;
    long long _numberOfPages;
}

@property (nonatomic, getter=_legibilityStyle, setter=_setLegibilityStyle:) long long legibilityStyle;
@property (retain, nonatomic, getter=_legibilitySettings, setter=_setLegibilitySettings:) _UILegibilitySettings *legibilitySettings;
@property (nonatomic) long long numberOfPages;
@property (nonatomic) long long currentPage;
@property (nonatomic) _Bool hidesForSinglePage;
@property (nonatomic) _Bool defersCurrentPageDisplay;
@property (retain, nonatomic) UIColor *pageIndicatorTintColor;
@property (retain, nonatomic) UIColor *currentPageIndicatorTintColor;

+ (_Bool)doesOverrideMethod:(SEL)arg1 inBaseClass:(Class)arg2;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (struct CGSize)intrinsicContentSize;
- (id)initWithFrame:(struct CGRect)arg1;
- (_Bool)isElementAccessibilityExposedToInterfaceBuilder;
- (_Bool)canBecomeFocused;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (void)_populateArchivedSubviews:(id)arg1;
- (unsigned long long)_controlEventsForActionTriggered;
- (void)_didChangeFromIdiom:(long long)arg1 onScreen:(id)arg2 traverseHierarchy:(_Bool)arg3;
- (_Bool)_contentHuggingDefault_isUsuallyFixedHeight;
- (void)updateCurrentPageDisplay;
- (long long)_displayedPage;
- (id)_effectiveContentView;
- (_Bool)_contentHuggingDefault_isUsuallyFixedWidth;
- (void)endTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (id)_pageIndicatorImageForPage:(long long)arg1;
- (id)_pageIndicatorCurrentImageForPage:(long long)arg1;
- (void)_commonPageControlInit;
- (void)_invalidateIndicators;
- (id)_activePageIndicatorImage;
- (id)_pageIndicatorImage;
- (void)_cachePageIndicatorImages;
- (id)_indicatorViewEnabled:(_Bool)arg1 index:(long long)arg2;
- (void)_setCurrentPage:(long long)arg1;
- (void)_setDisplayedPage:(long long)arg1;
- (void)_updateCurrentPageDisplay;
- (double)_indicatorSpacing;
- (_Bool)_hasCustomImageForPage:(long long)arg1 enabled:(_Bool)arg2;
- (struct CGRect)_indicatorFrameAtIndex:(long long)arg1;
- (struct CGRect)_modernBounds;
- (void)_transitionIndicator:(id)arg1 toEnabled:(_Bool)arg2 index:(long long)arg3;
- (id)_cachedPageIndicatorCurrentImageForPage:(long long)arg1;
- (id)_cachedPageIndicatorImageForPage:(long long)arg1;
- (void)_modernTransitionIndicator:(id)arg1 toEnabled:(_Bool)arg2 index:(long long)arg3 legible:(_Bool)arg4;
- (_Bool)_shouldDrawLegibly;
- (void)_transitionIndicator:(id)arg1 toEnabled:(_Bool)arg2 index:(long long)arg3 legible:(_Bool)arg4;
- (id)_indicatorViewEnabled:(_Bool)arg1 index:(long long)arg2 legible:(_Bool)arg3;
- (void)_drawModernIndicatorInView:(id)arg1 enabled:(_Bool)arg2;
- (id)_modernIndicatorImageEnabled:(_Bool)arg1;
- (id)_modernColorEnabled:(_Bool)arg1;
- (double)_modernCornerRadius;
- (id)_createModernIndicatorImageFromView:(id)arg1;
- (struct CGSize)sizeForNumberOfPages:(long long)arg1;

@end
