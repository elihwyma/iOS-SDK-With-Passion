/*
 Image: /System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities
 */

#import <Foundation/NSObject.h>

@interface AXIPCServerMessageHandlerContext : NSObject

{
    _Bool _async;
    CDUnknownBlockType _handler;
    id _target;
    SEL _selector;
}

@property (nonatomic, readonly) CDUnknownBlockType handler;
@property (weak, nonatomic, readonly) id target;
@property (nonatomic, readonly) SEL selector;
@property (nonatomic, readonly) _Bool async;

- (id)initWithHandler:(CDUnknownBlockType)arg1;
- (id)initWithTarget:(id)arg1 selector:(SEL)arg2 async:(_Bool)arg3;

@end
