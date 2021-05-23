/*
 Image: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
 */

#import <Foundation/NSObject.h>

@class CAMPanoramaCaptureRequest, NSMutableDictionary;

@protocol CAMPanoramaProcessorDelegate;

@interface CAMPanoramaProcessor : NSObject

{
    _Bool _capturingPanorama;
    id <CAMPanoramaProcessorDelegate> _delegate;
    CAMPanoramaCaptureRequest *_request;
    long long _photoEncodingBehavior;
    long long _direction;
    NSMutableDictionary *__initialMetadataByRequestUUID;
    struct OpaqueFigSampleBufferProcessor *__processor;
    struct CGSize _previewSize;
}

@property (nonatomic, getter=isCapturingPanorama, setter=_setCapturingPanorama:) _Bool capturingPanorama;
@property (retain, nonatomic, setter=_setRequest:) CAMPanoramaCaptureRequest *request;
@property (nonatomic, readonly) NSMutableDictionary *_initialMetadataByRequestUUID;
@property (nonatomic, readonly) struct OpaqueFigSampleBufferProcessor *_processor;
@property (weak, nonatomic, readonly) id <CAMPanoramaProcessorDelegate> delegate;
@property (nonatomic, readonly) long long photoEncodingBehavior;
@property (nonatomic, readonly) struct CGSize previewSize;
@property (nonatomic) long long direction;

- (void)dealloc;
- (void)invalidate;
- (void)processSampleBuffer:(struct opaqueCMSampleBuffer *)arg1;
- (void)startPanoramaCaptureWithRequest:(id)arg1;
- (id)initWithDelegate:(id)arg1 encodingBehavior:(long long)arg2;
- (void)stopPanoramaCapture;
- (void)processPanoramaCaptureWithRequest:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;

@end
