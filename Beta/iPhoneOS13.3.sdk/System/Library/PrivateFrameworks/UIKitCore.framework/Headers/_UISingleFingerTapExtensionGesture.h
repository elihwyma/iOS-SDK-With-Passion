/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UITapGestureRecognizer.h>

@class NSMutableSet;

__attribute__((visibility("hidden")))
@interface _UISingleFingerTapExtensionGesture : UITapGestureRecognizer

{
    NSMutableSet *_trackedEvents;
}

- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)_resetGestureRecognizer;
- (long long)_modifierFlags;
- (_Bool)_gestureCanBeginWithEvent:(id)arg1;
- (_Bool)_shouldReceiveTouch:(id)arg1 withEvent:(id)arg2;

@end
