/*
 Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import <AVFoundation/AVOutputSettings.h>

@class NSDictionary, NSString;

@interface AVVideoOutputSettings : AVOutputSettings

@property (nonatomic, readonly) int width;
@property (nonatomic, readonly) int height;
@property (nonatomic, readonly) NSDictionary *cleanApertureDictionary;
@property (nonatomic, readonly) NSDictionary *pixelAspectRatioDictionary;
@property (nonatomic, readonly) NSDictionary *pixelTransferProperties;
@property (nonatomic, readonly) NSDictionary *videoScalingProperties;
@property (nonatomic, readonly) _Bool dimensionsAreBoundingBox;
@property (nonatomic, readonly) CDStruct_1b6d18a9 minimumFrameDuration;
@property (nonatomic, readonly) NSString *frameRateConversionAlgorithm;
@property (nonatomic, readonly) _Bool allowWideColor;
@property (nonatomic, readonly) NSDictionary *videoSettingsDictionary;

+ (id)_outputSettingsWithOutputSettingsDictionary:(id)arg1 mediaType:(id)arg2 exceptionReason:(id *)arg3;
+ (id)_videoOutputSettingsWithVideoSettingsDictionary:(id)arg1 exceptionReason:(id *)arg2;
+ (id)videoOutputSettingsWithVideoSettingsDictionary:(id)arg1;
+ (id)registeredOutputSettingsClasses;
+ (id)defaultVideoOutputSettings;
+ (id)_validValuesForScalingMode;
+ (id)videoOutputSettingsWithTrustedVideoSettingsDictionary:(id)arg1;

- (void)colorPropertiesConsideringFormatDescriptions:(id)arg1 colorPrimaries:(id *)arg2 transferFunction:(id *)arg3 ycbcrMatrix:(id *)arg4;
- (id)compatibleMediaTypes;
- (_Bool)validateUsingOutputSettingsValidator:(id)arg1 reason:(id *)arg2;
- (id)initWithVideoSettingsDictionary:(id)arg1 exceptionReason:(id *)arg2;

@end
