/*
 Image: /System/Library/Frameworks/AVFoundation.framework/Frameworks/AVFAudio.framework/AVFAudio
 */

#import <AVFAudio/AVAudioNode.h>

@class NSString;

@interface AVAudioSourceNode : AVAudioNode

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic) float volume;

+ (CDUnknownBlockType)pullInputBlockFromRenderBlock:(CDUnknownBlockType)arg1;

- (id)initWithRenderBlock:(CDUnknownBlockType)arg1;
- (id)initWithFormat:(id)arg1 renderBlock:(CDUnknownBlockType)arg2;

@end
