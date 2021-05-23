/*
 Image: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
 */

#import <Foundation/NSObject.h>

@class AVAssetWriter, AVAssetWriterInput, AVAssetWriterInputPixelBufferAdaptor, NSArray, NSMutableDictionary, NSMutableSet, NSOperationQueue, NSString;

@protocol OS_dispatch_queue;

@interface CAMTimelapseMovieWriter : NSObject

{
    _Bool _suspended;
    NSArray *__frameFilePaths;
    long long __nextReadFileIndex;
    long long __residentImageDataCount;
    long long __residentPixelBufferCount;
    NSMutableDictionary *__availableImageData;
    NSMutableDictionary *__availablePixelBuffers;
    NSMutableSet *__inFlightReadFrameIndexes;
    NSObject<OS_dispatch_queue> *__synchronizationQueue;
    NSOperationQueue *__imageReadQueue;
    NSOperationQueue *__imageDecodeQueue;
    NSObject<OS_dispatch_queue> *__movieWritingQueue;
    AVAssetWriter *__writer;
    AVAssetWriterInput *__videoInput;
    AVAssetWriterInputPixelBufferAdaptor *__pixelBufferAdaptor;
    long long __framesPerSecond;
    long long __nextWriteFileIndex;
    long long __currentOutputFrameIndex;
    CDUnknownBlockType __completion;
}

@property (nonatomic, readonly) NSArray *_frameFilePaths;
@property (nonatomic, readonly) long long _nextReadFileIndex;
@property (nonatomic, readonly) long long _residentImageDataCount;
@property (nonatomic, readonly) long long _residentPixelBufferCount;
@property (nonatomic, readonly) NSMutableDictionary *_availableImageData;
@property (nonatomic, readonly) NSMutableDictionary *_availablePixelBuffers;
@property (nonatomic, readonly) NSMutableSet *_inFlightReadFrameIndexes;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *_synchronizationQueue;
@property (nonatomic, readonly) NSOperationQueue *_imageReadQueue;
@property (nonatomic, readonly) NSOperationQueue *_imageDecodeQueue;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *_movieWritingQueue;
@property (nonatomic, readonly) AVAssetWriter *_writer;
@property (nonatomic, readonly) AVAssetWriterInput *_videoInput;
@property (nonatomic, readonly) AVAssetWriterInputPixelBufferAdaptor *_pixelBufferAdaptor;
@property (nonatomic, readonly) long long _framesPerSecond;
@property (nonatomic, readonly) long long _nextWriteFileIndex;
@property (nonatomic, readonly) long long _currentOutputFrameIndex;
@property (copy, nonatomic, readonly) CDUnknownBlockType _completion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, getter=isSuspended) _Bool suspended;

- (id)init;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)_reset;
- (void)writeMovieFromImageFiles:(id)arg1 visMetadataFiles:(id)arg2 startDate:(id)arg3 location:(id)arg4 outputPath:(id)arg5 transform:(struct CGAffineTransform)arg6 framesPerSecond:(long long)arg7 preferHEVC:(_Bool)arg8 completionHandler:(CDUnknownBlockType)arg9;
- (void)_finishMovieWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)_setMetadataOnVideoTrackAssetWriterInput:(id)arg1;
- (struct CGSize)_desiredOutputSizeForFrameSize:(struct CGSize)arg1;
- (_Bool)_startWritingWithOutputPath:(id)arg1 width:(long long)arg2 height:(long long)arg3 videoFormatDescription:(struct opaqueCMFormatDescription *)arg4 transform:(struct CGAffineTransform)arg5 framesPerSecond:(long long)arg6 frameCount:(long long)arg7 preferHEVC:(_Bool)arg8 videoMetadata:(id)arg9;
- (void)_enqueueNextRead;
- (void)_enqueueNextDecode;
- (void)_enqueueNextWrite;
- (_Bool)_appendPixelBuffer:(struct __CVBuffer *)arg1;

@end
