/*
 Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import <AVFoundation/AVVideoOutputSettings.h>

@class NSDictionary;

__attribute__((visibility("hidden")))
@interface AVAVVideoSettingsVideoOutputSettings : AVVideoOutputSettings

{
    NSDictionary *_adaptedVideoCompressionProperties;
    NSDictionary *_VTPixelAspectRatioDictionary;
    NSDictionary *_VTCleanApertureDictionary;
}

@property (nonatomic, readonly) unsigned int videoCodecType;
@property (nonatomic, readonly) NSDictionary *videoEncoderSpecification;
@property (nonatomic, readonly) NSDictionary *videoCompressionProperties;

+ (id)_videoOutputSettingsWithVideoSettingsDictionary:(id)arg1 exceptionReason:(id *)arg2;
+ (id)eligibleOutputSettingsDictionaryKeys;
+ (_Bool)_validateVideoCompressionProperties:(id)arg1 againstSupportedPropertyDictionary:(id)arg2 forCodecType:(id)arg3 exceptionReason:(id *)arg4;

- (void)dealloc;
- (int)width;
- (int)height;
- (_Bool)willYieldCompressedSamples;
- (_Bool)canFullySpecifyOutputFormatReturningReason:(id *)arg1;
- (_Bool)encoderIsAvailableOnCurrentSystemReturningError:(id *)arg1;
- (id)initWithTrustedAVVideoSettingsDictionary:(id)arg1;
- (id)pixelAspectRatioDictionary;
- (id)cleanApertureDictionary;
- (id)initWithAVVideoSettingsDictionary:(id)arg1 exceptionReason:(id *)arg2;

@end
