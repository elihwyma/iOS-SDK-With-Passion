/*
 Image: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
 */

#import <Foundation/NSObject.h>

@protocol OS_dispatch_queue;

@interface CMSpringTrackerInternal : NSObject

{
    struct CLConnectionClient *fLocationdConnection;
    NSObject<OS_dispatch_queue> *fInternalQueue;
    _Bool fTrackingStarted;
    CDUnknownBlockType fHandler;
}

- (id)init;
- (void)dealloc;
- (_Bool)_isTracking;
- (void)_teardown;
- (void)_startWithHandler:(CDUnknownBlockType)arg1;
- (void)_handleStartStopResponse:(shared_ptr_bdcc6d0f)arg1 handler:(CDUnknownBlockType)arg2;
- (void)_stopWithHandler:(CDUnknownBlockType)arg1;
- (void)_querySpringDataFromRecord:(id)arg1 handler:(CDUnknownBlockType)arg2;

@end
