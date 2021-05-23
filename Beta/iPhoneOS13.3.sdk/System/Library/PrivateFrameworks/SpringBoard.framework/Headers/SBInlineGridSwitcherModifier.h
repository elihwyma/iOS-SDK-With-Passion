/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <SpringBoard/SBSwitcherModifier.h>

#import <SpringBoard/Swift-Protocol.h>

@class NSString, SBGridLayoutSwitcherModifier, _SBInlineGridFloorSwitcherModifier;

@protocol SBFluidSwitcherScrollProvidingDelegate;

@interface SBInlineGridSwitcherModifier : SBSwitcherModifier <Swift>

{
    SBGridLayoutSwitcherModifier *_gridLayoutModifier;
    _SBInlineGridFloorSwitcherModifier *_floorModifier;
    unsigned long long _initialScrollAxis;
    struct CGSize _initialCardSize;
    double _initialCardScale;
    _Bool _hasScrolledToInitialAppLayoutForTransitionIntoSwitcher;
    unsigned long long _ongoingAppLayoutRemovals;
    _Bool _floating;
    _Bool _overlay;
    id <SBFluidSwitcherScrollProvidingDelegate> _scrollDelegate;
    NSString *_bundleIdentifier;
}

@property (copy, nonatomic, readonly) NSString *bundleIdentifier;
@property (nonatomic, readonly) unsigned long long scrollAxis;
@property (nonatomic, readonly) struct CGSize fixedCardSize;
@property (nonatomic, readonly) double cardScale;
@property (nonatomic, readonly, getter=isFloating) _Bool floating;
@property (nonatomic, readonly, getter=isOverlay) _Bool overlay;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (weak, nonatomic) id <SBFluidSwitcherScrollProvidingDelegate> scrollDelegate;

- (id)forwardingTargetForSelector:(SEL)arg1;
- (unsigned long long)numberOfRows;
- (_Bool)isIndexVisible:(unsigned long long)arg1;
- (id)appExposeAccessoryButtonsBundleIdentifier;
- (id)initWithBundleIdentifier:(id)arg1 scrollAxis:(unsigned long long)arg2 fixedCardSize:(struct CGSize)arg3 cardScale:(double)arg4 floating:(_Bool)arg5 overlay:(_Bool)arg6;
- (void)didMoveToParentModifier:(id)arg1;
- (id)handleInlineTransitionEvent:(id)arg1;
- (id)handleRemovalEvent:(id)arg1;
- (id)handleTapAppLayoutEvent:(id)arg1;
- (id)handleTapOutsideToDismissEvent:(id)arg1;
- (id)gridLayoutModifier;
- (double)effectiveHorizontalSpacing;

@end
