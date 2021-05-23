/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <SpringBoard/SBChainableModifier.h>

@class NSString;

@interface SBSwitcherModifier : SBChainableModifier

{
    long long _state;
}

@property (nonatomic) long long state;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)queryProtocol;
+ (id)contextProtocol;

- (id)init;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)handleEvent:(id)arg1;
- (id)handleGestureEvent:(id)arg1;
- (id)handleTimerEvent:(id)arg1;
- (id)handleInlineTransitionEvent:(id)arg1;
- (id)handleMainTransitionEvent:(id)arg1;
- (id)handleHomeGestureSettingsChangedEvent:(id)arg1;
- (id)handleSwitcherSettingsChangedEvent:(id)arg1;
- (id)handleRemovalEvent:(id)arg1;
- (id)handleTapAppLayoutEvent:(id)arg1;
- (id)handleTapOutsideToDismissEvent:(id)arg1;
- (id)handleAppExposeEvent:(id)arg1;
- (id)handleInsertionEvent:(id)arg1;
- (id)handleTetheredRemovalEvent:(id)arg1;
- (id)handleTetheredInsertionEvent:(id)arg1;
- (id)handleReduceMotionChangedEvent:(id)arg1;
- (double)distanceToLeadingEdgeOfLeadingCardFromTrailingEdgeOfScreenWithVisibleIndexToStartSearch:(unsigned long long)arg1 numberOfRows:(unsigned long long)arg2 padding:(double)arg3 layoutDirection:(unsigned long long)arg4;
- (struct CGRect)scaledFrameForIndex:(unsigned long long)arg1;
- (id)handleSwipeToKillEvent:(id)arg1;
- (id)handleMedusaSettingsChangedEvent:(id)arg1;
- (id)_forwardEventToChildren:(id)arg1;

@end
