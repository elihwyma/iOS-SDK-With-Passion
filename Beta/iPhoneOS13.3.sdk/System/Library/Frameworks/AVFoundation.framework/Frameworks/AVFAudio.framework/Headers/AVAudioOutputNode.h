/*
 Image: /System/Library/Frameworks/AVFoundation.framework/Frameworks/AVFAudio.framework/AVFAudio
 */

#import <AVFAudio/AVAudioIONode.h>

@interface AVAudioOutputNode : AVAudioIONode

- (_Bool)setManualRenderingPCMFormat:(id)arg1 maximumFrameCount:(unsigned int)arg2;
- (id)manualRenderingFormat;
- (unsigned int)manualRenderingMaximumFrameCount;

@end
