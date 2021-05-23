/*
 Image: /System/Library/PrivateFrameworks/AuthKit.framework/AuthKit
 */

#import <Foundation/NSObject.h>

@protocol OS_dispatch_group;

@interface AKCoordinatedDataBlock : NSObject

{
    CDUnknownBlockType _block;
    CDUnknownBlockType _completionHandler;
    _Bool _started;
    struct os_unfair_lock_s _lock;
    NSObject<OS_dispatch_group> *_group;
}

+ (id)startCoordinatingBlock:(CDUnknownBlockType)arg1;

- (void)start;
- (id)initWithBlock:(CDUnknownBlockType)arg1;
- (void)_start;
- (void)setCompletion:(CDUnknownBlockType)arg1;
- (void)_callCompletionWithData:(id)arg1 error:(id)arg2;

@end
