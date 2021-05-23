/*
 Image: /System/Library/Frameworks/ARKit.framework/ARKit
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary;

@interface ARPresentationThermalPolicy : NSObject

{
    NSMutableDictionary *_cameraConfigurations;
}

@property (readonly) NSMutableDictionary *cameraConfigurations;

- (id)init;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)addCameraConfig:(id)arg1;
- (id)cameraConfigForDeviceType:(id)arg1 position:(long long)arg2;
- (void)updateCameraConfig:(id)arg1;
- (id)_keyForType:(id)arg1 position:(long long)arg2;

@end
