/*
 Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import <Foundation/NSObject.h>

@protocol AVOutputSettingsAssistantBaseSettingsProvider, AVOutputSettingsAssistantVideoSettingsAdjuster;

__attribute__((visibility("hidden")))
@interface AVOutputSettingsAssistantInternal : NSObject

{
    id <AVOutputSettingsAssistantBaseSettingsProvider> baseSettingsProvider;
    id <AVOutputSettingsAssistantVideoSettingsAdjuster> videoSettingsAdjuster;
    struct opaqueCMFormatDescription *sourceVideoFormat;
    struct opaqueCMFormatDescription *sourceAudioFormat;
    CDStruct_1b6d18a9 sourceVideoAverageFrameDuration;
    CDStruct_1b6d18a9 sourceVideoMinFrameDuration;
}

@end
