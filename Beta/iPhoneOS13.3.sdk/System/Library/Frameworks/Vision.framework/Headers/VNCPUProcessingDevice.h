/*
 Image: /System/Library/Frameworks/Vision.framework/Vision
 */

#import <Vision/VNProcessingDevice.h>

__attribute__((visibility("hidden")))
@interface VNCPUProcessingDevice : VNProcessingDevice

- (id)metalDevice;
- (int)espressoStorageType;
- (int)espressoEngine;
- (_Bool)targetsCPU;

@end
