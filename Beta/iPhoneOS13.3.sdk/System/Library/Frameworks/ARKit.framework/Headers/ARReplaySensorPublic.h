/*
 Image: /System/Library/Frameworks/ARKit.framework/ARKit
 */

#import <Foundation/NSObject.h>

@class ARImageCroppingTechnique, ARParentImageSensorSettings, MOVReaderInterface, NSArray, NSMutableDictionary, NSSet, NSString, NSURL;

@protocol ARReplaySensorDelegate, ARSensorDelegate, OS_dispatch_queue, OS_dispatch_source;

@interface ARReplaySensorPublic : NSObject

{
    _Bool _manualCommandLineMode;
    NSMutableDictionary *_nextWrappedImageDataForStreamIdentifierMap;
    NSMutableDictionary *_metadataCache;
    double _recordTimestampToMovieTimestampDifference;
    NSObject<OS_dispatch_queue> *_replayQueue;
    NSObject<OS_dispatch_source> *_timer;
    double _startTime;
    long long _tick;
    double _frameRateScale;
    double _timestampWhenFramerateChanged;
    NSMutableDictionary *_imageTimestampOfStreamWhenFramerateChanged;
    _Bool _running;
    _Bool _interrupted;
    _Bool _replayStarted;
    _Atomic _Bool _finishedReplaying;
    MOVReaderInterface *_reader;
    _Bool _displaySynchronizationMarker;
    long long _displaySynchronizationMarkerFrames;
    struct __CVBuffer *_synchronizationMarker;
    struct __CVPixelBufferPool *_synchronizationMarkerPool;
    struct OpaqueVTPixelTransferSession *_synchronizationTransferSession;
    ARImageCroppingTechnique *_croppingTechnique;
    NSSet *_availableVideoStreams;
    NSSet *_availableMetadataStreams;
    NSSet *_videoStreamsToReplay;
    _Bool _isReplayingManually;
    _Bool _synchronousMode;
    _Bool _recordingTimeToReplayTimeOffsetReset;
    float _advanceFramesPerSecondMultiplier;
    int _imageIndex;
    id <ARSensorDelegate> _delegate;
    id <ARReplaySensorDelegate> _replaySensorDelegate;
    NSURL *_sequenceURL;
    NSString *_deviceModel;
    NSString *_osVersion;
    NSString *_arkitVersion;
    double _nominalFrameRate;
    unsigned long long _recordedSensorTypes;
    NSSet *_recordedResultClasses;
    unsigned long long _forcePlaybackFramesPerSecond;
    long long _nextFrameIndex;
    NSSet *_customDataClasses;
    ARParentImageSensorSettings *_parentImageSensorSettings;
    NSString *_mainVideoStreamIdentifier;
    long long _targetFrameIndex;
    double _recordingTimeToReplayTimeOffset;
    struct CGSize _imageResolution;
}

@property (nonatomic) int imageIndex;
@property long long nextFrameIndex;
@property long long targetFrameIndex;
@property (nonatomic) double recordingTimeToReplayTimeOffset;
@property (nonatomic) _Bool recordingTimeToReplayTimeOffsetReset;
@property (weak, nonatomic) id <ARSensorDelegate> delegate;
@property (weak) id <ARReplaySensorDelegate> replaySensorDelegate;
@property (nonatomic, readonly) NSURL *sequenceURL;
@property (nonatomic, readonly) NSString *deviceModel;
@property (nonatomic, readonly) NSString *osVersion;
@property (nonatomic, readonly) NSString *arkitVersion;
@property (nonatomic, readonly) struct CGSize imageResolution;
@property (nonatomic, readonly) double nominalFrameRate;
@property (nonatomic, readonly) unsigned long long recordedSensorTypes;
@property (nonatomic, readonly) NSSet *recordedResultClasses;
@property (nonatomic, readonly) NSArray *recordedResultClassList;
@property (nonatomic, readonly) _Bool isReplayingManually;
@property (nonatomic, readonly, getter=isSynchronousMode) _Bool synchronousMode;
@property (nonatomic) unsigned long long forcePlaybackFramesPerSecond;
@property float advanceFramesPerSecondMultiplier;
@property (copy, nonatomic) NSSet *customDataClasses;
@property (retain, nonatomic) ARParentImageSensorSettings *parentImageSensorSettings;
@property (retain, nonatomic) NSString *mainVideoStreamIdentifier;
@property (nonatomic, readonly) _Bool interrupted;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic) unsigned long long powerUsage;
@property (nonatomic, readonly) _Bool finishedReplaying;

- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (void)failWithError:(id)arg1;
- (void)stop;
- (void)start;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)interrupt;
- (double)currentTime;
- (void)advance;
- (void)endInterruption;
- (unsigned long long)providedDataTypes;
- (id)initWithDataFromFile:(id)arg1;
- (id)initWithSequenceURL:(id)arg1 manualReplay:(_Bool)arg2;
- (id)initWithSequenceURL:(id)arg1 manualReplay:(_Bool)arg2 synchronousMode:(_Bool)arg3;
- (void)advanceFrame;
- (void)advanceToFrameIndex:(long long)arg1;
- (id)replayTechniqueForResultDataClasses:(id)arg1;
- (id)customDataForTimestamp:(double)arg1;
- (void)endReplay;
- (void)prepareForReplay;
- (void)startReplayIfNeeded;
- (void)tick;
- (void)_didOutputSensorData:(id)arg1;
- (void)readFileMetadata;
- (id)getResultDataForClasses:(id)arg1 upToRecordTime:(double)arg2;
- (CDUnknownBlockType)keyedArchiveConverterForClasses:(id)arg1;
- (id)getItemsFromStream:(id)arg1 upToMovieTime:(double)arg2 converter:(CDUnknownBlockType)arg3;
- (CDStruct_1b6d18a9)currentCMTime;
- (id)peekNextWrappedImageDataForAllRequiredStreams;
- (void)_replaySensorFinishedReplayingData;
- (id)imageDataToReplayForTimestamp:(double)arg1;
- (id)getNextWrappedImageDataForReplay;
- (id)wrappedImageDataOrderedByTime:(id)arg1;
- (CDUnknownBlockType)metadataWrapperConverter:(Class)arg1;
- (CDUnknownBlockType)starDataConverter;
- (id)peekNextWrappedImageDataForStreamIdentifier:(id)arg1;
- (CDUnknownBlockType)keyedArchiveConverter:(Class)arg1;
- (id)getWrappedItemsFromStream:(id)arg1 upToMovieTime:(double)arg2 converter:(CDUnknownBlockType)arg3;
- (id)getNextWrappedItemsFromStream:(id)arg1 converter:(CDUnknownBlockType)arg2;
- (id)availableVideoFormatForDeviceType:(id)arg1 position:(long long)arg2;

@end
