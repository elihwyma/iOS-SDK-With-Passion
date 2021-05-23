/*
 Image: /System/Library/PrivateFrameworks/CalendarFoundation.framework/CalendarFoundation
 */

#import <Foundation/NSObject.h>

@protocol OS_dispatch_queue;

@interface CalCancelableDispatchBlock : NSObject

{
    CDUnknownBlockType _block;
    NSObject<OS_dispatch_queue> *_queue;
}

@property (copy, nonatomic) CDUnknownBlockType block;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *queue;

- (void)performAfterDelay:(double)arg1;
- (void)cancel;
- (id)initWithBlock:(CDUnknownBlockType)arg1 inQueue:(id)arg2;
- (void)performAsync;

@end
