/*
 Image: /System/Library/PrivateFrameworks/PhotosFormats.framework/PhotosFormats
 */

#import <Foundation/NSOperation.h>

@class AVAsset, AVAssetExportSession, AVAudioMix, AVVideoComposition, CLLocation, NSArray, NSDate, NSError, NSObject, NSString, NSURL, PFAssetAdjustments;

@protocol OS_dispatch_queue;

@interface PFVideoSharingOperation : NSOperation

{
    AVAsset *_videoAsset;
    AVAudioMix *_audioMix;
    AVVideoComposition *_videoComposition;
    NSArray *_videoMetadata;
    NSObject<OS_dispatch_queue> *_externalIsolation;
    AVAssetExportSession *_exportSession;
    _Bool _beganExport;
    _Bool _operationSuccess;
    NSError *_operationError;
    _Bool _shouldStripMetadata;
    _Bool _shouldStripLocation;
    NSURL *_outputDirectoryURL;
    NSString *_outputFilename;
    CLLocation *_customLocation;
    NSDate *_customDate;
    NSString *_customAccessibilityLabel;
    NSString *_exportPreset;
    NSString *_exportFileType;
    NSURL *_videoURL;
    NSURL *_resultingFileURL;
    PFAssetAdjustments *__adjustments;
}

@property (copy, nonatomic, setter=_setVideoURL:) NSURL *videoURL;
@property (retain, nonatomic, setter=_setAdjustments:) PFAssetAdjustments *_adjustments;
@property (nonatomic, setter=_setSuccess:) _Bool success;
@property (retain, nonatomic, setter=_setOperationError:) NSError *operationError;
@property (copy, nonatomic) NSURL *outputDirectoryURL;
@property (copy, nonatomic) NSString *outputFilename;
@property (nonatomic) _Bool shouldStripMetadata;
@property (nonatomic) _Bool shouldStripLocation;
@property (copy, nonatomic) CLLocation *customLocation;
@property (copy, nonatomic) NSDate *customDate;
@property (copy, nonatomic) NSString *customAccessibilityLabel;
@property (copy, nonatomic) NSString *exportPreset;
@property (copy, nonatomic) NSString *exportFileType;
@property (nonatomic, readonly) float progress;
@property (copy, nonatomic, readonly) NSURL *resultingFileURL;

- (void)cancel;
- (void)main;
- (id)initWithVideoURL:(id)arg1 adjustmentData:(id)arg2;
- (_Bool)_ensureVideoProperties;
- (void)_validateMetadata;
- (_Bool)_runExport;

@end
