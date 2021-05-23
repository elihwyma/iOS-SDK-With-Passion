/*
 Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

#import <Celestial/FigCaptureRecordingSettings.h>

@class NSArray, NSDictionary, NSURL;

@interface FigCaptureMovieFileRecordingSettings : FigCaptureRecordingSettings

{
    NSDictionary *_videoSettings;
    NSDictionary *_audioSettings;
    _Bool _videoMirrored;
    int _videoOrientation;
    _Bool _recordVideoOrientationAndMirroringChanges;
    CDStruct_1b6d18a9 _movieFragmentInterval;
    NSArray *_movieLevelMetadata;
    _Bool _sendPreviewIOSurface;
    _Bool _irisRecording;
    _Bool _debugMetadataSidecarFileEnabled;
    int _bravoCameraSelectionBehavior;
    _Bool _irisMovieRecording;
    NSURL *_spatialOverCaptureMovieURL;
    NSArray *_spatialOverCaptureMovieLevelMetadata;
    unsigned long long _movieStartTimeOverride;
}

@property (copy, nonatomic) NSDictionary *videoSettings;
@property (copy, nonatomic) NSDictionary *audioSettings;
@property (nonatomic) _Bool videoMirrored;
@property (nonatomic) int videoOrientation;
@property (nonatomic) _Bool recordVideoOrientationAndMirroringChanges;
@property (nonatomic) CDStruct_1b6d18a9 movieFragmentInterval;
@property (copy, nonatomic) NSArray *movieLevelMetadata;
@property (nonatomic) _Bool sendPreviewIOSurface;
@property (nonatomic, getter=isIrisRecording) _Bool irisRecording;
@property (nonatomic) _Bool debugMetadataSidecarFileEnabled;
@property (nonatomic) int bravoCameraSelectionBehavior;
@property (nonatomic, getter=isIrisMovieRecording) _Bool irisMovieRecording;
@property (copy, nonatomic) NSURL *spatialOverCaptureMovieURL;
@property (copy, nonatomic) NSArray *spatialOverCaptureMovieLevelMetadata;
@property (nonatomic) unsigned long long movieStartTimeOverride;

+ (_Bool)supportsSecureCoding;

- (id)init;
- (void)dealloc;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
