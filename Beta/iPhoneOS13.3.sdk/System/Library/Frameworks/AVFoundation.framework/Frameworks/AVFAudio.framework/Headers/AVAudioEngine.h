/*
 Image: /System/Library/Frameworks/AVFoundation.framework/Frameworks/AVFAudio.framework/AVFAudio
 */

#import <Foundation/NSObject.h>

@class AVAudioFormat, AVAudioInputNode, AVAudioMixerNode, AVAudioOutputNode, NSSet;

@interface AVAudioEngine : NSObject

{
    void *_impl;
}

@property (nonatomic) struct OpaqueMusicSequence *musicSequence;
@property (nonatomic, readonly) AVAudioOutputNode *outputNode;
@property (nonatomic, readonly) AVAudioInputNode *inputNode;
@property (nonatomic, readonly) AVAudioMixerNode *mainMixerNode;
@property (nonatomic, readonly, getter=isRunning) _Bool running;
@property (nonatomic, getter=isAutoShutdownEnabled) _Bool autoShutdownEnabled;
@property (copy, readonly) NSSet *attachedNodes;
@property (nonatomic, readonly) CDUnknownBlockType manualRenderingBlock;
@property (nonatomic, readonly) _Bool isInManualRenderingMode;
@property (nonatomic, readonly) long long manualRenderingMode;
@property (nonatomic, readonly) AVAudioFormat *manualRenderingFormat;
@property (nonatomic, readonly) unsigned int manualRenderingMaximumFrameCount;
@property (nonatomic, readonly) long long manualRenderingSampleTime;

- (id)init;
- (void)dealloc;
- (id)description;
- (void)pause;
- (void)stop;
- (void)reset;
- (void)prepare;
- (struct AVAudioEngineImpl *)implementation;
- (void)attachNode:(id)arg1;
- (void)connect:(id)arg1 to:(id)arg2 fromBus:(unsigned long long)arg3 toBus:(unsigned long long)arg4 format:(id)arg5;
- (void)detachNode:(id)arg1;
- (_Bool)startAndReturnError:(id *)arg1;
- (void)connect:(id)arg1 to:(id)arg2 format:(id)arg3;
- (void)connect:(id)arg1 toConnectionPoints:(id)arg2 fromBus:(unsigned long long)arg3 format:(id)arg4;
- (void)disconnectNodeInput:(id)arg1 bus:(unsigned long long)arg2;
- (void)disconnectNodeOutput:(id)arg1 bus:(unsigned long long)arg2;
- (void)disconnectNodeInput:(id)arg1;
- (void)disconnectNodeOutput:(id)arg1;
- (id)inputConnectionPointForNode:(id)arg1 inputBus:(unsigned long long)arg2;
- (id)outputConnectionPointsForNode:(id)arg1 outputBus:(unsigned long long)arg2;
- (_Bool)enableManualRenderingMode:(long long)arg1 format:(id)arg2 maximumFrameCount:(unsigned int)arg3 error:(id *)arg4;
- (void)disableManualRenderingMode;
- (long long)renderOffline:(unsigned int)arg1 toBuffer:(id)arg2 error:(id *)arg3;
- (void)connectMIDI:(id)arg1 to:(id)arg2 format:(id)arg3 block:(CDUnknownBlockType)arg4;
- (void)connectMIDI:(id)arg1 toNodes:(id)arg2 format:(id)arg3 block:(CDUnknownBlockType)arg4;
- (void)disconnectMIDI:(id)arg1 from:(id)arg2;
- (void)disconnectMIDI:(id)arg1 fromNodes:(id)arg2;
- (void)disconnectMIDIInput:(id)arg1;
- (void)disconnectMIDIOutput:(id)arg1;

@end
