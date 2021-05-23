/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIEvent.h>

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface UIWheelEvent : UIEvent

{
    long long _recentScrollDistance;
    NSMutableArray *_recentScrollEvents;
    long long lastSubtype;
}

- (long long)type;
- (long long)subtype;
- (void)_setHIDEvent:(struct __IOHIDEvent *)arg1;
- (void)_sendEventToResponder:(id)arg1;
- (_Bool)_canHaveVelocity;
- (double)_wheelVelocity;

@end
