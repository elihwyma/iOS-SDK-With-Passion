/*
 Image: /System/Library/PrivateFrameworks/SpringBoardHome.framework/SpringBoardHome
 */

#import <SpringBoardHome/SBFolderView.h>

#import <SpringBoardHome/Swift-Protocol.h>

@class NSMapTable, NSMutableArray, NSString, SBFloatyFolderBackgroundClipView, SBHFolderSettings, SBIconView, UILongPressGestureRecognizer, UIPinchGestureRecognizer, UITapGestureRecognizer;

@interface SBFloatyFolderView : SBFolderView <Swift>

{
    SBFloatyFolderBackgroundClipView *_scrollClipView;
    NSMutableArray *_pageBackgroundViews;
    NSMapTable *_pageBackgroundViewsForIconListViews;
    long long _scalingViewPageIndex;
    UITapGestureRecognizer *_tapGesture;
    UIPinchGestureRecognizer *_pinchGesture;
    UILongPressGestureRecognizer *_longPressGesture;
    SBHFolderSettings *_folderSettings;
    SBIconView *_cachedHiddenIconView;
    _Bool _displayingMultipleIconLists;
    _Bool _displaysMultipleIconListsInLandscapeOrientation;
    _Bool _convertingIconListStyle;
    _Bool _animatingRotation;
    unsigned long long _backgroundEffect;
}

@property (nonatomic, readonly) _Bool displaysMultipleIconListsInLandscapeOrientation;
@property (nonatomic, getter=isDisplayingMultipleIconLists) _Bool displayingMultipleIconLists;
@property (nonatomic, getter=isConvertingIconListStyle) _Bool convertingIconListStyle;
@property (nonatomic, getter=isAnimatingRotation) _Bool animatingRotation;
@property (nonatomic, readonly) double cornerRadius;
@property (nonatomic) unsigned long long backgroundEffect;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (double)defaultCornerRadius;
+ (id)defaultIconLocation;
+ (Class)_scrollViewClass;
+ (unsigned long long)countOfAdditionalPagesToKeepVisibleInOneDirection;

- (void)dealloc;
- (id)initWithConfiguration:(id)arg1;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (void)setCornerRadius:(double)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (_Bool)_showsTitle;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)setBackgroundAlpha:(double)arg1;
- (void)setLegibilitySettings:(id)arg1;
- (void)_orientationDidChange:(long long)arg1;
- (void)settings:(id)arg1 changedValueForKey:(id)arg2;
- (struct CGPoint)_scrollView:(id)arg1 adjustedOffsetForOffset:(struct CGPoint)arg2 translation:(struct CGPoint)arg3 startPoint:(struct CGPoint)arg4 locationInView:(struct CGPoint)arg5 horizontalVelocity:(inout double *)arg6 verticalVelocity:(inout double *)arg7;
- (void)_layoutSubviews;
- (void)_handleLongPressGesture:(id)arg1;
- (void)_handlePinchGesture:(id)arg1;
- (double)_titleFontSize;
- (struct CGPoint)visibleFolderRelativeImageCenterForIcon:(id)arg1;
- (id)borrowScalingView;
- (void)returnScalingView;
- (void)updateAccessibilityTintColors;
- (void)willTransitionAnimated:(_Bool)arg1 withSettings:(id)arg2;
- (void)fadeContentForMagnificationFraction:(double)arg1;
- (void)didTransitionAnimated:(_Bool)arg1;
- (void)fadeContentForMinificationFraction:(double)arg1;
- (id)iconListViewAtPoint:(struct CGPoint)arg1;
- (void)transitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (id)accessibilityTintColorForBackgroundView:(id)arg1;
- (id)legibilitySettingsForIconListViews;
- (struct CGRect)_iconListFrameForPageRect:(struct CGRect)arg1 atIndex:(unsigned long long)arg2;
- (void)_updateScrollingState:(_Bool)arg1;
- (double)scrollableWidthForVisibleColumnRange;
- (void)_removeIconListView:(id)arg1;
- (void)_addIconListView:(id)arg1;
- (void)_currentPageIndexDidChange;
- (struct CGRect)_frameForScalingView;
- (void)_updateScalingViewFrame;
- (void)_updateIconListContainment:(id)arg1 atIndex:(unsigned long long)arg2;
- (double)minimumVisibleScrollOffset;
- (long long)iconVisibilityHandling;
- (_Bool)locationCountsAsInsideFolder:(struct CGPoint)arg1;
- (double)_offsetToCenterPageControlInSpaceForPageControl;
- (void)_configureGestures;
- (_Bool)_shouldConvertToMultipleIconListsInLandscapeOrientation;
- (void)_convertToMultipleIconListsAnimated:(_Bool)arg1;
- (void)accessibilityReduceTransparencyDidChange:(id)arg1;
- (id)floatyFolderConfiguration;
- (void)enumeratePageBackgroundViewsUsingBlock:(CDUnknownBlockType)arg1;
- (id)_newPageBackgroundView;
- (void)_convertToSingleIconListAnimated:(_Bool)arg1;
- (double)_titleVerticalOffsetForOrientation:(long long)arg1;
- (struct CGRect)_pageBackgroundFrameForPageRect:(struct CGRect)arg1;
- (void)_updateScalingViewLocation;
- (void)findHiddenIconView;
- (void)_setScrollViewNeedsToClipCorners:(_Bool)arg1;
- (double)_rubberBandIntervalForOverscroll;
- (void)_handleOutsideTap:(id)arg1;
- (_Bool)_tapToCloseGestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;

@end
