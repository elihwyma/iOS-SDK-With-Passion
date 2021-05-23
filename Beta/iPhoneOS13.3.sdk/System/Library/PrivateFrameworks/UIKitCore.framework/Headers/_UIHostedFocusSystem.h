/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIFocusSystem.h>

@protocol UIFocusEnvironment, _UIHostedFocusSystemDelegate;

__attribute__((visibility("hidden")))
@interface _UIHostedFocusSystem : UIFocusSystem

{
    _Bool _didSetFocusSoundGenerator;
    id <UIFocusEnvironment> _hostEnvironment;
}

@property (weak, nonatomic, readonly) id <UIFocusEnvironment> hostEnvironment;
@property (weak, nonatomic, getter=_delegate, setter=_setDelegate:) id <_UIHostedFocusSystemDelegate> delegate;

- (_Bool)_isEligibleForFocusInteraction;
- (id)_initWithHostEnvironment:(id)arg1;
- (_Bool)containsChildOfHostEnvironment:(id)arg1;
- (id)_hostFocusSystem;
- (_Bool)_requiresFocusedItemToHaveContainingView;
- (id)_focusSoundGenerator;
- (_Bool)_postsFocusUpdateNotifications;
- (void)_setFocusSoundGenerator:(id)arg1;

@end
