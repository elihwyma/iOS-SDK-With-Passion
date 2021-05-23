/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface _UIWeakDisplayLinkTarget : NSObject

{
    id _target;
    SEL _action;
}

+ (SEL)displayLinkAction;

- (id)initWithTarget:(id)arg1 action:(SEL)arg2;
- (void)_displayLinkTick:(id)arg1;

@end
