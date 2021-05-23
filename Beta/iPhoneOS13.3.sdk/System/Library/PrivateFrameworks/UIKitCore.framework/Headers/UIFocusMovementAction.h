/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <BaseBoard/BSAction.h>

@class _UIFocusInputDeviceInfo, _UIFocusMovementInfo;

@interface UIFocusMovementAction : BSAction

@property (nonatomic, readonly) _UIFocusMovementInfo *focusMovementInfo;
@property (nonatomic, readonly) _UIFocusInputDeviceInfo *inputDeviceInfo;
@property (nonatomic, readonly) _Bool shouldPerformHapticFeedback;

- (long long)UIActionType;
- (id)initWithFocusMovementInfo:(id)arg1 inputDeviceInfo:(id)arg2 shouldPerformHapticFeedback:(_Bool)arg3;
- (id)initWithFocusMovementInfo:(id)arg1;

@end
