//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class BKSProcessAssertion, NSString;

__attribute__((visibility("hidden")))
@interface _UIBackgroundTaskInfo : NSObject
{
    NSUInteger _taskId;
    id /* CDUnknownBlockType */ _expireHandler;
    BKSProcessAssertion *_processAssertion;
    int _count;
    NSString *_taskName;
}

+ (id)backgroundTaskAssertionQueue;
// - (void).cxx_destruct;
- (id)description;
- (void)invalidate;
- (void)fireExpirationHandler;
- (void)dealloc;
- (id)initWithProcessAssertion:(id)arg1 taskName:(id)arg2 expirationHandler:(id /* CDUnknownBlockType */)arg3;

@end

