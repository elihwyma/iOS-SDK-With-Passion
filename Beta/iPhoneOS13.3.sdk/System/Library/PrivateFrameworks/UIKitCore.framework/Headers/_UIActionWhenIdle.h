/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class NSInvocation;

__attribute__((visibility("hidden")))
@interface _UIActionWhenIdle : NSObject

{
    NSInvocation *_invocation;
}

@property (retain, nonatomic) NSInvocation *invocation;

+ (id)actionWhenIdleWithTarget:(id)arg1 selector:(SEL)arg2 object:(id)arg3;

- (void)invalidate;
- (_Bool)isValid;
- (void)invoke;
- (id)initWithInvocation:(id)arg1;
- (id)initWithTarget:(id)arg1 selector:(SEL)arg2 object:(id)arg3;
- (void)addObserverToRunLoop;

@end
