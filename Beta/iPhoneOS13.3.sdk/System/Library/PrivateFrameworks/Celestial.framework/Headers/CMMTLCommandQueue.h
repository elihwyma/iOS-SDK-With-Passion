/*
 Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

#import <NSObject.h>

@class CMMTLDevice, NSString;

@protocol MTLCommandQueue, MTLDevice, OS_dispatch_queue;

@interface CMMTLCommandQueue : NSObject

{
    CMMTLDevice *_cmDevice;
    id <MTLCommandQueue> _commandQueue;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy) NSString *label;
@property (readonly) id <MTLDevice> device;
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

- (void)forwardInvocation:(id)arg1;
- (id)commandBuffer;
- (id)commandBufferWithUnretainedReferences;
- (id)initWithCMMTLDevice:(id)arg1;

@end
