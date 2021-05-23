/*
 Image: /System/Library/Frameworks/ARKit.framework/ARKit
 */

#import <ARKit/ARTechnique.h>

@class AVAssetWriter, AVAssetWriterInput, AVAssetWriterInputMetadataAdaptor, AVAssetWriterInputPixelBufferAdaptor, NSDictionary, NSMutableArray, NSMutableDictionary, NSObject, NSSet, NSString, NSURL;

@protocol ARRecordingTechniqueDelegate, OS_dispatch_queue, OS_dispatch_semaphore;

@interface ARRecordingTechnique : ARTechnique

{
    NSObject<OS_dispatch_queue> *_processingQueue;
    AVAssetWriter *_assetWriter;
    AVAssetWriterInput *_videoInput;
    AVAssetWriterInput *_videoMetadataInput;
    AVAssetWriterInput *_videoMetadataInput_CV3D;
    AVAssetWriterInput *_audioInput;
    AVAssetWriterInput *_accelInput_CV3D;
    AVAssetWriterInput *_gyroInput_CV3D;
    AVAssetWriterInput *_deviceOrientationInput_CV3D;
    AVAssetWriterInput *_locationInput_CV3D;
    AVAssetWriterInput *_customDataInput;
    AVAssetWriterInputPixelBufferAdaptor *_videoInputAdaptor;
    AVAssetWriterInput *_depthInput;
    AVAssetWriterInputPixelBufferAdaptor *_depthInputAdaptor;
    AVAssetWriterInputMetadataAdaptor *_accelInputAdaptor_CV3D;
    AVAssetWriterInputMetadataAdaptor *_gyroInputAdaptor_CV3D;
    AVAssetWriterInputMetadataAdaptor *_videoMetadataInputAdaptor;
    AVAssetWriterInputMetadataAdaptor *_videoMetadataInputAdaptor_CV3D;
    AVAssetWriterInputMetadataAdaptor *_deviceOrientationInputAdaptor_CV3D;
    AVAssetWriterInputMetadataAdaptor *_locationInputAdaptor_CV3D;
    AVAssetWriterInputMetadataAdaptor *_customDataInputAdaptor;
    NSDictionary *_resultAdaptors;
    NSDictionary *_resultInputs;
    NSObject<OS_dispatch_semaphore> *_inputIsReadySemaphore;
    _Bool _isWaitingUntilInputIsReady;
    unsigned long long _sensorDataTypes;
    NSSet *_recordableResultClasses;
    NSMutableArray *_sensorDataCache;
    NSMutableArray *_gyroDataQueue;
    NSMutableArray *_accelDataQueue;
    NSMutableArray *_orientationDataQueue;
    NSMutableArray *_locationDataQueue;
    double _imuTemperature;
    double _sessionSourceTime;
    NSMutableDictionary *_lastRecordedTimestamps;
    unsigned long long _state;
    _Bool _expectDepthData;
    _Bool _expectAudioData;
    _Bool _expectCustomData;
    _Bool _shouldSaveVideoInPhotosLibrary;
    NSURL *_outputFileURL;
    id <ARRecordingTechniqueDelegate> _recordingTechniqueDelegate;
}

@property (nonatomic, readonly) NSURL *outputFileURL;
@property (nonatomic) _Bool expectDepthData;
@property (nonatomic) _Bool expectAudioData;
@property (nonatomic) _Bool expectCustomData;
@property (nonatomic) _Bool shouldSaveVideoInPhotosLibrary;
@property (weak) id <ARRecordingTechniqueDelegate> recordingTechniqueDelegate;
@property (nonatomic, readonly) unsigned long long recordingSensorDataTypes;
@property (nonatomic, readonly) NSSet *recordingResultDataClasses;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)metadataIdentifierForARRecordableResultsClass:(Class)arg1;

- (id)init;
- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)startRecording;
- (id)processData:(id)arg1;
- (void)writeImageData:(id)arg1;
- (void)requestResultDataAtTimestamp:(double)arg1 context:(id)arg2;
- (unsigned long long)requiredSensorDataTypes;
- (id)initWithFileURL:(id)arg1 recordingSensorDataTypes:(unsigned long long)arg2 recordingResultDataClasses:(id)arg3;
- (id)initWithFileURL:(id)arg1 sensorDataTypes:(unsigned long long)arg2;
- (id)initWithFileURL:(id)arg1 recordingSensorDataTypes:(unsigned long long)arg2 recordingResultDataClasses:(id)arg3 startImmediately:(_Bool)arg4;
- (void)finishRecording;
- (void)writeAudioData:(id)arg1;
- (void)removeTemporaryVideoFile;
- (id)createFileMetadata;
- (void)setupCustomTrack;
- (void)writeDepthMap:(id)arg1 withTimestamp:(CDStruct_1b6d18a9)arg2;
- (void)copyVideoToPhotoLibrary;
- (void)recordCustomData:(id)arg1 forTimestamp:(double)arg2;
- (struct CGAffineTransform)computeVideoTransformForDeviceOrientationWithCameraPosition:(long long)arg1;
- (void)writeOutCachedSensorDataIfPresent;
- (void)writeAccelerometerMetadata:(id)arg1;
- (void)writeGyroscopeMetadata:(id)arg1;
- (void)writeDeviceOrientationMetadata:(id)arg1;
- (void)writeLocationMetadata:(id)arg1;
- (void)writeMetadata:(id)arg1 withTimestamp:(double)arg2 toInputAdaptor:(id)arg3 withIdentifier:(id)arg4;
- (void)createAssetWriter;
- (void)setupSensorTracksWithImageData:(id)arg1;
- (void)setupResultTracks;
- (void)startAssetWriterAtTimestamp:(double)arg1;
- (void)initAssetWriterIfRequiredWithImageData:(id)arg1;
- (void)writePixelBuffer:(struct __CVBuffer *)arg1 withTimestamp:(CDStruct_1b6d18a9)arg2;
- (id)getMetadataForBuffer:(struct __CVBuffer *)arg1 additionalMetadata:(id)arg2;
- (void)writeMetadata:(id)arg1 withTimestamp:(double)arg2 toInputAdaptor:(id)arg3 withIdentifier:(id)arg4 withMetaItems:(id)arg5;
- (void)writeImageMetadata:(id)arg1;
- (id)makeMetaDataDictionaryItems:(id)arg1 withIdentifier:(id)arg2;
- (id)getJsonFriendlyCopy:(id)arg1;
- (_Bool)isValidJSONObject:(id)arg1 path:(id)arg2;

@end
