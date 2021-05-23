/*
 Image: /System/Library/Frameworks/AVFoundation.framework/Frameworks/AVFAudio.framework/AVFAudio
 */

#import <AVFAudio/AVAudioUnitMIDIInstrument.h>

@interface AVAudioUnitSampler : AVAudioUnitMIDIInstrument

@property (nonatomic) float stereoPan;
@property (nonatomic) float masterGain;
@property (nonatomic) float globalTuning;

- (id)init;
- (id)initWithAudioComponentDescription:(struct AudioComponentDescription)arg1;
- (_Bool)loadInstrumentAtURL:(id)arg1 error:(id *)arg2;
- (_Bool)loadSoundBankInstrumentAtURL:(id)arg1 program:(unsigned char)arg2 bankMSB:(unsigned char)arg3 bankLSB:(unsigned char)arg4 error:(id *)arg5;
- (_Bool)loadAudioFilesAtURLs:(id)arg1 error:(id *)arg2;

@end
