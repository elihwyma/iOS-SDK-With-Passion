/*
 Image: /System/Library/Frameworks/AVFoundation.framework/Frameworks/AVFAudio.framework/AVFAudio
 */

#import <AVFAudio/AVAudioUnitEffect.h>

@class NSArray;

@interface AVAudioUnitEQ : AVAudioUnitEffect

@property (nonatomic, readonly) NSArray *bands;
@property (nonatomic) float globalGain;

- (id)init;
- (id)initWithNumberOfBands:(unsigned long long)arg1;

@end
