/*
 Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

#import <Celestial/BWNode.h>

@class BWPhotoDecompressor, NSMutableArray, NSMutableSet;

@interface BWPhotoDecompressorNode : BWNode

{
    _Bool _downstreamIsSharingOutputPool;
    _Bool _synchronizedSlaveAttachedMediaDecompressionEnabled;
    BWPhotoDecompressor *_photoDecompressor;
    BWPhotoDecompressor *_synchronizedSlavePhotoDecompressor;
    NSMutableArray *_emitSampleBufferSemaphores;
    NSMutableArray *_emitSynchronizedSlaveSampleBufferSemaphores;
    NSMutableSet *_disabledSynchronizedSlaveSemaphores;
    int _numberOfTimesWaited;
    int _numberOfBuffersEmitted;
    int _numberOfTimesSynchronizedSlaveWaited;
    int _numberOfSynchronizedSlaveBuffersEmitted;
}

+ (void)initialize;

- (void)dealloc;
- (id)nodeType;
- (void)didReachEndOfDataForInput:(id)arg1;
- (id)nodeSubType;
- (void)renderSampleBuffer:(struct opaqueCMSampleBuffer *)arg1 forInput:(id)arg2;
- (void)prepareForCurrentConfigurationToBecomeLive;
- (void)handleDroppedSample:(id)arg1 forInput:(id)arg2;
- (void)didSelectFormat:(id)arg1 forInput:(id)arg2 forAttachedMediaKey:(id)arg3;
- (void)_releaseResources;
- (id)initWithSynchronizedSlaveAttachedMediaDecompressionEnabled:(_Bool)arg1;
- (void)setDownstreamIsSharingOutputPool:(_Bool)arg1;
- (void)addEmitSampleBufferSemaphore:(id)arg1;
- (unsigned long long)addEmitSynchronizedSlaveSampleBufferSemaphore:(id)arg1;
- (_Bool)downstreamIsSharingOutputPool;
- (void)setSynchronizedSlaveSemaphoreEnabled:(_Bool)arg1 atIndex:(unsigned long long)arg2;
- (void)_ensureSemaphoresAreBalanced;

@end
