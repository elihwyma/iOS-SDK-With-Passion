/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <SpringBoard/SBSwitcherModifier.h>

@class NSString, SBGridLayoutSwitcherModifier;

@protocol SBFluidSwitcherScrollProviding, SBFluidSwitcherScrollProvidingDelegate;

@interface SBAppExposeGridSwitcherModifier : SBSwitcherModifier

{
    SBGridLayoutSwitcherModifier *_gridLayoutModifier;
    unsigned long long _initialNumberOfRows;
    double _initialCardScale;
    _Bool _hasForegroundMainApp;
    _Bool _isTethered;
    id <SBFluidSwitcherScrollProvidingDelegate> _scrollDelegate;
    SBSwitcherModifier<SBFluidSwitcherScrollProviding> *_multitaskingModifier;
    NSString *_appExposeBundleID;
}

@property (nonatomic, readonly) _Bool isTethered;
@property (nonatomic, readonly) SBSwitcherModifier<SBFluidSwitcherScrollProviding> *multitaskingModifier;
@property (nonatomic, readonly) unsigned long long numberOfRows;
@property (nonatomic, readonly) double cardScale;
@property (copy, nonatomic, readonly) NSString *appExposeBundleID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (weak, nonatomic) id <SBFluidSwitcherScrollProvidingDelegate> scrollDelegate;
@property (nonatomic, readonly) double effectiveHorizontalSpacing;

- (_Bool)respondsToSelector:(SEL)arg1;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (struct CGSize)contentSize;
- (_Bool)isScrollEnabled;
- (double)dimmingAlpha;
- (long long)backdropBlurType;
- (struct _NSRange)fullSizeSnapshotsRange;
- (double)backdropBlurProgress;
- (double)distanceToLeadingEdgeOfLeadingCardFromTrailingEdgeOfScreenWithVisibleIndexToStartSearch:(unsigned long long)arg1;
- (void)didMoveToParentModifier:(id)arg1;
- (_Bool)wantsDockBehaviorAssertion;
- (_Bool)isTetheredScrollingEnabled;
- (id)handleMainTransitionEvent:(id)arg1;
- (id)handleRemovalEvent:(id)arg1;
- (id)handleTapAppLayoutEvent:(id)arg1;
- (id)handleTapOutsideToDismissEvent:(id)arg1;
- (unsigned long long)insertionStyleForInsertingAppLayout:(id)arg1;
- (id)handleInsertionEvent:(id)arg1;
- (id)handleTetheredRemovalEvent:(id)arg1;
- (id)handleTetheredInsertionEvent:(id)arg1;
- (id)initWithTetheredMode:(_Bool)arg1 multitaskingModifier:(id)arg2 appExposeBundleID:(id)arg3;
- (unsigned long long)_gridLayoutNumberOfRows;
- (double)_gridLayoutScale;
- (_Bool)_isGridified;
- (double)leadingPadding;
- (double)trailingPadding;
- (id)initWithTetheredMode:(_Bool)arg1 multitaskingModifier:(id)arg2 appExposeBundleID:(id)arg3 initialNumberOfRows:(unsigned long long)arg4 initialCardScale:(double)arg5;

@end
