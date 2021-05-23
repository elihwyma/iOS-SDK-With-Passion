/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <SpringBoard/SBSwitcherModifier.h>

@class NSUUID, SBGestureSwitcherModifierEvent;

@interface SBGestureSwitcherModifier : SBSwitcherModifier

{
    NSUUID *_gestureID;
    SBGestureSwitcherModifierEvent *_lastGestureEvent;
    unsigned long long _gesturePhase;
}

@property (nonatomic, readonly) unsigned long long gesturePhase;

- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)handleEvent:(id)arg1;
- (id)handleGestureEvent:(id)arg1;
- (_Bool)isPreparingLayout;
- (_Bool)isUpdatingLayout;
- (long long)layoutUpdateMode;
- (_Bool)clipsToUnobscuredMarginAtIndex:(unsigned long long)arg1;
- (double)visibleMarginForItemContainerAtIndex:(unsigned long long)arg1;
- (id)handleMainTransitionEvent:(id)arg1;
- (id)initWithGestureID:(id)arg1;

@end
