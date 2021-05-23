/*
 Image: /System/Library/PrivateFrameworks/PhotoFoundation.framework/PhotoFoundation
 */

@protocol PFPriorityEnqueuing

- (unsigned short)enqueueWithPriority:qos:block: /* Error: Ran out of types for this method. */;
- (unsigned short)enqueueWithPriority:block: /* Error: Ran out of types for this method. */;
- (unsigned short)enqueueEmptyNotification: /* Error: Ran out of types for this method. */;
- (unsigned short)schedulingLimitForPriorityLevel: /* Error: Ran out of types for this method. */;
- (unsigned short)suspendScheduling;
- (unsigned short)resumeScheduling;

@end
