/*
 Image: /System/Library/Frameworks/AVFoundation.framework/Frameworks/AVFAudio.framework/AVFAudio
 */

#import <AVFAudio/AVAudioNode.h>

@interface AVAudioIONode : AVAudioNode

@property (nonatomic, readonly) double presentationLatency;
@property (nonatomic, readonly) struct OpaqueAudioComponentInstance *audioUnit;
@property (nonatomic, readonly, getter=isVoiceProcessingEnabled) _Bool voiceProcessingEnabled;

- (id)initWithIOUnit:(struct AVAudioIOUnit *)arg1 isInput:(_Bool)arg2;
- (void)didAttachToEngine:(id)arg1;
- (void)didDetachFromEngine:(id)arg1 error:(id *)arg2;
- (_Bool)isInManualRenderingMode;
- (long long)manualRenderingMode;
- (_Bool)setVoiceProcessingEnabled:(_Bool)arg1 error:(id *)arg2;
- (_Bool)enableManualRenderingMode:(long long)arg1 isInput:(_Bool)arg2;
- (_Bool)enableRealtimeRenderingModeWithIOUnit:(struct AVAudioIOUnit *)arg1 isInput:(_Bool)arg2 forceIOUnitReset:(_Bool)arg3;

@end
