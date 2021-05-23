/*
 Image: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
 */

#import <Foundation/NSObject.h>

@protocol OS_dispatch_queue;

@interface CMSwimTrackerInternal : NSObject

{
    struct CLConnectionClient *fLocationdConnection;
    NSObject<OS_dispatch_queue> *fInternalQueue;
    _Bool fStartedUpdates;
    CDUnknownBlockType fHandler;
    unsigned long long fStrokeCountOffset;
    double fDistanceOffset;
    unsigned long long fLapCountOffset;
    double fActiveTime;
    unsigned long long fSegmentCountOffset;
}

- (id)init;
- (void)dealloc;
- (void)_teardown;
- (void)_startUpdatesFromRecord:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)_stopUpdates;
- (void)_handleUpdates:(id)arg1;
- (void)_resetOffsets;
- (void)_querySwimUpdatesFromRecord:(id)arg1 handler:(CDUnknownBlockType)arg2;

@end
