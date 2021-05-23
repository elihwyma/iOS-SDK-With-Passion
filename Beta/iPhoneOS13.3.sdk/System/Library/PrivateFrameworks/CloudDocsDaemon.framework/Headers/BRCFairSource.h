/*
 Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

#import <Foundation/NSObject.h>

@class BRCFairScheduler, NSString;

@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface BRCFairSource : NSObject

{
    unsigned long long _schedulerBitIndex;
    NSString *_name;
    BRCFairScheduler *_scheduler;
    int _suspendCount;
    _Bool _cancelled;
    _Bool _signaled;
    NSObject<OS_dispatch_queue> *_queue;
    CDUnknownBlockType _eventHandler;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (copy, nonatomic) CDUnknownBlockType eventHandler;

- (id)description;
- (void)cancel;
- (void)resume;
- (void)signal;
- (void)suspend;
- (id)initWithName:(id)arg1 scheduler:(id)arg2;
- (void)_runEventHandler;

@end
