/*
 Image: /System/Library/Frameworks/AVFoundation.framework/Frameworks/AVFAudio.framework/AVFAudio
 */

#import <AVFAudio/AVAudioUnit.h>

@class NSString;

@interface AVAudioUnitGenerator : AVAudioUnit

@property (nonatomic) _Bool bypass;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic) float volume;

- (id)initWithAudioComponentDescription:(struct AudioComponentDescription)arg1;

@end
