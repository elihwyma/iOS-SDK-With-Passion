/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface _UISceneDisplayLinkTargetAndAction : NSObject

{
    id _target;
    SEL _action;
}

@property (weak, nonatomic, readonly) id target;
@property (nonatomic, readonly) SEL action;

- (id)initWithTarget:(id)arg1 action:(SEL)arg2;

@end
