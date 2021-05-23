/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <SpringBoard/SBGestureSwitcherModifier.h>

@class NSString, SBHomeGestureDockSwitcherModifier;

@interface SBExternalHomeGestureFloatingSwitcherModifier : SBGestureSwitcherModifier

{
    SBHomeGestureDockSwitcherModifier *_dockModifier;
    long long _initialFloatingConfiguration;
    long long _interfaceOrientation;
    _Bool _stashed;
    struct CGRect _stashedContainerViewBounds;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)handleGestureEvent:(id)arg1;
- (void)didMoveToParentModifier:(id)arg1;
- (struct CGRect)containerViewBounds;
- (long long)layoutUpdateMode;
- (_Bool)isFloatingDockGesturePossible;
- (long long)currentFinalDestination;
- (id)initWithGestureID:(id)arg1 initialFloatingConfiguration:(long long)arg2 interfaceOrientation:(long long)arg3;
- (void)_updateForGestureDidBeginOrChangeWithEvent:(id)arg1;

@end
