/*
 Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

#import <Celestial/BWNode.h>

@class NSObject;

@protocol OS_dispatch_queue;

@interface BWVideoOrientationMetadataNode : BWNode

{
    struct OpaqueCMClock *_clock;
    struct OpaqueCMClock *_masterClock;
    int _videoOrientation;
    _Bool _videoMirrored;
    int _sourcePosition;
    struct opaqueCMFormatDescription *_boxedMetadataFormatDescription;
    unsigned int _localIDOfOrientationMetadata;
    _Bool _recordVideoOrientationAndMirroringChanges;
    _Bool _recording;
    int _exifOrientation;
    struct OpaqueCMBlockBuffer *_bbufCache[8];
    NSObject<OS_dispatch_queue> *_emitSamplesDispatchQueue;
}

+ (void)initialize;

- (id)init;
- (void)dealloc;
- (id)nodeType;
- (struct OpaqueCMClock *)masterClock;
- (void)setMasterClock:(struct OpaqueCMClock *)arg1;
- (void)configurationWithID:(long long)arg1 updatedFormat:(id)arg2 didBecomeLiveForInput:(id)arg3;
- (void)didReachEndOfDataForInput:(id)arg1;
- (id)nodeSubType;
- (void)renderSampleBuffer:(struct opaqueCMSampleBuffer *)arg1 forInput:(id)arg2;
- (void)prepareForCurrentConfigurationToBecomeLive;
- (int)sourcePosition;
- (void)updateVideoOrientation:(int)arg1;
- (void)updateVideoMirrored:(_Bool)arg1;
- (void)setSourcePosition:(int)arg1;
- (void)_releaseCachedBBufs;
- (void)_determineExifOrientation;
- (void)_emitBufferForNewStateIfRecording;
- (void)_emitValidatedVideoOrientationSampleBufferForBoxedFormatOutputAtTime:(CDStruct_1b6d18a9)arg1;

@end
