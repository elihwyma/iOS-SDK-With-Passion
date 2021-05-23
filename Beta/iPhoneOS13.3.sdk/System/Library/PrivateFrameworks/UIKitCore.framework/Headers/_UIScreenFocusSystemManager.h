/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

#import <UIKitCore/Swift-Protocol.h>

@class BKSHIDEventDeliveryPolicyObserver, NSString, UIFocusSystem, UIScreen, _UIFocusScrollManager;

__attribute__((visibility("hidden")))
@interface _UIScreenFocusSystemManager : NSObject <Swift>

{
    BKSHIDEventDeliveryPolicyObserver *_observer;
    _Bool _allowsForwardingFocusMovementActions;
    UIScreen *_screen;
    UIFocusSystem *_focusSystem;
    _UIFocusScrollManager *_scrollManager;
}

@property (nonatomic, getter=_uiktest_allowsForwardingFocusMovementActions, setter=_uiktest_setAllowsForwardingFocusMovementActions:) _Bool allowsForwardingFocusMovementActions;
@property (weak, nonatomic, readonly) UIScreen *screen;
@property (nonatomic, readonly) UIFocusSystem *focusSystem;
@property (nonatomic, readonly) _UIFocusScrollManager *scrollManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (id)_preferredFocusEnvironmentsForFocusSystem:(id)arg1;
- (_Bool)_focusSystem:(id)arg1 prefersDeferralForFocusUpdateInContext:(id)arg2;
- (_Bool)_focusSystem:(id)arg1 shouldRestoreFocusInContext:(id)arg2;
- (void)_focusSystem:(id)arg1 didFinishUpdatingFocusInContext:(id)arg2;
- (id)_focusMapContainerForFocusSystem:(id)arg1;
- (id)_focusItemContainerForFocusSystem:(id)arg1;
- (_Bool)_handleFailedFocusMovementRequest:(id)arg1 withPerformer:(id)arg2;
- (void)observerDeliveryPolicyDidChange:(id)arg1;
- (_Bool)_shouldForwardFocusMovementRequest:(id)arg1;
- (id)initWithScreen:(id)arg1 scrollManager:(id)arg2;

@end
