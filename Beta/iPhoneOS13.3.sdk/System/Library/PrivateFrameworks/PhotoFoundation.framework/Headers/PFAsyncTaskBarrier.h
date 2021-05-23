/*
 Image: /System/Library/PrivateFrameworks/PhotoFoundation.framework/PhotoFoundation
 */

#import <Foundation/NSObject.h>

@class NSArray, NSCondition, NSString;

@interface PFAsyncTaskBarrier : NSObject

{
    NSString *_label;
    long long _remainingTaskCount;
    CDUnknownBlockType _completionBlock;
    NSArray *_errors;
    NSCondition *_conditionLock;
}

@property (readonly) NSCondition *conditionLock;
@property (retain) NSArray *errors;
@property (readonly) NSString *label;
@property (readonly) long long remainingTaskCount;
@property (copy, readonly) CDUnknownBlockType completionBlock;

- (id)description;
- (void)waitUntilCompleted;
- (void)taskCompleted;
- (id)initWithLabel:(id)arg1 taskCount:(long long)arg2;
- (id)initWithLabel:(id)arg1 taskCount:(long long)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)waitUntilCompletedOrError;
- (void)taskCompletedWithCriticalBlock:(CDUnknownBlockType)arg1;
- (void)taskCompletedWithError:(id)arg1;
- (void)taskCompletedWithError:(id)arg1 criticalBlock:(CDUnknownBlockType)arg2;
- (void)taskCompletedWithErrors:(id)arg1;
- (void)taskCompletedWithErrors:(id)arg1 criticalBlock:(CDUnknownBlockType)arg2;
- (void)changeRemainingTaskCount:(long long)arg1;
- (void)setRemainingTaskCount:(long long)arg1;
- (void)executeCriticalBlock:(CDUnknownBlockType)arg1;

@end
