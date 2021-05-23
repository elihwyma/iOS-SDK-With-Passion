/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/_UILongPressTimeoutClickInteractionDriver.h>

__attribute__((visibility("hidden")))
@interface _UIControlCenterClickInteractionDriver : _UILongPressTimeoutClickInteractionDriver

+ (_Bool)prefersCancelsTouchesInView;

- (id)init;
- (double)clickDownDuration;
- (double)clickTimeoutDuration;

@end
