/*
 Image: /System/Library/PrivateFrameworks/PhotoFoundation.framework/PhotoFoundation
 */

@protocol PFDispatchQueueMethods

- (unsigned short)resume;
- (unsigned short)qualityOfService;
- (unsigned short)suspend;
- (unsigned short)label;
- (unsigned short)dispatchAfterDelay:block: /* Error: Ran out of types for this method. */;
- (unsigned short)dispatchAfterInterval:block: /* Error: Ran out of types for this method. */;
- (unsigned short)dispatchCancellable: /* Error: Ran out of types for this method. */;
- (unsigned short)dispatchCancellableAfterDelay:block: /* Error: Ran out of types for this method. */;
- (unsigned short)dispatchCancellableAfterInterval:block: /* Error: Ran out of types for this method. */;
- (unsigned short)dispatchCancellableGroup:notify: /* Error: Ran out of types for this method. */;
- (unsigned short)extensionMatching: /* Error: Ran out of types for this method. */;
- (unsigned short)dispatchSync: /* Error: Ran out of types for this method. */;
- (unsigned short)dispatchAsync: /* Error: Ran out of types for this method. */;
- (unsigned short)dispatchBarrierSync: /* Error: Ran out of types for this method. */;
- (unsigned short)dispatchBarrierAsync: /* Error: Ran out of types for this method. */;
- (unsigned short)dispatchAsyncWithQOS:block: /* Error: Ran out of types for this method. */;
- (unsigned short)dispatchBarrierAsyncWithQOS:block: /* Error: Ran out of types for this method. */;
- (unsigned short)dispatchAfter:block: /* Error: Ran out of types for this method. */;
- (unsigned short)dispatchGroup:async: /* Error: Ran out of types for this method. */;
- (unsigned short)dispatchGroup:notify: /* Error: Ran out of types for this method. */;
- (unsigned short)setSpecific:forKey: /* Error: Ran out of types for this method. */;
- (unsigned short)getSpecific: /* Error: Ran out of types for this method. */;
- (unsigned short)assertOnQueue;
- (unsigned short)assertQueueBarrier;
- (unsigned short)assertNotOnQueue;
- (unsigned short)dispatchAsyncWithCurrentQOS: /* Error: Ran out of types for this method. */;
- (unsigned short)dispatchBarrierAsyncWithCurrentQOS: /* Error: Ran out of types for this method. */;

@end
