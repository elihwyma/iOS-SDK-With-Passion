/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <SpringBoard/SBSwitcherModifier.h>

@class NSString, SBAppLayout, SBGridLayoutSwitcherModifier, _SBGridFloorSwitcherModifier;

@protocol SBFluidSwitcherScrollProvidingDelegate;

@interface SBGridSwitcherModifier : SBSwitcherModifier

{
    SBGridLayoutSwitcherModifier *_gridLayoutModifier;
    _SBGridFloorSwitcherModifier *_floorModifier;
    unsigned long long _ongoingAppLayoutRemovals;
    SBAppLayout *_activeAppLayoutInSwitcher;
    id <SBFluidSwitcherScrollProvidingDelegate> _scrollDelegate;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (weak, nonatomic) id <SBFluidSwitcherScrollProvidingDelegate> scrollDelegate;
@property (nonatomic, readonly) unsigned long long numberOfRows;
@property (nonatomic, readonly) double effectiveHorizontalSpacing;

- (_Bool)respondsToSelector:(SEL)arg1;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (void)didMoveToParentModifier:(id)arg1;
- (id)handleMainTransitionEvent:(id)arg1;
- (id)handleRemovalEvent:(id)arg1;
- (id)handleTapAppLayoutEvent:(id)arg1;
- (id)handleTapOutsideToDismissEvent:(id)arg1;
- (id)gridLayoutModifier;

@end
