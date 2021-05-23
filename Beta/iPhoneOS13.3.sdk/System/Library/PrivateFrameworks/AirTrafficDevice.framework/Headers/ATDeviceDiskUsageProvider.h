/*
 Image: /System/Library/PrivateFrameworks/AirTrafficDevice.framework/AirTrafficDevice
 */

#import <NSObject.h>

@class ATClientController, ATUserDefaults, NSMutableDictionary;

@protocol OS_dispatch_group, OS_dispatch_queue;

@interface ATDeviceDiskUsageProvider : NSObject

{
    NSMutableDictionary *_diskUsageInfo;
    ATUserDefaults *_defaults;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_queue> *_usageInfoAccessQueue;
    NSObject<OS_dispatch_group> *_usageUpdateGroup;
    ATClientController *_clientController;
}

+ (id)sharedInstance;

- (id)init;
- (void)getUpdatedUsageWithCompletion:(CDUnknownBlockType)arg1;
- (void)_loadCurrentDiskUsage;
- (void)getCurrentUsageWithUpdatedDataClasses:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (id)getCurrentUsage;
- (id)_diskUsageForDataClass:(id)arg1;
- (void)_updatePurgeableStorageUsage;

@end
