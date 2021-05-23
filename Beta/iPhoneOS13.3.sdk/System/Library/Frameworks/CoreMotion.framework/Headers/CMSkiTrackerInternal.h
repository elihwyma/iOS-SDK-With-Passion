/*
 Image: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
 */

#import <Foundation/NSObject.h>

@class CMSkiData;

@protocol OS_dispatch_queue;

@interface CMSkiTrackerInternal : NSObject

{
    struct CLConnectionClient *fLocationdConnection;
    NSObject<OS_dispatch_queue> *fInternalQueue;
    _Bool fStartedUpdates;
    CMSkiData *fMostRecentRecord;
    CDUnknownBlockType fHandler;
    double fRunDistanceOffset;
    double fRunElevationDescendedOffset;
}

- (id)init;
- (void)dealloc;
- (void)_teardown;
- (void)_startUpdatesFromRecord:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)_stopUpdates;
- (void)_handleUpdates:(id)arg1;
- (void)_queryUpdatesFromRecord:(id)arg1 handler:(CDUnknownBlockType)arg2;

@end
