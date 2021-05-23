/*
 Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import <AVFoundation/AVFigAssetWriterTrack.h>

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface AVFigAssetWriterAudioTrack : AVFigAssetWriterTrack

{
    NSMutableArray *_pendingAudioSampleBuffers;
}

- (void)dealloc;
- (void)prepareToEndSession;
- (_Bool)addSampleBuffer:(struct opaqueCMSampleBuffer *)arg1 error:(id *)arg2;
- (_Bool)markEndOfDataReturningError:(id *)arg1;
- (id)initWithFigAssetWriter:(struct OpaqueFigAssetWriter *)arg1 mediaType:(id)arg2 mediaFileType:(id)arg3 formatSpecification:(id)arg4 sourcePixelBufferAttributes:(id)arg5 multiPass:(_Bool)arg6 error:(id *)arg7;
- (int)_attachToFigAssetWriterUsingFormatSpecification:(id)arg1 sourcePixelBufferAttributes:(id)arg2 multiPass:(_Bool)arg3 error:(id *)arg4;
- (_Bool)_flushPendingSampleBuffersReturningError:(id *)arg1;

@end
