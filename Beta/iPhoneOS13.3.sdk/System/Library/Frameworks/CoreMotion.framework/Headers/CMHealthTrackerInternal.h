/*
 Image: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
 */

#import <Foundation/NSObject.h>

@protocol OS_dispatch_queue;

@interface CMHealthTrackerInternal : NSObject

{
    struct CLConnectionClient *fLocationdConnection;
    NSObject<OS_dispatch_queue> *fInternalQueue;
    NSObject<OS_dispatch_queue> *fAppQueue;
}

- (id)init;
- (void)dealloc;
- (void)_teardown;
- (void)_queryMetMinutesFromDate:(id)arg1 toDate:(id)arg2 handler:(CDUnknownBlockType)arg3;
- (void)_queryVO2MaxInputsFromRecord:(id)arg1 handler:(CDUnknownBlockType)arg2;

@end
