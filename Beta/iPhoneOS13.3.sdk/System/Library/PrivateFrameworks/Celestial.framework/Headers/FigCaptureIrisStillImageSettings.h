/*
 Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

#import <Celestial/FigCaptureStillImageSettings.h>

@class FigCaptureMovieFileRecordingSettings, NSArray, NSURL;

@interface FigCaptureIrisStillImageSettings : FigCaptureStillImageSettings

{
    int _movieMode;
    FigCaptureMovieFileRecordingSettings *_movieRecordingSettings;
    NSURL *_movieURLForOriginalImage;
    NSArray *_movieLevelMetadataForOriginalImage;
    NSURL *_spatialOverCaptureMovieURLForOriginalImage;
    NSArray *_spatialOverCaptureMovieLevelMetadataForOriginalImage;
    struct CGSize _nonDestructiveCropSize;
}

@property (nonatomic) int movieMode;
@property (copy, nonatomic) FigCaptureMovieFileRecordingSettings *movieRecordingSettings;
@property (copy, nonatomic) NSURL *movieURLForOriginalImage;
@property (copy, nonatomic) NSArray *movieLevelMetadataForOriginalImage;
@property (copy, nonatomic) NSURL *spatialOverCaptureMovieURLForOriginalImage;
@property (copy, nonatomic) NSArray *spatialOverCaptureMovieLevelMetadataForOriginalImage;
@property (nonatomic) struct CGSize nonDestructiveCropSize;

+ (_Bool)supportsSecureCoding;

- (void)dealloc;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
