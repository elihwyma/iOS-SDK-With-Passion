/*
 Image: /System/Library/Frameworks/AVFoundation.framework/Frameworks/AVFAudio.framework/AVFAudio
 */

#import <AVFAudio/AVAudioNode.h>

@class NSString;

@interface AVAudioMixerNode : AVAudioNode

@property (nonatomic) float outputVolume;
@property (nonatomic, readonly) unsigned long long nextAvailableInputBus;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic) float volume;

- (id)init;
- (void)didAttachToEngine:(id)arg1;
- (void)setInputVolume:(float)arg1 bus:(unsigned long long)arg2;
- (void)setInputPan:(float)arg1 bus:(unsigned long long)arg2;
- (void)inputConnected:(unsigned long long)arg1;

@end
