/*
 Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

#import <Celestial/FigCaptureMovieFileSinkPipeline.h>

@class NSMutableArray;

@interface FigCaptureSessionMovieFileSinkPipeline : FigCaptureMovieFileSinkPipeline

{
    _Bool _momentCaptureMovieRecordingEnabled;
    _Bool _recording;
    NSMutableArray *_inflightIrisStills;
    NSMutableArray *_pendingIrisRecordings;
}

@property (nonatomic) _Bool momentCaptureMovieRecordingEnabled;
@property (nonatomic) _Bool recording;
@property (retain, nonatomic) NSMutableArray *inflightIrisStills;
@property (retain, nonatomic) NSMutableArray *pendingIrisRecordings;

- (void)dealloc;

@end
