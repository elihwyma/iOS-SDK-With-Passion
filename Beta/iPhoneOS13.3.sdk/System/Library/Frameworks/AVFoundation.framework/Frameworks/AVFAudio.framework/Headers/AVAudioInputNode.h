/*
 Image: /System/Library/Frameworks/AVFoundation.framework/Frameworks/AVFAudio.framework/AVFAudio
 */

#import <AVFAudio/AVAudioIONode.h>

@class NSString;

@interface AVAudioInputNode : AVAudioIONode

@property (nonatomic, getter=isVoiceProcessingBypassed) _Bool voiceProcessingBypassed;
@property (nonatomic, getter=isVoiceProcessingAGCEnabled) _Bool voiceProcessingAGCEnabled;
@property (nonatomic, getter=isVoiceProcessingInputMuted) _Bool voiceProcessingInputMuted;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic) float volume;

- (void)setRate:(float)arg1;
- (float)rate;
- (_Bool)setManualRenderingInputPCMFormat:(id)arg1 inputBlock:(CDUnknownBlockType)arg2;

@end
