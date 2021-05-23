/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/Swift-Protocol.h>

@class UIFocusAnimationCoordinator, UIFocusSystem, _UIFocusInputDeviceInfo;

@protocol _UIFocusUpdateRequesting <Swift>

@property (weak, nonatomic, readonly) UIFocusSystem *focusSystem;
@property (nonatomic, readonly) _Bool shouldPlayFocusSound;
@property (nonatomic, readonly) _Bool requiresNextFocusedItem;
@property (nonatomic, readonly) _Bool requiresEnvironmentValidation;
@property (nonatomic, readonly) _Bool allowsFocusingCurrentItem;
@property (nonatomic, readonly) _Bool allowsDeferral;
@property (nonatomic, readonly) _Bool allowsFocusRestoration;
@property (nonatomic, readonly) _Bool shouldPerformHapticFeedback;
@property (nonatomic, readonly) _UIFocusInputDeviceInfo *inputDeviceInfo;
@property (nonatomic, readonly) UIFocusAnimationCoordinator *animationCoordinator;

@end
