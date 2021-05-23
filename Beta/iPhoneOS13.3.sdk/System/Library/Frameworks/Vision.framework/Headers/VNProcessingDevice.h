/*
 Image: /System/Library/Frameworks/Vision.framework/Vision
 */

#import <Foundation/NSObject.h>

@interface VNProcessingDevice : NSObject

+ (void)forcedCleanup;
+ (id)allDevices;
+ (void)_lockStaticObjectsAccessLock;
+ (void)_unlockStaticObjectsAccessLock;
+ (id)defaultDevice;
+ (id)defaultCPUDevice;
+ (id)defaultMetalDevice;
+ (id)deviceForMetalDevice:(id)arg1;
+ (id)defaultANEDevice;
+ (id)directANEDevice;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)metalDevice;
- (_Bool)targetsANE;
- (int)espressoStorageType;
- (_Bool)targetsGPU;
- (int)espressoDeviceID;
- (int)espressoEngine;
- (_Bool)targetsCPU;

@end
