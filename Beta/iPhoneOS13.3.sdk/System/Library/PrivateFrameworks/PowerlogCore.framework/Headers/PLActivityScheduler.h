/*
 Image: /System/Library/PrivateFrameworks/PowerlogCore.framework/PowerlogCore
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary;

@protocol OS_dispatch_queue;

@interface PLActivityScheduler : NSObject

{
    NSMutableDictionary *_activities;
    NSObject<OS_dispatch_queue> *_workQueue;
}

@property (retain) NSMutableDictionary *activities;
@property (retain) NSObject<OS_dispatch_queue> *workQueue;

+ (id)sharedInstance;

- (id)init;
- (void)scheduleActivityWithIdentifier:(id)arg1 withCriteria:(id)arg2 withMustRunCriterion:(id)arg3 withQueue:(id)arg4 withInterruptBlock:(CDUnknownBlockType)arg5 withActivityBlock:(CDUnknownBlockType)arg6;
- (void)cancelActivityWithIdentifier:(id)arg1;
- (id)lastCompletedDateWithIdentifier:(id)arg1;

@end
