/*
 Image: /System/Library/Frameworks/Vision.framework/Vision
 */

#import <Vision/VNProcessingDevice.h>

@protocol MTLDevice;

__attribute__((visibility("hidden")))
@interface VNMetalProcessingDevice : VNProcessingDevice

{
    id <MTLDevice> _metalDevice;
}

+ (id)allDevices;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)initWithMetalDevice:(id)arg1;
- (id)metalDevice;
- (int)espressoStorageType;
- (_Bool)targetsGPU;
- (int)espressoDeviceID;
- (int)espressoEngine;

@end
