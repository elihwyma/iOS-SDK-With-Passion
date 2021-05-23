/*
 Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
 */

#import <Foundation/NSObject.h>

@class CNSuspendableSchedulerDecorator, NSString;

__attribute__((visibility("hidden")))
@interface CNUIAfterCACommitScheduler : NSObject

{
    CNSuspendableSchedulerDecorator *_scheduler;
    struct __CFRunLoopObserver *_runLoopObserver;
}

@property (nonatomic, readonly) CNSuspendableSchedulerDecorator *scheduler;
@property (nonatomic, readonly) struct __CFRunLoopObserver *runLoopObserver;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (readonly) double timestamp;

- (id)init;
- (void)dealloc;
- (void)performBlock:(CDUnknownBlockType)arg1;
- (void)performBlock:(CDUnknownBlockType)arg1 qualityOfService:(unsigned long long)arg2;
- (id)performCancelableBlock:(CDUnknownBlockType)arg1;
- (id)performCancelableBlock:(CDUnknownBlockType)arg1 qualityOfService:(unsigned long long)arg2;
- (id)afterDelay:(double)arg1 performBlock:(CDUnknownBlockType)arg2 qualityOfService:(unsigned long long)arg3;
- (id)afterDelay:(double)arg1 performBlock:(CDUnknownBlockType)arg2;
- (id)initWithSchedulerProvider:(id)arg1;

@end
