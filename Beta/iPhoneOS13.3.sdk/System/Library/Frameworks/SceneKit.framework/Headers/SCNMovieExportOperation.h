/*
 Image: /System/Library/Frameworks/SceneKit.framework/SceneKit
 */

#import <SceneKit/_SCNExportOperation.h>

@class AVAssetWriter, AVAssetWriterInput, AVAssetWriterInputPixelBufferAdaptor;

__attribute__((visibility("hidden")))
@interface SCNMovieExportOperation : _SCNExportOperation

{
    AVAssetWriterInput *_assetWriterInput;
    AVAssetWriterInputPixelBufferAdaptor *_avAdaptor;
    AVAssetWriter *_assetWriter;
    float _rate;
    _Bool _mirrored;
    float _supersampling;
}

- (void)dealloc;
- (void)main;
- (id)initWithRenderer:(id)arg1 size:(struct CGSize)arg2 attributes:(id)arg3 outputURL:(id)arg4;
- (struct CGImage *)_copySnapshot:(struct CGSize)arg1;
- (void)renderAndAppendWithPresentationTime:(CDStruct_198678f7)arg1 usingAdaptor:(id)arg2 metalTextureCache:(struct __CVMetalTextureCache *)arg3 cvQueue:(id)arg4 completionBlock:(CDUnknownBlockType)arg5;
- (void)appendImage:(struct CGImage *)arg1 withPresentationTime:(CDStruct_198678f7)arg2 usingAdaptor:(id)arg3;
- (void)_finishedExport;
- (void)_setupMovieToWritableFile:(id)arg1;

@end
