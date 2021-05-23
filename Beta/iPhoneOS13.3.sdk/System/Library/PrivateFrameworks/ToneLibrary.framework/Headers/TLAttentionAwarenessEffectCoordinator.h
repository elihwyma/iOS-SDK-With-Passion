/*
 Image: /System/Library/PrivateFrameworks/ToneLibrary.framework/ToneLibrary
 */

#import <Foundation/NSObject.h>

@class CAReporter, NSMutableSet, NSString;

@protocol OS_dispatch_queue;

@interface TLAttentionAwarenessEffectCoordinator : NSObject

{
    NSString *_accessQueueLabel;
    NSObject<OS_dispatch_queue> *_accessQueue;
    long long _preEffectIssueDetectorID;
    long long _postEffectIssueDetectorID;
    CAReporter *_reporter;
    struct AudioTimeStamp _audioTimeStamp;
    NSMutableSet *_effectAudioTapContexts;
    CDStruct_4922f917 _effectParameters;
}

@property (nonatomic) CDStruct_4922f917 effectParameters;

- (void)dealloc;
- (void)setEffectParameters:(CDStruct_4922f917)arg1 effectMixFadeDuration:(double)arg2;
- (id)initWithEffectParameters:(CDStruct_4922f917)arg1;
- (id)audioMixForAsset:(id)arg1;
- (_Bool)isAttentionAwarenessAudioMix:(id)arg1;
- (void)_prepareAudioProcessingWithEffectAudioTapContext:(id)arg1 maximumNumberOfFrames:(unsigned int)arg2 processingFormat:(const struct AudioStreamBasicDescription *)arg3;
- (void)_unprepareAudioProcessingWithEffectAudioTapContext:(id)arg1;
- (void)_finalizeAudioProcessingWithEffectAudioTapContext:(id)arg1;
- (void)_processAudioWithEffectAudioTapContext:(id)arg1 bufferList:(struct AudioBufferList *)arg2 numberOfFramesRequested:(unsigned int)arg3 numberOfFramesToProcess:(unsigned int)arg4;

@end
