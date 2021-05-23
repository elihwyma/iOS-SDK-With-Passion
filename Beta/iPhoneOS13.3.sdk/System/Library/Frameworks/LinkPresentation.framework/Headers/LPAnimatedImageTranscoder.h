/*
 Image: /System/Library/Frameworks/LinkPresentation.framework/LinkPresentation
 */

#import <Foundation/NSObject.h>

@class AVAssetWriter, AVAssetWriterInput, AVAssetWriterInputPixelBufferAdaptor, LPImage, NSURL;

__attribute__((visibility("hidden")))
@interface LPAnimatedImageTranscoder : NSObject

{
    LPImage *_sourceImage;
    CDUnknownBlockType _completionHandler;
    struct CGImageSource *_imageSource;
    NSURL *_outputURL;
    unsigned long long _frameCount;
    unsigned long long _currentFrame;
    double _nextFrameTime;
    AVAssetWriterInputPixelBufferAdaptor *_adaptor;
    AVAssetWriter *_writer;
    AVAssetWriterInput *_input;
    _Bool _stopEncoding;
    _Bool _hasReadyForDataObserver;
    unsigned int _loggingID;
}

+ (id)encodeQueue;

- (void)cancel;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)failed;
- (id)initWithAnimatedImage:(id)arg1;
- (void)transcodeWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)_transcodeWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)encodeUntilNotReadyForMoreMediaData;
- (void)removeReadyForDataObserverIfNeeded;
- (void)encodeNextFrame;

@end
