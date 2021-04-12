//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SpringBoard/SBFluidSwitcherRootSwitcherModifier.h>

@class NSString;

@interface SBInlineAppExposeRootSwitcherModifier : SBFluidSwitcherRootSwitcherModifier
{
    long long _layoutRole;
    BOOL _overlay;
    NSString *_bundleIdentifier;
    UIRectCornerRadii _fullscreenCornerRadii;
}

@property(nonatomic) UIRectCornerRadii fullscreenCornerRadii; // @synthesize fullscreenCornerRadii=_fullscreenCornerRadii;
@property(readonly, copy, nonatomic) NSString *bundleIdentifier; // @synthesize bundleIdentifier=_bundleIdentifier;
// - (void).cxx_destruct;
- (id)insertionModifierForInsertionEvent:(id)arg1;
- (id)transitionModifierForInlineTransitionEvent:(id)arg1;
- (id)multitaskingModifierForEvent:(id)arg1;
- (id)floorModifierForTransitionEvent:(id)arg1;
- (id)newMultitaskingModifierFromMultitaskingModifier:(id)arg1;
- (double)floatingDockHeight;
- (id)initWithBundleIdentifier:(id)arg1 layoutRole:(long long)arg2 overlay:(BOOL)arg3;

@end

