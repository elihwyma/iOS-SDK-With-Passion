/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class NSInvocation;

__attribute__((visibility("hidden")))
@interface UIKeyboardInputManagerClientRequest : NSObject

{
    NSInvocation *_invocation;
    unsigned long long _errorCount;
}

@property (nonatomic, readonly) NSInvocation *invocation;
@property (nonatomic) unsigned long long errorCount;

+ (id)untargetedInvocationWithInvocation:(id)arg1 withCompletion:(_Bool)arg2;

- (void)dealloc;
- (id)initWithInvocation:(id)arg1;

@end
