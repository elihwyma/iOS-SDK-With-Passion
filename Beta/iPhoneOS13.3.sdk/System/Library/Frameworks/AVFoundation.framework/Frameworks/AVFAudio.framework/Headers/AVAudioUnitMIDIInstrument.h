/*
 Image: /System/Library/Frameworks/AVFoundation.framework/Frameworks/AVFAudio.framework/AVFAudio
 */

#import <AVFAudio/AVAudioUnit.h>

@class NSString;

@interface AVAudioUnitMIDIInstrument : AVAudioUnit

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic) float volume;

- (id)initWithAudioComponentDescription:(struct AudioComponentDescription)arg1;
- (void)startNote:(unsigned char)arg1 withVelocity:(unsigned char)arg2 onChannel:(unsigned char)arg3;
- (void)stopNote:(unsigned char)arg1 onChannel:(unsigned char)arg2;
- (void)sendController:(unsigned char)arg1 withValue:(unsigned char)arg2 onChannel:(unsigned char)arg3;
- (void)sendPitchBend:(unsigned short)arg1 onChannel:(unsigned char)arg2;
- (void)sendPressure:(unsigned char)arg1 onChannel:(unsigned char)arg2;
- (void)sendPressureForKey:(unsigned char)arg1 withValue:(unsigned char)arg2 onChannel:(unsigned char)arg3;
- (void)sendProgramChange:(unsigned char)arg1 onChannel:(unsigned char)arg2;
- (void)sendProgramChange:(unsigned char)arg1 bankMSB:(unsigned char)arg2 bankLSB:(unsigned char)arg3 onChannel:(unsigned char)arg4;
- (void)sendMIDIEvent:(unsigned char)arg1 data1:(unsigned char)arg2 data2:(unsigned char)arg3;
- (void)sendMIDIEvent:(unsigned char)arg1 data1:(unsigned char)arg2;
- (void)sendMIDISysExEvent:(id)arg1;

@end
