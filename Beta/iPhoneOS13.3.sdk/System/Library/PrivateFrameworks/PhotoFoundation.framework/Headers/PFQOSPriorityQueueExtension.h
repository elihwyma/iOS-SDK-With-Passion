/*
 Image: /System/Library/PrivateFrameworks/PhotoFoundation.framework/PhotoFoundation
 */

#import <PhotoFoundation/PFPriorityQueueExtension.h>

@interface PFQOSPriorityQueueExtension : PFPriorityQueueExtension

- (void)enqueueWithCurrentQOSPriority:(CDUnknownBlockType)arg1;
- (void)enqueueWithQOSPriority:(unsigned int)arg1 block:(CDUnknownBlockType)arg2;
- (id)initWithConcurrentScheduling:(_Bool)arg1;

@end
