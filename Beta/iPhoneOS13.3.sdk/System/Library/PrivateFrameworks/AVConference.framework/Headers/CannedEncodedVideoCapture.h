/*
 Image: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
 */

#import <Foundation/NSObject.h>

@class AVAssetReader, AVAssetReaderTrackOutput, AVAssetTrack, AVURLAsset, NSString, VideoScaler;

__attribute__((visibility("hidden")))
@interface CannedEncodedVideoCapture : NSObject

{
    AVURLAsset *_compressedFileAsset;
    AVAssetReader *_assetReader;
    AVAssetTrack *_videoTrack;
    AVAssetReaderTrackOutput *_readerVideoTrackOutput;
    NSString *_movieURLString;
    VideoScaler *_videoScaler;
    struct __CVPixelBufferPool *_pixelBufferPool;
    struct __CVPixelBufferPool *_rotatedPixelBufferPool;
    int _width;
    int _height;
    int _allFrameCount;
    double _allFrameRate;
    int _frameCount;
    struct _opaque_pthread_mutex_t _inputMutex;
    struct _opaque_pthread_mutex_t _attributeMutex;
}

@property (retain, nonatomic) AVURLAsset *compressedFileAsset;
@property (retain, nonatomic) AVAssetReader *assetReader;
@property (retain, nonatomic) AVAssetTrack *videoTrack;
@property (retain, nonatomic) AVAssetReaderTrackOutput *readerVideoTrackOutput;
@property (retain, nonatomic) NSString *movieURLString;
@property (retain, nonatomic) VideoScaler *videoScaler;
@property (nonatomic) int width;
@property (nonatomic) int height;
@property (nonatomic) int allFrameCount;
@property (nonatomic) double allFrameRate;
@property (nonatomic) int frameCount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (int)initialize;
- (id)initWithPath:(id)arg1;
- (int)initializeDecoder;
- (struct __CVBuffer *)createPixelBufferForFrameIndex:(int)arg1;
- (void)getFrameRate:(double *)arg1 frameCount:(int *)arg2;
- (int)setWidth:(int)arg1 height:(int)arg2;
- (int)rotatePixelBuffer:(struct __CVBuffer *)arg1 andStoreTo:(struct __CVBuffer **)arg2;

@end
