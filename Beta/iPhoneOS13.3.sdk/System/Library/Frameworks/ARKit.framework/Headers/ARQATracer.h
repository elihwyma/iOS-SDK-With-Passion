/*
 Image: /System/Library/Frameworks/ARKit.framework/ARKit
 */

#import <Foundation/NSObject.h>

@class ARPresentationStats, ARScreenRecording, MOVWriterInterface, NSArray, NSDictionary, NSMutableData, NSMutableDictionary, NSOutputStream, NSString, UILabel;

@protocol ARQATracerDelegate, OS_dispatch_queue;

@interface ARQATracer : NSObject

{
    unsigned long long _frameIndex;
    _Bool _isTracing;
    NSMutableDictionary *_traceHeader;
    NSMutableData *_dataBuffer;
    NSOutputStream *_framesStreamToFile;
    NSObject<OS_dispatch_queue> *_processingQueue;
    MOVWriterInterface *_segmentationVideoFileWriter;
    struct __CVPixelBufferPool *_segmentationYUVPixelBufferPool;
    NSObject<OS_dispatch_queue> *_segmentationVideoQueue;
    struct OpaqueVTPixelTransferSession *_vtTransferSession;
    NSDictionary *_raycastQueryData;
    NSArray *_raycastResultData;
    _Bool _forceQuitApp;
    _Bool _recordScreen;
    id <ARQATracerDelegate> _delegate;
    NSString *_traceOutputFilePath;
    UILabel *_replayFrameLabel;
    ARScreenRecording *_screenRecorder;
    ARPresentationStats *_presentationStats;
    struct CGPoint _offset;
}

@property (retain, nonatomic) NSString *traceOutputFilePath;
@property (retain, nonatomic) UILabel *replayFrameLabel;
@property (retain, nonatomic) ARScreenRecording *screenRecorder;
@property (nonatomic) struct CGPoint offset;
@property (nonatomic) _Bool forceQuitApp;
@property (nonatomic) _Bool recordScreen;
@property (retain, nonatomic) ARPresentationStats *presentationStats;
@property (weak, nonatomic) id <ARQATracerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)isEnabled;

- (id)init;
- (void)dealloc;
- (void)stop;
- (void)start:(id)arg1;
- (void)session:(id)arg1 didUpdateFrame:(id)arg2;
- (void)session:(id)arg1 didChangeState:(unsigned long long)arg2;
- (void)traceRaycastQuery:(id)arg1;
- (void)traceRaycastResults:(id)arg1;
- (id)createTraceOutputDirectory;
- (void)writeStringToOutputStream:(id)arg1;
- (void)receiveDefaults;
- (void)addFrameLabel:(id)arg1;
- (void)writeJSONObjectToStream:(id)arg1 prefix:(id)arg2;
- (void)flushDataBufferToFile;
- (struct __CVBuffer *)_createRecordablePixelBufferFromSegmentationBuffer:(struct __CVBuffer *)arg1;
- (void)update:(id)arg1 session:(id)arg2;
- (void)replaySensorDidFinishReplayingData;

@end
