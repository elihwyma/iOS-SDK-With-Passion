/*
 Image: /System/Library/Frameworks/AVFoundation.framework/Frameworks/AVFAudio.framework/AVFAudio
 */

#import <AVFAudio/AVAudioUnit.h>

@interface AVAudioUnitTimeEffect : AVAudioUnit

@property (nonatomic) _Bool bypass;

- (id)initWithAudioComponentDescription:(struct AudioComponentDescription)arg1;

@end
