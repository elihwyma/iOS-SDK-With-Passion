/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIEvent.h>

@class NSHashTable, NSMutableSet, NSSet, UIPress;

@interface UIPressesEvent : UIEvent

{
    NSMutableSet *_allPresses;
    NSHashTable *_terminalEventRegistrants;
    UIPress *_triggeringPhysicalButton;
}

@property (retain, nonatomic) UIPress *_triggeringPhysicalButton;
@property (nonatomic, readonly) NSSet *allPresses;

- (id)description;
- (long long)type;
- (id)_init;
- (long long)subtype;
- (id)_windows;
- (void)_unregisterForTerminalEvent:(id)arg1;
- (void)_registerForTerminalEvent:(id)arg1;
- (id)_cloneEvent;
- (id)_gestureRecognizersForWindow:(id)arg1;
- (_Bool)_sendEventToGestureRecognizer:(id)arg1;
- (id)pressesForGestureRecognizer:(id)arg1;
- (void)_addPress:(id)arg1 forDelayedDelivery:(_Bool)arg2;
- (id)_physicalButtonsForGestureRecognizer:(id)arg1;
- (id)_physicalButtonsForGestureRecognizer:(id)arg1 withPhase:(long long)arg2;
- (id)_directionalPressWithStrongestForce;
- (void)_removePhysicalButton:(id)arg1;
- (id)_respondersForWindow:(id)arg1;
- (id)_physicalButtonsForResponder:(id)arg1 withPhase:(long long)arg2;
- (id)_allPresses;
- (id)physicalButtonsForWindow:(id)arg1;
- (id)_physicalButtonsForResponder:(id)arg1;
- (void)_addGesturesForPress:(id)arg1;
- (void)_cleanupAfterDispatch;
- (id)_terminalRegistrantsForPressType:(long long)arg1;

@end
