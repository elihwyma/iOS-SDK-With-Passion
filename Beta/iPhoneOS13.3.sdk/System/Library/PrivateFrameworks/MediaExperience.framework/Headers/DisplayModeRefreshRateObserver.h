/*
 Image: /System/Library/PrivateFrameworks/MediaExperience.framework/MediaExperience
 */

#import <Foundation/NSObject.h>

@class CADisplay;

@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface DisplayModeRefreshRateObserver : NSObject

{
    NSObject<OS_dispatch_queue> *_accessQueue;
    double _refreshRate;
    CADisplay *_tvOutDisplay;
}

- (id)init;
- (void)dealloc;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (int)updateHDMILatencyOnCoreAnimation:(double)arg1;
- (double)readHDMILatencyFromCoreAnimation;

@end
