/*
 Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

#import <Celestial/FigCapturePreviewSinkPipeline.h>

@class NSString;

@interface FigCaptureSessionPreviewSinkPipeline : FigCapturePreviewSinkPipeline

{
    _Bool _imageQueueUpdatedNotificationSent;
    _Bool _previewSinkEnabled;
    _Bool _previewRunning;
    NSString *_sourceID;
}

@property (nonatomic) _Bool imageQueueUpdatedNotificationSent;
@property (nonatomic) _Bool previewRunning;
@property (nonatomic) _Bool previewSinkEnabled;
@property (retain, nonatomic) NSString *sourceID;

- (void)dealloc;

@end
