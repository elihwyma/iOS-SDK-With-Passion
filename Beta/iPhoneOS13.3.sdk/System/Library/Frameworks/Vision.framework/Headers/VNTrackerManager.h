/*
 Image: /System/Library/Frameworks/Vision.framework/Vision
 */

#import <Foundation/NSObject.h>

@class NSDictionary, NSMapTable, NSMutableDictionary;

@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface VNTrackerManager : NSObject

{
    NSDictionary *_trackerTypeToClassDictionary;
    NSMapTable *_trackerClassToNameMapTable;
    NSMutableDictionary *_liveTrackerCounter;
    NSObject<OS_dispatch_queue> *_trackingProcessingQueue;
    NSObject<OS_dispatch_queue> *_trackersCollectionManagementQueue;
    NSDictionary *_liveTrackerCounterLimit;
    NSMutableDictionary *_trackers;
}

+ (id)manager;
+ (void)releaseManager;
+ (void)releaseAllTrackers;

- (id)init;
- (id)trackerWithOptions:(id)arg1 error:(id *)arg2;
- (long long)_maximumTrackersOfType:(id)arg1;
- (id)_getTracker:(id)arg1;
- (id)_createTracker:(id)arg1 type:(id)arg2 options:(id)arg3 error:(id *)arg4;
- (void)releaseTracker:(id)arg1;

@end
