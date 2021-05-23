/*
 Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

#import <Foundation/NSObject.h>

@interface CKDVolumeManager : NSObject

+ (id)_volumeForDisk:(const CDStruct_46dcf1da *)arg1 mountToPath:(id)arg2 error:(id *)arg3;
+ (id)createVolumeForDevice:(int)arg1 error:(id *)arg2;
+ (id)existingVolumeForDevice:(int)arg1;
+ (void)invalidateVolume:(id)arg1;
+ (void)startVolumes;
+ (void)shutdownVolumes;
+ (id)deviceIDForVolumeUUID:(id)arg1;
+ (id)volumeUUIDForDeviceID:(id)arg1;

@end
