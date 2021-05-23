/*
 Image: /System/Library/PrivateFrameworks/Memories.framework/Memories
 */

#import <Foundation/NSObject.h>

@protocol OS_dispatch_group, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface VECSchedulingRequest : NSObject

{
    NSObject<OS_dispatch_queue> *_isolationQueue;
    int _requestID;
    NSObject<OS_dispatch_group> *_doneOrCancelGroup;
    CDUnknownBlockType _taskHandler;
    _Bool _queued;
    _Bool _cancelled;
    CDUnknownBlockType _dellocHandler;
}

@property (nonatomic, readonly) NSObject<OS_dispatch_group> *doneOrCancelGroup;
@property (nonatomic, readonly) CDUnknownBlockType taskHandler;
@property (nonatomic, readonly) CDUnknownBlockType dellocHandler;
@property (nonatomic, readonly) int requestID;
@property (nonatomic, readonly) _Bool isCancelled;

- (void)dealloc;
- (id)description;
- (id)initWithDoneOrCancelGroup:(id)arg1 taskHandler:(CDUnknownBlockType)arg2 dellocHandler:(CDUnknownBlockType)arg3;
- (void)markAsQueued;
- (void)markAsCompletedOrCancelled:(_Bool)arg1;

@end
