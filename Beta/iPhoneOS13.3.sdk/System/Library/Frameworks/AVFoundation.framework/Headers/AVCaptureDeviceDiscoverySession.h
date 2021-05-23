/*
 Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import <Foundation/NSObject.h>

@class NSArray, NSString;

@interface AVCaptureDeviceDiscoverySession : NSObject

{
    NSArray *_deviceTypes;
    long long _position;
    NSString *_mediaType;
    NSArray *_devices;
    NSArray *_supportedMultiCamDeviceSets;
}

@property (nonatomic, readonly) NSArray *devices;
@property (nonatomic, readonly) NSArray *supportedMultiCamDeviceSets;

+ (id)allDevices;
+ (id)allVideoDevices;
+ (id)allVirtualDeviceTypes;
+ (id)discoverySessionWithDeviceTypes:(id)arg1 mediaType:(id)arg2 position:(long long)arg3;
+ (id)allDeviceTypes;
+ (id)allVideoDeviceTypes;
+ (id)allAudioDeviceTypes;
+ (id)allAudioDevices;
+ (id)allVirtualDevices;
+ (id)allSupportedMultiCamDeviceSets;

- (id)init;
- (void)dealloc;
- (id)description;
- (id)_initWithDeviceTypes:(id)arg1 mediaType:(id)arg2 position:(long long)arg3;

@end
