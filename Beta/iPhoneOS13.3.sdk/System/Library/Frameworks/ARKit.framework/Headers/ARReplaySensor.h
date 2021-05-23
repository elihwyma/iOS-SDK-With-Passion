/*
 Image: /System/Library/Frameworks/ARKit.framework/ARKit
 */

#import <Foundation/NSObject.h>

@class ARImageCroppingTechnique, AVAssetReader, AVAssetReaderOutputMetadataAdaptor, AVAssetReaderTrackOutput, AVURLAsset, NSArray, NSDictionary, NSMutableArray, NSSet, NSString, NSURL;

@protocol ARReplaySensorDelegate, ARSensorDelegate, OS_dispatch_queue, OS_dispatch_source;

@interface ARReplaySensor : NSObject

{
    _Bool _manualCommandLineMode;
    AVURLAsset *_asset;
    NSMutableArray *_arImageData;
    NSMutableArray *_arAccelerometerData;
    NSMutableArray *_arGyroData;
    NSMutableArray *_arDeviceOrientationData;
    NSMutableArray *_arLocationData;
    CDUnknownBlockType _customDataGetter;
    NSDictionary *_recordedResultGetters;
    double _originalToReplayTimestampDifference;
    NSObject<OS_dispatch_queue> *_replayQueue;
    NSObject<OS_dispatch_source> *_timer;
    double _startTime;
    long long _tick;
    double _frameRateScale;
    double _timestampWhenFramerateChanged;
    double _imageTimestampWhenFramerateChanged;
    int _imageIndexForPreloading;
    int _accelDataIndex;
    int _gyroDataIndex;
    int _deviceOrientationDataIndex;
    int _locationDataIndex;
    _Bool _running;
    _Bool _metadataLoadedFromAsset;
    _Bool _interrupted;
    _Bool _replayStarted;
    _Atomic _Bool _finishedReplaying;
    struct opaqueCMSampleBuffer *_nextSampleBuffer;
    AVAssetReader *_assetReader;
    AVAssetReaderTrackOutput *_imageOutput;
    AVAssetReaderTrackOutput *_depthOutput;
    struct opaqueCMSampleBuffer *_nextDepthSampleBuffer;
    AVAssetReaderOutputMetadataAdaptor *_oldMotionOutputMetadataAdaptor;
    AVAssetReaderOutputMetadataAdaptor *_accelOutputMetadataAdaptor;
    AVAssetReaderOutputMetadataAdaptor *_gyroOutputMetadataAdaptor;
    AVAssetReaderOutputMetadataAdaptor *_imageOutputMetadataAdaptor;
    AVAssetReaderOutputMetadataAdaptor *_accelOutputMetadataAdaptor_CV3D;
    AVAssetReaderOutputMetadataAdaptor *_gyroOutputMetadataAdaptor_CV3D;
    AVAssetReaderOutputMetadataAdaptor *_deviceMotionOutputMetadataAdaptor_CV3D;
    AVAssetReaderOutputMetadataAdaptor *_locationMetadataAdaptor_CV3D;
    AVAssetReaderOutputMetadataAdaptor *_imageOutputMetadataAdaptor_CV3D;
    AVAssetReaderOutputMetadataAdaptor *_deviceOrientationOutputMetadataAdaptor;
    AVAssetReaderOutputMetadataAdaptor *_customDataOutputMetadataAdaptor;
    NSDictionary *_recordedResultAdaptors;
    _Bool _displaySynchronizationMarker;
    long long _displaySynchronizationMarkerFrames;
    struct __CVBuffer *_synchronizationMarker;
    struct __CVPixelBufferPool *_synchronizationMarkerPool;
    struct OpaqueVTPixelTransferSession *_synchronizationTransferSession;
    unsigned long long _sensorDataTypes;
    ARImageCroppingTechnique *_croppingTechnique;
    _Bool _isReplayingManually;
    _Bool _synchronousMode;
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
    long long _targetFrameIndex;
    struct CGSize _imageResolution;
}

@property (nonatomic) int imageIndex;
@property long long nextFrameIndex;
@property long long targetFrameIndex;
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
- (_Bool)hasMoreData;
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
- (void)readFileMetadataFromAsset:(id)arg1;
- (void)endReplay;
- (void)prepareForReplay;
- (void)startReplayIfNeeded;
- (void)initializeAssetReaderWithAsset:(id)arg1 buffersOnly:(_Bool)arg2;
- (void)loadAllMetadata;
- (void)fastForwardIndexesToTime:(double)arg1;
- (void)preloadNextPixelBuffers:(int)arg1;
- (id)getResultDataForClasses:(id)arg1 atTimestamp:(double)arg2;
- (_Bool)track:(id)arg1 hasMetadataIdentifier:(id)arg2;
- (id)createAndAddMetadataAdaptorForTrack:(id)arg1;
- (id)unpackItemsOfClass:(Class)arg1 withIdentifier:(id)arg2 inOutputAdaptor:(id)arg3;
- (void)enumerateDataWithIdentifier:(id)arg1 inOutputAdaptor:(id)arg2 usingBlock:(CDUnknownBlockType)arg3;
- (id)unpackTimestampedCV3DDictionaryItemsOfClass:(Class)arg1 withIdentifier:(id)arg2 inOutputAdaptor:(id)arg3;
- (id)unpackTimestampedItemsOfClasses:(id)arg1 withIdentifier:(id)arg2 inOutputAdaptor:(id)arg3;
- (CDUnknownBlockType)createResultForTimestampGetterBlockFromTimestampedResults:(id)arg1;
- (void)tick;
- (_Bool)hasImageDataForTimestamp:(double)arg1;
- (id)getNextImageData;
- (_Bool)hasAccelerometerDataForTime:(double)arg1;
- (id)getNextAccelerometerData;
- (void)_didOutputSensorData:(id)arg1;
- (_Bool)hasGyroDataForTime:(double)arg1;
- (id)getNextGyroData;
- (_Bool)hasDeviceOrientationDataForTime:(double)arg1;
- (id)getNextDeviceOrientationData;
- (_Bool)hasLocationDataForTime:(double)arg1;
- (id)getNextLocationData;
- (struct __CVBuffer *)requestNextPixelBufferForTimestamp:(double)arg1;
- (struct __CVBuffer *)requestNextDepthPixelBufferForTimestamp:(double)arg1;

@end
