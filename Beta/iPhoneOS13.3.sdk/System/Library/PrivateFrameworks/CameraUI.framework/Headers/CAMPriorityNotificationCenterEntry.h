/*
 Image: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
 */

#import <Foundation/NSObject.h>

@interface CAMPriorityNotificationCenterEntry : NSObject

{
    id _observer;
    SEL _selector;
    id _object;
}

@property (weak, nonatomic) id observer;
@property (nonatomic) SEL selector;
@property (retain, nonatomic) id object;

- (id)description;
- (id)initWithObserver:(id)arg1 selector:(SEL)arg2 object:(id)arg3;

@end
