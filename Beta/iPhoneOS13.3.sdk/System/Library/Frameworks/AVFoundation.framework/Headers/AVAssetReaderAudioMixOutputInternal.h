/*
 Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import <Foundation/NSObject.h>

@class AVAudioMix, AVAudioOutputSettings, NSArray, NSMutableDictionary, NSString;

__attribute__((visibility("hidden")))
@interface AVAssetReaderAudioMixOutputInternal : NSObject

{
    NSArray *audioTracks;
    AVAudioMix *audioMix;
    NSMutableDictionary *audioVolumeCurvesForTracks;
    NSMutableDictionary *audioTimePitchAlgorithmsForTracks;
    NSMutableDictionary *audioTapProcessorsForTracks;
    AVAudioOutputSettings *audioOutputSettings;
    NSString *audioTimePitchAlgorithm;
}

@end
