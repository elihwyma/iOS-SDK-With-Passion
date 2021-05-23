/*
 Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import <AVFoundation/AVAssetWriterInputHelper.h>

@class AVAssetWriterInputMediaDataRequester, AVAssetWriterInputPassDescription, AVFigAssetWriterTrack, AVKeyPathDependencyManager, NSObject, NSString;

@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface AVAssetWriterInputWritingHelper : AVAssetWriterInputHelper

{
    AVFigAssetWriterTrack *_assetWriterTrack;
    AVAssetWriterInputMediaDataRequester *_mediaDataRequester;
    _Bool _observingSelf;
    struct __CVPixelBufferPool *_pixelBufferPool;
    AVAssetWriterInputPassDescription *_currentPassDescription;
    AVKeyPathDependencyManager *_keyPathDependencyManager;
    NSObject<OS_dispatch_queue> *_mediaDataRequesterSerialQueue;
    NSObject<OS_dispatch_queue> *_readyForMoreMediaDataObserverSerialQueue;
}

@property (nonatomic, readonly, getter=_assetWriterTrack) AVFigAssetWriterTrack *assetWriterTrack;
@property (retain, nonatomic) AVAssetWriterInputPassDescription *currentPassDescription;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (long long)status;
- (_Bool)isReadyForMoreMediaData;
- (void)stopRequestingMediaData;
- (void)requestMediaDataWhenReadyOnQueue:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (void)markAsFinished;
- (void)declareKeyPathDependenciesWithRegistry:(id)arg1;
- (void)addCallbackToCancelDuringDeallocation:(id)arg1;
- (id)initWithConfigurationState:(id)arg1;
- (struct __CVPixelBufferPool *)pixelBufferPool;
- (id)initWithConfigurationState:(id)arg1 assetWriterTrack:(id)arg2 error:(id *)arg3;
- (void)didStartInitialSession;
- (void)prepareToEndSession;
- (_Bool)prepareToFinishWritingReturningError:(id *)arg1;
- (id)transitionToAndReturnTerminalHelperWithTerminalStatus:(long long)arg1;
- (_Bool)canPerformMultiplePasses;
- (long long)appendSampleBuffer:(struct opaqueCMSampleBuffer *)arg1 error:(id *)arg2;
- (_Bool)appendPixelBuffer:(struct __CVBuffer *)arg1 withPresentationTime:(CDStruct_1b6d18a9)arg2;
- (void)markCurrentPassAsFinished;
- (void)_startObservingReadyForMoreMediaDataKeyPath;
- (void)_nudgeMediaDataRequesterIfAppropriate:(id)arg1;
- (void)_stopObservingReadyForMoreMediaDataKeyPath;
- (void)beginPassIfAppropriate;
- (void)markAsFinishedAndTransitionCurrentHelper:(id)arg1;
- (_Bool)mediaDataRequesterShouldRequestMediaData;

@end
