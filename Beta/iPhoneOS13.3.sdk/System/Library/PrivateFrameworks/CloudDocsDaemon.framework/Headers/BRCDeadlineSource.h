/*
 Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

#import <Foundation/NSObject.h>

@class BRCDeadlineScheduler, NSString;

@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface BRCDeadlineSource : NSObject

{
    long long _deadline;
    BRCDeadlineScheduler *_scheduler;
    int _suspendCount;
    _Bool _cancelled;
    _Bool _signaled;
    NSString *_name;
    CDUnknownBlockType _eventHandler;
    NSObject<OS_dispatch_queue> *_queue;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (copy, nonatomic) CDUnknownBlockType eventHandler;

- (id)description;
- (void)cancel;
- (void)resume;
- (void)signal;
- (void)suspend;
- (id)initWithScheduler:(id)arg1 name:(id)arg2;
- (void)signalWithDeadline:(long long)arg1;
- (_Bool)willRunEvenHandler;
- (void)runEventHandler;

@end
