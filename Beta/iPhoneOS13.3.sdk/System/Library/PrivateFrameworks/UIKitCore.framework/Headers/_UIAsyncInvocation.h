/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@interface _UIAsyncInvocation : NSObject

{
    _Atomic void *_observer;
    CDUnknownBlockType _invocationBlock;
    _Atomic _Bool _invocationBlockHasBeenCalled;
    _Atomic long long _invokeCallCount;
}

+ (id)invocationWithBlock:(CDUnknownBlockType)arg1;
+ (id)emptyInvocation;

- (void)dealloc;
- (id)invoke;

@end
