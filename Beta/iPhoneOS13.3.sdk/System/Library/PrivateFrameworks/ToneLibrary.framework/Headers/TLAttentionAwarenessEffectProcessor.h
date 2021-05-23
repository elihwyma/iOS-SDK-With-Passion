/*
 Image: /System/Library/PrivateFrameworks/ToneLibrary.framework/ToneLibrary
 */

#import <Foundation/NSObject.h>

@class AVAudioEngine, AVAudioInputNode, AVAudioPCMBuffer, AVAudioUnitEQ, AVAudioUnitReverb, NSString;

@protocol OS_dispatch_queue, OS_dispatch_source;

@interface TLAttentionAwarenessEffectProcessor : NSObject

{
    NSObject<OS_dispatch_queue> *_accessQueue;
    NSString *_accessQueueLabel;
    AVAudioPCMBuffer *_destinationPCMBuffer;
    AVAudioEngine *_engine;
    AVAudioInputNode *_inputNode;
    struct AudioBufferList *_inputNodeInputBufferList;
    AVAudioUnitEQ *_lowPassFilter;
    AVAudioUnitReverb *_reverb;
    CDStruct_4922f917 _effectParameters;
    NSObject<OS_dispatch_source> *_effectMixFadingTimer;
}

@property (nonatomic) CDStruct_4922f917 effectParameters;

- (void)dealloc;
- (void)stop;
- (_Bool)start;
- (void)setEffectParameters:(CDStruct_4922f917)arg1 effectMixFadeDuration:(double)arg2;
- (id)initWithProcessingFormat:(id)arg1 framesPerRender:(unsigned int)arg2 effectParameters:(CDStruct_4922f917)arg3;
- (struct AudioBufferList *)render:(struct AudioBufferList *)arg1 numberOfFrames:(unsigned int)arg2;
- (void)_assertRunningOnAccessQueue;
- (void)_applyEffectParameters:(CDStruct_4922f917)arg1 includingEffectMix:(_Bool)arg2;
- (float)_sanitizeEffectMix:(float)arg1;
- (void)_applyEffectMix:(float)arg1;
- (float)_currentEffectMix;
- (void)_assertNotRunningOnAccessQueue;

@end
