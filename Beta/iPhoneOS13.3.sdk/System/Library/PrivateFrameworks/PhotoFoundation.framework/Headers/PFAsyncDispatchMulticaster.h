/*
 Image: /System/Library/PrivateFrameworks/PhotoFoundation.framework/PhotoFoundation
 */

#import <PhotoFoundation/PFMulticaster.h>

@class PFDispatchQueue;

@interface PFAsyncDispatchMulticaster : PFMulticaster

{
    PFDispatchQueue *_sendQueue;
}

+ (void)initialize;

- (id)init;
- (void)resume;
- (void)suspend;
- (void)distributeSelector:(SEL)arg1 toReceivers:(id)arg2 distributionBlock:(CDUnknownBlockType)arg3;
- (id)_defaultDistributionQueue;
- (void)flushMessagesAndNotify:(CDUnknownBlockType)arg1;
- (void)_distributeAsyncDispatchSelector:(SEL)arg1 to:(id)arg2 distributionBlock:(CDUnknownBlockType)arg3;

@end
