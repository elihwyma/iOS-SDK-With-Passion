/*
 Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import <AVFoundation/AVVideoOutputSettings.h>

@class NSDictionary, NSString;

__attribute__((visibility("hidden")))
@interface AVPixelBufferAttributesVideoOutputSettings : AVVideoOutputSettings

{
    NSDictionary *_VTPixelAspectRatioDictionary;
    NSDictionary *_VTCleanApertureDictionary;
}

@property (nonatomic, readonly) NSDictionary *pixelBufferAttributes;
@property (nonatomic, readonly) NSString *fieldMode;

+ (id)_videoOutputSettingsWithVideoSettingsDictionary:(id)arg1 exceptionReason:(id *)arg2;
+ (id)eligibleOutputSettingsDictionaryKeys;

- (void)dealloc;
- (int)width;
- (int)height;
- (_Bool)willYieldCompressedSamples;
- (_Bool)canFullySpecifyOutputFormatReturningReason:(id *)arg1;
- (_Bool)encoderIsAvailableOnCurrentSystemReturningError:(id *)arg1;
- (id)initWithTrustedPixelBufferAttributes:(id)arg1;
- (id)pixelAspectRatioDictionary;
- (id)cleanApertureDictionary;
- (id)initWithPixelBufferAttributes:(id)arg1 exceptionReason:(id *)arg2;

@end
