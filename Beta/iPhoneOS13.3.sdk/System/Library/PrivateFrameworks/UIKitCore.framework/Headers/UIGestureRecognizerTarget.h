/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface UIGestureRecognizerTarget : NSObject

{
    id _target;
    SEL _action;
}

@property (weak, nonatomic, readonly) id target;
@property (nonatomic, readonly) SEL action;

+ (id)gestureTargetWithTarget:(id)arg1 action:(SEL)arg2;

- (id)description;
- (_Bool)isEqualToTarget:(id)arg1 action:(SEL)arg2;
- (void)_sendActionWithGestureRecognizer:(id)arg1;

@end
