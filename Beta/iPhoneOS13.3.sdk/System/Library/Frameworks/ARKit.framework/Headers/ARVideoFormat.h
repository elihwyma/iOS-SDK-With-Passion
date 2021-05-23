/*
 Image: /System/Library/Frameworks/ARKit.framework/ARKit
 */

#import <Foundation/NSObject.h>

#import <ARKit/Swift-Protocol.h>

@class AVCaptureDevice, AVCaptureDeviceFormat, NSArray, NSString;

@interface ARVideoFormat : NSObject <Swift>

{
    AVCaptureDevice *_device;
    AVCaptureDeviceFormat *_deviceFormat;
    struct CGSize _imageResolution;
    long long _captureDevicePosition;
    NSArray *_frameRatesByPowerUsage;
    AVCaptureDeviceFormat *_depthDataFormat;
    NSString *_captureDeviceType;
}

@property (retain, nonatomic) NSArray *frameRatesByPowerUsage;
@property (nonatomic, readonly) AVCaptureDevice *device;
@property (nonatomic, readonly) AVCaptureDeviceFormat *deviceFormat;
@property (retain, nonatomic) AVCaptureDeviceFormat *depthDataFormat;
@property (nonatomic, readonly) NSString *captureDeviceType;
@property (nonatomic, readonly) long long captureDevicePosition;
@property (nonatomic, readonly) struct CGSize imageResolution;
@property (nonatomic, readonly) long long framesPerSecond;

+ (id)supportedVideoFormatsForDevicePosition:(long long)arg1 deviceType:(id)arg2;
+ (id)bestVideoFormatForDevicePosition:(long long)arg1 deviceType:(id)arg2 resolution:(CDStruct_1ef3fb1f)arg3 frameRate:(double)arg4 videoBinned:(_Bool)arg5;
+ (id)bestDepthFormatForDeviceFormat:(id)arg1;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithImageResolution:(struct CGSize)arg1 captureDevicePosition:(long long)arg2 captureDeviceType:(id)arg3;
- (id)initWithCaptureDevice:(id)arg1 format:(id)arg2;

@end
