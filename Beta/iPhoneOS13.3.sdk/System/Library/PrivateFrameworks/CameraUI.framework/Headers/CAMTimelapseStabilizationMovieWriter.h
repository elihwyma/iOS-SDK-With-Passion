/*
 Image: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
 */

#import <Foundation/NSObject.h>

@class AVAssetWriter, AVAssetWriterInput, AVAssetWriterInputPixelBufferAdaptor, AVOfflineVideoStabilizer, CLLocation, NSArray, NSDate, NSMutableSet, NSString;

@protocol OS_dispatch_queue, OS_dispatch_semaphore;

@interface CAMTimelapseStabilizationMovieWriter : NSObject

{
    _Bool _suspended;
    _Bool __preferHEVC;
    NSArray *__frameFilePaths;
    NSArray *__visMetadataFilePaths;
    NSObject<OS_dispatch_queue> *__movieWritingQueue;
    NSObject<OS_dispatch_queue> *__syncQueue;
    NSObject<OS_dispatch_queue> *__readingQueue;
    NSObject<OS_dispatch_queue> *__decodeQueue;
    NSObject<OS_dispatch_queue> *__pixelTransferQueue;
    NSObject<OS_dispatch_semaphore> *__semFrameGetter;
    NSObject<OS_dispatch_semaphore> *__semFileReader;
    struct __CFArray *__frameList;
    NSDate *__movieCreationDate;
    CLLocation *__movieCreationLocation;
    NSString *__movieOutputPath;
    long long __movieFramesPerSecond;
    AVOfflineVideoStabilizer *__stabilizer;
    AVAssetWriter *__writer;
    AVAssetWriterInput *__videoInput;
    AVAssetWriterInputPixelBufferAdaptor *__pixelBufferAdaptor;
    long long __frameCountWrittenToMovie;
    long long __nextSourceFrameIndex;
    long long __nextMetadataFrameIndex;
    long long __firstFrameIndex;
    struct __CVBuffer *__stashedSourceFrame;
    NSMutableSet *__badFrameSet;
    NSMutableSet *__badMetadataSet;
    long long __badMetadataErrorThreshold;
    struct OpaqueVTPixelTransferSession *__pixelTransferSession;
    unsigned long long __frameLoadMode;
    CDUnknownBlockType __completion;
    void *__powerAssertion;
    struct CGAffineTransform __movieTransform;
}

@property (nonatomic, readonly) NSArray *_frameFilePaths;
@property (nonatomic, readonly) NSArray *_visMetadataFilePaths;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *_movieWritingQueue;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *_syncQueue;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *_readingQueue;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *_decodeQueue;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *_pixelTransferQueue;
@property (nonatomic, readonly) NSObject<OS_dispatch_semaphore> *_semFrameGetter;
@property (nonatomic, readonly) NSObject<OS_dispatch_semaphore> *_semFileReader;
@property (nonatomic, readonly) struct __CFArray *_frameList;
@property (nonatomic, readonly) NSDate *_movieCreationDate;
@property (nonatomic, readonly) CLLocation *_movieCreationLocation;
@property (nonatomic, readonly) NSString *_movieOutputPath;
@property (nonatomic, readonly) struct CGAffineTransform _movieTransform;
@property (nonatomic, readonly) long long _movieFramesPerSecond;
@property (nonatomic, readonly) _Bool _preferHEVC;
@property (nonatomic, readonly) AVOfflineVideoStabilizer *_stabilizer;
@property (nonatomic, readonly) AVAssetWriter *_writer;
@property (nonatomic, readonly) AVAssetWriterInput *_videoInput;
@property (nonatomic, readonly) AVAssetWriterInputPixelBufferAdaptor *_pixelBufferAdaptor;
@property (nonatomic, readonly) long long _frameCountWrittenToMovie;
@property (nonatomic, readonly) long long _nextSourceFrameIndex;
@property (nonatomic, readonly) long long _nextMetadataFrameIndex;
@property (nonatomic, readonly) long long _firstFrameIndex;
@property (nonatomic, readonly) struct __CVBuffer *_stashedSourceFrame;
@property (nonatomic, readonly) NSMutableSet *_badFrameSet;
@property (nonatomic, readonly) NSMutableSet *_badMetadataSet;
@property (nonatomic, readonly) long long _badMetadataErrorThreshold;
@property (nonatomic, readonly) struct OpaqueVTPixelTransferSession *_pixelTransferSession;
@property (nonatomic, readonly) unsigned long long _frameLoadMode;
@property (copy, nonatomic, readonly) CDUnknownBlockType _completion;
@property (nonatomic, readonly) void *_powerAssertion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, getter=isSuspended) _Bool suspended;

+ (struct CGSize)_desiredOutputSizeForSourcePixelBuffer:(struct __CVBuffer *)arg1;

- (id)init;
- (void)dealloc;
- (void)_reset;
- (void)_cleanup;
- (id)copySourceStabilizationMetadataForFrameNumber:(long long)arg1 outputSampleTime:(CDStruct_1b6d18a9 *)arg2 stabilizer:(id)arg3;
- (struct __CVBuffer *)copySourcePixelBufferForFrameNumber:(long long)arg1 outputSampleTime:(CDStruct_1b6d18a9 *)arg2 stabilizer:(id)arg3;
- (void)writeMovieFromImageFiles:(id)arg1 visMetadataFiles:(id)arg2 startDate:(id)arg3 location:(id)arg4 outputPath:(id)arg5 transform:(struct CGAffineTransform)arg6 framesPerSecond:(long long)arg7 preferHEVC:(_Bool)arg8 completionHandler:(CDUnknownBlockType)arg9;
- (void)_startAsyncDecoding;
- (int)_copySourcePixelBufferForNextFrame:(struct __CVBuffer **)arg1 skipBadFrames:(_Bool)arg2;
- (int)_startWritingWithOutputPath:(id)arg1 width:(long long)arg2 height:(long long)arg3 videoFormatDescription:(struct opaqueCMFormatDescription *)arg4 transform:(struct CGAffineTransform)arg5 framesPerSecond:(long long)arg6 frameCount:(long long)arg7 preferHEVC:(_Bool)arg8 visMetadataCount:(long long)arg9 videoMetadata:(id)arg10;
- (void)_writeMovieAsynchronously;
- (struct __CVBuffer *)_decodeFirstFrameAgain;
- (struct __CVBuffer *)_cropPixelBufferIfNeeded:(struct __CVBuffer *)arg1;
- (int)_copyNextSampleBufferFromStabilizer:(struct opaqueCMSampleBuffer **)arg1;
- (_Bool)_appendPixelBufferToMovie:(struct __CVBuffer *)arg1;
- (void)_finishMovieWithRestartUnstabilized;
- (void)_finishMovieWithFailure;
- (void)_requestNextFrameReadDecode;
- (void)_finishMovieWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)_setMetadataOnVideoTrackAssetWriterInput:(id)arg1;
- (void)_restartUnstabilized;

@end
