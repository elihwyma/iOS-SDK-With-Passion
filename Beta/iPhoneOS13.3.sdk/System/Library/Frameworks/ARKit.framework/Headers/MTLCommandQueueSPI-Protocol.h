/*
 Image: /System/Library/Frameworks/ARKit.framework/ARKit
 */

#import <ARKit/Swift-Protocol.h>

@class NSObject;

@protocol OS_dispatch_queue;

@protocol MTLCommandQueueSPI <Swift>

@property int backgroundTrackingPID;
@property (readonly) unsigned long long maxCommandBufferCount;
@property (readonly) unsigned long long qosLevel;
@property (readonly) NSObject<OS_dispatch_queue> *commitQueue;
@property (readonly) _Bool commitSynchronously;
@property (readonly) NSObject<OS_dispatch_queue> *completionQueue;
@property (readonly) _Bool disableCrossQueueHazardTracking;
@property _Bool skipRender;
@property _Bool executionEnabled;
@property _Bool isOpenGLQueue;
@property (getter=isProfilingEnabled) _Bool profilingEnabled;
@property (nonatomic, getter=isStatEnabled) _Bool StatEnabled;
@property (nonatomic, getter=getStatOptions) unsigned long long StatOptions;
@property (nonatomic, getter=getStatLocations) unsigned long long StatLocations;

- (unsigned short)finish;
- (unsigned short)setBackgroundGPUPriority: /* Error: Ran out of types for this method. */;
- (unsigned short)setGPUPriority: /* Error: Ran out of types for this method. */;
- (unsigned short)setCompletionQueue: /* Error: Ran out of types for this method. */;
- (unsigned short)setSubmissionQueue: /* Error: Ran out of types for this method. */;
- (unsigned short)getGPUPriority;
- (unsigned short)setGPUPriority:offset: /* Error: Ran out of types for this method. */;
- (unsigned short)getBackgroundGPUPriority;
- (unsigned short)setBackgroundGPUPriority:offset: /* Error: Ran out of types for this method. */;

@end
