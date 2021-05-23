/*
 Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import <Foundation/NSObject.h>

@class AVWeakReference, NSArray, NSDictionary, NSMutableArray, NSString;

__attribute__((visibility("hidden")))
@interface AVCaptureMovieFileOutputInternal : NSObject

{
    AVWeakReference *weakReference;
    NSMutableArray *recordingDelegatesArray;
    NSMutableArray *connectionsThatRecordVideoOrientationAndMirroringChangesAsMetadataTrack;
    CDStruct_1b6d18a9 movieFragmentInterval;
    NSArray *metadata;
    NSArray *availableVideoCodecs;
    NSString *videoCodec;
    NSDictionary *videoCompressionProperties;
    _Bool sendLastVideoPreviewFrame;
    _Bool recording;
    _Bool paused;
    NSString *bravoCameraSelectionBehaviorForRecording;
    struct ct_green_tea_logger_s *greenTeaLogger;
}

- (id)init;
- (void)dealloc;

@end
