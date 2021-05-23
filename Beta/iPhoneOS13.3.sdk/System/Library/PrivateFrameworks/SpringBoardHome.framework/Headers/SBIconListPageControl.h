/*
 Image: /System/Library/PrivateFrameworks/SpringBoardHome.framework/SpringBoardHome
 */

#import <UIKit/UIPageControl.h>

@class NSArray, SBIconPageIndicatorImageSetCache, SBIconPageIndicatorImageSetResult, _UILegibilitySettings;

@protocol SBIconListPageControlDelegate;

@interface SBIconListPageControl : UIPageControl

{
    _Bool _hasSetLegibility;
    double _cachedDefaultHeight;
    SBIconPageIndicatorImageSetResult *_pageIndicatorImageSets;
    SBIconPageIndicatorImageSetResult *_searchIndicatorImageSets;
    _Bool _shouldShowSearchIndicator;
    _Bool _legibilityEnabled;
    _UILegibilitySettings *_legibilitySettings;
    id <SBIconListPageControlDelegate> _delegate;
    SBIconPageIndicatorImageSetCache *_imageSetCache;
    NSArray *_touchIgnoreRects;
}

@property (nonatomic) _Bool shouldShowSearchIndicator;
@property (nonatomic, getter=isLegibilityEnabled) _Bool legibilityEnabled;
@property (weak, nonatomic) id <SBIconListPageControlDelegate> delegate;
@property (retain, nonatomic) SBIconPageIndicatorImageSetCache *imageSetCache;
@property (nonatomic, readonly) double defaultHeight;
@property (nonatomic, readonly) double defaultIndicatorHeight;
@property (retain, nonatomic) _UILegibilitySettings *legibilitySettings;
@property (copy, nonatomic) NSArray *touchIgnoreRects;

- (void)setFrame:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)_invalidateIndicators;
- (id)_indicatorViewEnabled:(_Bool)arg1 index:(long long)arg2;
- (void)_transitionIndicator:(id)arg1 toEnabled:(_Bool)arg2 index:(long long)arg3;
- (id)_searchIndicatorImage:(_Bool)arg1;
- (id)_iconListIndicatorImage:(_Bool)arg1;
- (void)_setIndicatorImage:(id)arg1 toEnabled:(_Bool)arg2 index:(long long)arg3;

@end
