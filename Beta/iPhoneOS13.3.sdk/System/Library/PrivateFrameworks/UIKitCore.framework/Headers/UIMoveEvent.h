/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIEvent.h>

__attribute__((visibility("hidden")))
@interface UIMoveEvent : UIEvent

{
    long long _moveDirection;
    unsigned long long _focusHeading;
}

@property (nonatomic, setter=_setMoveDirection:) long long _moveDirection;
@property (nonatomic, setter=_setFocusHeading:) unsigned long long _focusHeading;

- (long long)type;
- (void)_sendEventToResponder:(id)arg1;

@end
