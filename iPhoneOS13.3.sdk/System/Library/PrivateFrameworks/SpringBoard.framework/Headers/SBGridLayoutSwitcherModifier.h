//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SpringBoard/SBSwitcherModifier.h>

#import <SpringBoard/PTSettingsKeyObserver-Protocol.h>
#import <SpringBoard/SBFluidSwitcherScrollProviding-Protocol.h>

@class NSString;
@protocol SBFluidSwitcherScrollProvidingDelegate, SBGridLayoutSwitcherModifierDelegate;

@interface SBGridLayoutSwitcherModifier : SBSwitcherModifier <PTSettingsKeyObserver, SBFluidSwitcherScrollProviding>
{
    BOOL _usesFixedCardSize;
    id <SBFluidSwitcherScrollProvidingDelegate> _scrollDelegate;
    double _unroundedCardScale;
    id <SBGridLayoutSwitcherModifierDelegate> _gridDelegate;
    NSUInteger _scrollAxis;
    NSUInteger _fixedGroupingSize;
    NSString *_softFilteredBundleIdentifier;
    NSUInteger _alignment;
    NSUInteger _layoutDirection;
    CGSize _fixedCardSize;
}

@property(nonatomic) NSUInteger layoutDirection; // @synthesize layoutDirection=_layoutDirection;
@property(nonatomic) NSUInteger alignment; // @synthesize alignment=_alignment;
@property(copy, nonatomic) NSString *softFilteredBundleIdentifier; // @synthesize softFilteredBundleIdentifier=_softFilteredBundleIdentifier;
@property(nonatomic) CGSize fixedCardSize; // @synthesize fixedCardSize=_fixedCardSize;
@property(nonatomic, getter=isUsingFixedCardSize) BOOL usesFixedCardSize; // @synthesize usesFixedCardSize=_usesFixedCardSize;
@property(nonatomic) NSUInteger fixedGroupingSize; // @synthesize fixedGroupingSize=_fixedGroupingSize;
@property(nonatomic) NSUInteger scrollAxis; // @synthesize scrollAxis=_scrollAxis;
@property(nonatomic) __weak id <SBGridLayoutSwitcherModifierDelegate> gridDelegate; // @synthesize gridDelegate=_gridDelegate;
@property(nonatomic) double cardScale; // @synthesize cardScale=_unroundedCardScale;
@property(nonatomic) __weak id <SBFluidSwitcherScrollProvidingDelegate> scrollDelegate; // @synthesize scrollDelegate=_scrollDelegate;
// - (void).cxx_destruct;
- (id)_softFilteredAppLayouts;
- (CGSize)_scaledCardSize;
- (CGSize)_cardSize;
- (NSUInteger)_numberOfRows;
- (NSUInteger)_numberOfColumns;
- (CGRect)_frameWithScaleAppliedForIndex:(NSUInteger)arg1 ignoringScrollOffset:(BOOL)arg2;
- (double)_gridSwitcherPageScale;
- (double)_cardHeaderHeight;
- (NSUInteger)_columnForIndex:(NSUInteger)arg1;
- (NSUInteger)_rowForIndex:(NSUInteger)arg1;
- (double)_horizontalSpacing;
- (double)_verticalSpacing;
- (double)_trailingPadding;
- (double)_leadingPadding;
- (CGRect)_frameForIndex:(NSUInteger)arg1 ignoringScrollOffset:(BOOL)arg2;
@property(readonly, nonatomic) double effectiveHorizontalSpacing;
- (void)_applyPrototypeSettings;
- (BOOL)cardsNeedBackgroundWallpaperTreatment;
- (void)resetAdjustedScrollingState;
- (CGPoint)adjustedOffsetForOffset:(CGPoint)arg1 translation:(CGPoint)arg2 startPoint:(CGPoint)arg3 locationInView:(CGPoint)arg4 horizontalVelocity:(inout double )arg5 verticalVelocity:(inout double )arg6;
- (double)distanceToLeadingEdgeOfLeadingCardFromTrailingEdgeOfScreenWithVisibleIndexToStartSearch:(NSUInteger)arg1;
- (CGPoint)restingOffsetForScrollOffset:(CGPoint)arg1 velocity:(CGPoint)arg2;
- (CGPoint)contentOffsetForIndex:(NSUInteger)arg1 centered:(BOOL)arg2;
- (CGSize)fittedContentSize;
- (CGSize)contentSize;
- (BOOL)interpolatesDuringSwipeToKill;
- (double)minimumTranslationToKillIndex:(NSUInteger)arg1;
- (CGPoint)pagingOrigin;
- (double)cardCornerRadiusInSwitcher;
- (double)centerYOffsetWhenPresented;
- (CGSize)interpageSpacingForPaging;
- (BOOL)scrollViewPagingEnabled;
- (double)decelerationRate;
- (double)switcherCardScale;
- (double)snapshotScale;
- (NSUInteger)indexToScrollToAfterRemovingIndex:(NSUInteger)arg1;
- (NSUInteger)indexToScrollToAfterInsertingAtIndex:(NSUInteger)arg1;
- (BOOL)shouldBringCardToFrontDuringInsertionOrRemoval;
- (BOOL)shouldAnimateInsertionOrRemovalAtIndex:(NSUInteger)arg1;
- (UIRectCornerRadii)cardCornerRadiiForIndex:(NSUInteger)arg1;
- (double)shadowOffsetForIndex:(NSUInteger)arg1;
- (double)shadowOpacityForIndex:(NSUInteger)arg1;
- (double)titleOpacityForIndex:(NSUInteger)arg1;
- (double)titleAndIconOpacityForIndex:(NSUInteger)arg1;
- (double)darkeningAlphaForIndex:(NSUInteger)arg1;
- (double)opacityForIndex:(NSUInteger)arg1;
- (double)visibleMarginForItemContainerAtIndex:(NSUInteger)arg1;
- (BOOL)clipsToUnobscuredMarginAtIndex:(NSUInteger)arg1;
- (long long)layoutUpdateMode;
- (double)contentViewScale;
- (BOOL)isIndexVisible:(NSUInteger)arg1;
- (double)scaleForIndex:(NSUInteger)arg1;
- (CGRect)frameForIndex:(NSUInteger)arg1;
- (id)handleSwitcherSettingsChangedEvent:(id)arg1;
- (NSUInteger)numberOfRows;
- (void)didMoveToParentModifier:(id)arg1;
- (id)initWithScrollAxis:(NSUInteger)arg1 fixedGroupingSize:(NSUInteger)arg2 cardScale:(double)arg3 alignment:(NSUInteger)arg4 layoutDirection:(NSUInteger)arg5;

@end

