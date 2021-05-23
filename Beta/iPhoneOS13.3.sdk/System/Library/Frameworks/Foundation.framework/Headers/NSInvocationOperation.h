/*
 Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <Foundation/NSOperation.h>

@class NSException, NSInvocation;

@interface NSInvocationOperation : NSOperation

{
    NSInvocation *_inv;
    NSException *_exception;
}

@property (retain, readonly) NSInvocation *invocation;
@property (retain, readonly) id result;

- (id)init;
- (void)dealloc;
- (void)main;
- (id)initWithInvocation:(id)arg1;
- (id)initWithTarget:(id)arg1 selector:(SEL)arg2 object:(id)arg3;

@end
