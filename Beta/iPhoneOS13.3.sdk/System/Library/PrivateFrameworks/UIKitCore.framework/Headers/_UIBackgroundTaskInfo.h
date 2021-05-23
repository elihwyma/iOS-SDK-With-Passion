/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class BKSProcessAssertion, NSString;

__attribute__((visibility("hidden")))
@interface _UIBackgroundTaskInfo : NSObject

{
    unsigned long long _taskId;
    CDUnknownBlockType _expireHandler;
    BKSProcessAssertion *_processAssertion;
    int _count;
    NSString *_taskName;
}

+ (id)backgroundTaskAssertionQueue;

- (void)dealloc;
- (id)description;
- (void)invalidate;
- (id)initWithProcessAssertion:(id)arg1 taskName:(id)arg2 expirationHandler:(CDUnknownBlockType)arg3;
- (void)fireExpirationHandler;

@end
