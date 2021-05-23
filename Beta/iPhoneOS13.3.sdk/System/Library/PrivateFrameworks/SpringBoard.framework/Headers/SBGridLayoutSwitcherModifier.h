/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <SpringBoard/SBSwitcherModifier.h>

#import <SpringBoard/Swift-Protocol.h>

@class NSString;

@protocol SBFluidSwitcherScrollProvidingDelegate, SBGridLayoutSwitcherModifierDelegate;

@interface SBGridLayoutSwitcherModifier : SBSwitcherModifier <Swift>

{
    _Bool _usesFixedCardSize;
    id <SBFluidSwitcherScrollProvidingDelegate> _scrollDelegate;
    double _unroundedCardScale;
    id <SBGridLayoutSwitcherModifierDelegate> _gridDelegate;
    unsigned long long _scrollAxis;
    unsigned long long _fixedGroupingSize;
    NSString *_softFilteredBundleIdentifier;
    unsigned long long _alignment;
    unsigned long long _layoutDirection;
    struct CGSize _fixedCardSize;
}

@property (nonatomic) unsigned long long alignment;
@property (nonatomic) unsigned long long layoutDirection;
@property (weak, nonatomic) id <SBGridLayoutSwitcherModifierDelegate> gridDelegate;
@property (nonatomic, readonly) double effectiveHorizontalSpacing;
@property (nonatomic) unsigned long long scrollAxis;
@property (nonatomic) unsigned long long fixedGroupingSize;
@property (nonatomic) double cardScale;
@property (nonatomic, getter=isUsingFixedCardSize) _Bool usesFixedCardSize;
@property (nonatomic) struct CGSize fixedCardSize;
@property (copy, nonatomic) NSString *softFilteredBundleIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (weak, nonatomic) id <SBFluidSwitcherScrollProvidingDelegate> scrollDelegate;

- (struct CGSize)contentSize;
- (unsigned long long)numberOfRows;
- (struct CGRect)frameForIndex:(unsigned long long)arg1;
- (double)decelerationRate;
- (unsigned long long)_numberOfRows;
- (struct CGPoint)pagingOrigin;
- (unsigned long long)_numberOfColumns;
- (double)_verticalSpacing;
- (double)contentViewScale;
- (double)switcherCardScale;
- (_Bool)isIndexVisible:(unsigned long long)arg1;
- (double)scaleForIndex:(unsigned long long)arg1;
- (double)opacityForIndex:(unsigned long long)arg1;
- (struct UIRectCornerRadii)cardCornerRadiiForIndex:(unsigned long long)arg1;
- (double)darkeningAlphaForIndex:(unsigned long long)arg1;
- (double)titleOpacityForIndex:(unsigned long long)arg1;
- (double)distanceToLeadingEdgeOfLeadingCardFromTrailingEdgeOfScreenWithVisibleIndexToStartSearch:(unsigned long long)arg1;
- (double)titleAndIconOpacityForIndex:(unsigned long long)arg1;
- (double)shadowOpacityForIndex:(unsigned long long)arg1;
- (void)didMoveToParentModifier:(id)arg1;
- (double)snapshotScale;
- (struct CGSize)fittedContentSize;
- (long long)layoutUpdateMode;
- (struct CGPoint)contentOffsetForIndex:(unsigned long long)arg1 centered:(_Bool)arg2;
- (_Bool)shouldAnimateInsertionOrRemovalAtIndex:(unsigned long long)arg1;
- (double)minimumTranslationToKillIndex:(unsigned long long)arg1;
- (_Bool)scrollViewPagingEnabled;
- (struct CGSize)interpageSpacingForPaging;
- (double)shadowOffsetForIndex:(unsigned long long)arg1;
- (_Bool)clipsToUnobscuredMarginAtIndex:(unsigned long long)arg1;
- (double)visibleMarginForItemContainerAtIndex:(unsigned long long)arg1;
- (struct CGPoint)restingOffsetForScrollOffset:(struct CGPoint)arg1 velocity:(struct CGPoint)arg2;
- (void)resetAdjustedScrollingState;
- (struct CGPoint)adjustedOffsetForOffset:(struct CGPoint)arg1 translation:(struct CGPoint)arg2 startPoint:(struct CGPoint)arg3 locationInView:(struct CGPoint)arg4 horizontalVelocity:(inout double *)arg5 verticalVelocity:(inout double *)arg6;
- (_Bool)cardsNeedBackgroundWallpaperTreatment;
- (void)_applyPrototypeSettings;
- (id)handleSwitcherSettingsChangedEvent:(id)arg1;
- (id)initWithScrollAxis:(unsigned long long)arg1 fixedGroupingSize:(unsigned long long)arg2 cardScale:(double)arg3 alignment:(unsigned long long)arg4 layoutDirection:(unsigned long long)arg5;
- (_Bool)interpolatesDuringSwipeToKill;
- (double)centerYOffsetWhenPresented;
- (double)cardCornerRadiusInSwitcher;
- (_Bool)shouldBringCardToFrontDuringInsertionOrRemoval;
- (unsigned long long)indexToScrollToAfterInsertingAtIndex:(unsigned long long)arg1;
- (unsigned long long)indexToScrollToAfterRemovingIndex:(unsigned long long)arg1;
- (double)_gridSwitcherPageScale;
- (struct CGRect)_frameForIndex:(unsigned long long)arg1 ignoringScrollOffset:(_Bool)arg2;
- (struct CGRect)_frameWithScaleAppliedForIndex:(unsigned long long)arg1 ignoringScrollOffset:(_Bool)arg2;
- (id)_softFilteredAppLayouts;
- (double)_horizontalSpacing;
- (double)_trailingPadding;
- (double)_leadingPadding;
- (struct CGSize)_scaledCardSize;
- (unsigned long long)_rowForIndex:(unsigned long long)arg1;
- (unsigned long long)_columnForIndex:(unsigned long long)arg1;
- (double)_cardHeaderHeight;
- (struct CGSize)_cardSize;

@end
