/*
 Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

#import <NSObject.h>

#import <Celestial/Swift-Protocol.h>

@class FigCaptureMovieFileRecordingSettings, NSArray, NSString, NSURL;

@interface BWIrisMovieInfo : NSObject <Swift>

{
    FigCaptureMovieFileRecordingSettings *_settings;
    NSURL *_outputMovieURL;
    NSURL *_temporaryMovieURL;
    NSURL *_spatialOverCaptureMasterMovieURL;
    NSURL *_spatialOverCaptureTemporaryMovieURL;
    NSURL *_spatialOverCaptureOutputMovieURL;
    _Bool _spatialOverCaptureExpected;
    CDStruct_1b6d18a9 _stillImageCaptureTime;
    CDStruct_1b6d18a9 _stillImageCaptureHostTime;
    double _stillImageCaptureAbsoluteStartTime;
    int _stillImageCaptureType;
    _Bool _isMomentCaptureMovieRecording;
    CDStruct_1b6d18a9 _momentCaptureMovieRecordingMasterEndTime;
    struct CGSize _nonDestructiveCropSize;
    CDStruct_1b6d18a9 _movieStartTime;
    CDStruct_1b6d18a9 _movieEndTime;
    CDStruct_1b6d18a9 _movieTrimStartTime;
    CDStruct_1b6d18a9 _movieTrimEndTime;
    CDStruct_1b6d18a9 _beginTrimMasterPTS;
    CDStruct_1b6d18a9 _audioOffset;
    CDStruct_1b6d18a9 _stillTimeOffsetToVideoPrerollStartInMilliseconds;
    CDStruct_1b6d18a9 _stillTimeOffsetToVideoPrerollStopInMilliseconds;
    CDStruct_1b6d18a9 _stillTimeOffsetToAudioPrerollStartInMilliseconds;
    CDStruct_1b6d18a9 _stillTimeOffsetToAudioPrerollStopInMilliseconds;
    CDStruct_1b6d18a9 _masterMovieStartTime;
    NSURL *_masterMovieURL;
    _Bool _finalReferenceMovie;
    _Bool _stillImageEncoderKeyFrameEmitted;
    _Bool _stillImageVISKeyFrameTagged;
    _Bool _finalEnqueuedIrisRequest;
    _Bool _isOverlappingRequest;
    _Bool _originalPhotoRecording;
    unsigned int _requestedSDOFVariants;
    NSURL *_temporaryURLForSDOFOriginalMovie;
    NSURL *_outputURLForSDOFOriginalMovie;
    NSArray *_movieLevelMetadataForSDOFOriginalMovie;
    _Bool _vitalityScoreValid;
    float _vitalityScore;
    unsigned int _vitalityScoringVersion;
    CDStruct_1b6d18a9 _stillTimeOffsetToVideoPrerollStartTime;
    CDStruct_1b6d18a9 _stillTimeOffsetToVideoPrerollStopTime;
    CDStruct_1b6d18a9 _stillTimeOffsetToAudioPrerollStartTime;
    CDStruct_1b6d18a9 _stillTimeOffsetToAudioPrerollStopTime;
}

@property (retain, nonatomic) NSURL *outputMovieURL;
@property (retain, nonatomic) NSURL *spatialOverCaptureOutputMovieURL;
@property (nonatomic, getter=isOriginalPhotoRecording) _Bool originalPhotoRecording;
@property (nonatomic, readonly) FigCaptureMovieFileRecordingSettings *settings;
@property (nonatomic) CDStruct_1b6d18a9 stillImageCaptureTime;
@property (nonatomic, readonly) CDStruct_1b6d18a9 stillImageCaptureHostTime;
@property (nonatomic, readonly) double stillImageCaptureAbsoluteStartTime;
@property (nonatomic, readonly) int stillImageCaptureType;
@property (nonatomic, getter=isMomentCaptureMovieRecording) _Bool momentCaptureMovieRecording;
@property (nonatomic) CDStruct_1b6d18a9 momentCaptureMovieRecordingMasterEndTime;
@property (nonatomic) struct CGSize nonDestructiveCropSize;
@property (nonatomic) CDStruct_1b6d18a9 movieStartTime;
@property (nonatomic) CDStruct_1b6d18a9 movieEndTime;
@property (nonatomic) CDStruct_1b6d18a9 movieTrimStartTime;
@property (nonatomic) CDStruct_1b6d18a9 movieTrimEndTime;
@property (nonatomic) CDStruct_1b6d18a9 beginTrimMasterPTS;
@property (nonatomic, readonly) _Bool containsTrims;
@property (nonatomic) CDStruct_1b6d18a9 masterMovieStartTime;
@property (retain, nonatomic) NSURL *masterMovieURL;
@property (retain, nonatomic) NSURL *temporaryMovieURL;
@property (retain, nonatomic) NSURL *spatialOverCaptureMasterMovieURL;
@property (retain, nonatomic) NSURL *spatialOverCaptureTemporaryMovieURL;
@property (nonatomic) _Bool spatialOverCaptureExpected;
@property (nonatomic, getter=isFinalReferenceMovie) _Bool finalReferenceMovie;
@property (nonatomic) _Bool stillImageEncoderKeyFrameEmitted;
@property (nonatomic) _Bool stillImageVISKeyFrameTagged;
@property (nonatomic) CDStruct_1b6d18a9 audioOffset;
@property (nonatomic) CDStruct_1b6d18a9 stillTimeOffsetToVideoPrerollStartTime;
@property (nonatomic) CDStruct_1b6d18a9 stillTimeOffsetToVideoPrerollStopTime;
@property (nonatomic) CDStruct_1b6d18a9 stillTimeOffsetToAudioPrerollStartTime;
@property (nonatomic) CDStruct_1b6d18a9 stillTimeOffsetToAudioPrerollStopTime;
@property (nonatomic, getter=isFinalEnqueuedIrisRequest) _Bool finalEnqueuedIrisRequest;
@property (nonatomic) _Bool isOverlappingRequest;
@property (nonatomic, readonly) int numberOfRequestedVariants;
@property (nonatomic) unsigned int requestedSDOFVariants;
@property (copy, nonatomic) NSURL *temporaryURLForSDOFOriginalMovie;
@property (copy, nonatomic) NSURL *outputURLForSDOFOriginalMovie;
@property (copy, nonatomic) NSArray *movieLevelMetadataForSDOFOriginalMovie;
@property (nonatomic, getter=isVitalityScoreValid) _Bool vitalityScoreValid;
@property (nonatomic) float vitalityScore;
@property (nonatomic) unsigned int vitalityScoringVersion;
@property (nonatomic, readonly) NSString *livePhotoMetadataStillImageKeyFrameSettingsID;

+ (id)livePhotoMetadataStillImageKeyFrameSettingsIDForSettingsID:(long long)arg1 isOriginalPhotoRecording:(_Bool)arg2;
+ (id)irisMovieInfoWithFigCaptureMovieFileRecordingSettings:(id)arg1 stillImageCaptureTime:(CDStruct_1b6d18a9)arg2 stillImageCaptureHostTime:(CDStruct_1b6d18a9)arg3 stillImageCaptureAbsoluteStartTime:(double)arg4 stillImageCaptureType:(int)arg5 originalPhotoRecording:(_Bool)arg6;

- (void)dealloc;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)_initWithFigCaptureMovieFileRecordingSettings:(id)arg1 stillImageCaptureTime:(CDStruct_1b6d18a9)arg2 stillImageCaptureHostTime:(CDStruct_1b6d18a9)arg3 stillImageCaptureAbsoluteStartTime:(double)arg4 stillImageCaptureType:(int)arg5 originalPhotoRecording:(_Bool)arg6;
- (void)setMomentCaptureRecordingStillImageCaptureHostTimeOverride:(CDStruct_1b6d18a9)arg1 stillImageCaptureTimeOverride:(CDStruct_1b6d18a9)arg2;
- (id)copyMovieInfosForRequestedSDOFVariants;
- (id)copySpatialOverCaptureVariant;

@end
