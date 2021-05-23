/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <SpringBoard/SBFluidSwitcherRootSwitcherModifier.h>

@class NSString;

@interface SBInlineAppExposeRootSwitcherModifier : SBFluidSwitcherRootSwitcherModifier

{
    long long _layoutRole;
    _Bool _overlay;
    NSString *_bundleIdentifier;
    struct UIRectCornerRadii _fullscreenCornerRadii;
}

@property (copy, nonatomic, readonly) NSString *bundleIdentifier;
@property (nonatomic) struct UIRectCornerRadii fullscreenCornerRadii;

- (double)floatingDockHeight;
- (id)floorModifierForTransitionEvent:(id)arg1;
- (id)multitaskingModifierForEvent:(id)arg1;
- (id)newMultitaskingModifierFromMultitaskingModifier:(id)arg1;
- (id)insertionModifierForInsertionEvent:(id)arg1;
- (id)transitionModifierForInlineTransitionEvent:(id)arg1;
- (id)initWithBundleIdentifier:(id)arg1 layoutRole:(long long)arg2 overlay:(_Bool)arg3;

@end
