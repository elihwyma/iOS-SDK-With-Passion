/*
 Image: /System/Library/PrivateFrameworks/VoiceMemos.framework/VoiceMemos
 */

#import <AVFoundation/AVAudioFile.h>

@interface AVAudioFile (RCAdditions)

@property (nonatomic, readonly) double rc_sampleRate;
@property (nonatomic, readonly) double rc_durationInSeconds;

@end
