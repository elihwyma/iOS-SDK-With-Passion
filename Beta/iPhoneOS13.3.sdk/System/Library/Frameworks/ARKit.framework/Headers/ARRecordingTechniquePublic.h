/*
 Image: /System/Library/Frameworks/ARKit.framework/ARKit
 */

#import <ARKit/ARTechnique.h>

@class ARParentImageSensorSettings, MOVWriterInterface, NSError, NSMutableDictionary, NSObject, NSSet, NSString, NSURL;

@protocol ARRecordingTechniqueDelegate, OS_dispatch_queue;

@interface ARRecordingTechniquePublic : ARTechnique

{
    NSObject<OS_dispatch_queue> *_masterQueue;
    NSObject<OS_dispatch_queue> *_timeSensitiveQueue;
    MOVWriterInterface *_writer;
    unsigned long long _sensorDataTypes;
    double _sessionSourceTime;
    _Bool _writerReady;
    NSMutableDictionary *_lastRecordedTimestamps;
    NSError *_finishedError;
    _Bool _expectDepthData;
    _Bool _expectAudioData;
    _Bool _expectCustomData;
    _Bool _shouldSaveVideoInPhotosLibrary;
    NSURL *_outputFileURL;
    id <ARRecordingTechniqueDelegate> _recordingTechniqueDelegate;
    ARParentImageSensorSettings *_parentImageSensorSettings;
    unsigned long long _state;
}

@property unsigned long long state;
@property (nonatomic, readonly) NSURL *outputFileURL;
@property (nonatomic) _Bool expectDepthData;
@property (nonatomic) _Bool expectAudioData;
@property (nonatomic) _Bool expectCustomData;
@property (nonatomic) _Bool shouldSaveVideoInPhotosLibrary;
@property (weak) id <ARRecordingTechniqueDelegate> recordingTechniqueDelegate;
@property (nonatomic, readonly) unsigned long long recordingSensorDataTypes;
@property (nonatomic, readonly) NSSet *recordingResultDataClasses;
@property (retain, nonatomic) ARParentImageSensorSettings *parentImageSensorSettings;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)isSupported;
+ (id)metadataIdentifierForARSensorDataClass:(Class)arg1 error:(id *)arg2;
+ (id)metadataIdentifierForARRecordableResultsClass:(Class)arg1;

- (id)init;
- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (_Bool)finished;
- (void)_finish:(id)arg1;
- (void)didFailWithError:(id)arg1;
- (void)startRecording;
- (id)processData:(id)arg1;
- (void)writeImageData:(id)arg1;
- (unsigned long long)requiredSensorDataTypes;
- (id)initWithFileURL:(id)arg1 recordingSensorDataTypes:(unsigned long long)arg2 recordingResultDataClasses:(id)arg3;
- (id)initWithFileURL:(id)arg1 sensorDataTypes:(unsigned long long)arg2;
- (id)initWithFileURL:(id)arg1 recordingSensorDataTypes:(unsigned long long)arg2 recordingResultDataClasses:(id)arg3 startImmediately:(_Bool)arg4;
- (void)finishRecording;
- (void)_startRecording;
- (void)processTimeSensitiveNSCoderObject:(id)arg1 withTimestamp:(double)arg2 metadataID:(id)arg3;
- (void)_finishRecording;
- (void)_fail:(id)arg1;
- (void)writeAudioData:(id)arg1;
- (void)writeStarData:(id)arg1;
- (void)writeSensorData:(id)arg1;
- (void)removeTemporaryVideoFile;
- (id)createFileMetadata;
- (void)setupSensorTracks;
- (void)setupCustomTrack;
- (void)setupStarDataTrack;
- (_Bool)allowedToWrite;
- (void)writeDepthMap:(id)arg1 withTimestamp:(CDStruct_1b6d18a9)arg2;
- (void)copyVideoToPhotoLibrary;
- (void)isReadyToRecord;
- (void)didFinishRecording;
- (void)recordCustomData:(id)arg1 forTimestamp:(double)arg2;
- (void)abortRecording;
- (struct CGAffineTransform)computeVideoTransformForDeviceOrientationWithCameraPosition:(long long)arg1;
- (void)writeResultData:(id)arg1 withTimestamp:(double)arg2;

@end
