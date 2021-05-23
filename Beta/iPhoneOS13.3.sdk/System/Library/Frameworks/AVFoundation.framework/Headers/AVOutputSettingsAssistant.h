/*
 Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import <Foundation/NSObject.h>

@class AVOutputSettingsAssistantInternal, NSDictionary, NSString;

@interface AVOutputSettingsAssistant : NSObject

{
    AVOutputSettingsAssistantInternal *_internal;
}

@property (nonatomic, readonly) NSDictionary *audioSettings;
@property (nonatomic, readonly) NSDictionary *videoSettings;
@property (nonatomic, readonly) NSString *outputFileType;

+ (id)_allOutputSettingsPresets;
+ (id)baseSettingsProviderForPreset:(id)arg1;
+ (id)videoSettingsAdjusterForPreset:(id)arg1;
+ (id)videoEncoderCapabilities;
+ (_Bool)validatesSourceVideoMinFrameDuration;
+ (id)availableOutputSettingsPresets;
+ (id)outputSettingsAssistantWithPreset:(id)arg1;

- (id)init;
- (void)dealloc;
- (const struct opaqueCMFormatDescription *)sourceVideoFormat;
- (const struct opaqueCMFormatDescription *)sourceAudioFormat;
- (CDStruct_1b6d18a9)sourceVideoAverageFrameDuration;
- (CDStruct_1b6d18a9)sourceVideoMinFrameDuration;
- (id)initWithPreset:(id)arg1;
- (void)setSourceAudioFormat:(struct opaqueCMFormatDescription *)arg1;
- (void)setSourceVideoFormat:(struct opaqueCMFormatDescription *)arg1;
- (void)setSourceVideoAverageFrameDuration:(CDStruct_1b6d18a9)arg1;
- (void)setSourceVideoMinFrameDuration:(CDStruct_1b6d18a9)arg1;

@end
