/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <PhotosUICore/PXGridInlinePlaybackRecord.h>

#import <PhotosUICore/Swift-Protocol.h>

@class NSString, PXGSpriteReference, PXVideoSession;

@interface _PXCuratedLibraryVideoAssetRecord : PXGridInlinePlaybackRecord <Swift>

{
    double _videoTranformScale;
    PXVideoSession *_videoSession;
    NSString *_bufferRequestIdentifier;
    long long _desiredPlayState;
    CDUnknownBlockType _pixelBufferDidChangeHandler;
}

@property (nonatomic, readonly) PXGSpriteReference *geometryReference;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) struct __CVBuffer *currentPixelBuffer;
@property (nonatomic, readonly) struct CGAffineTransform videoRotationTransform;
@property (copy, nonatomic) CDUnknownBlockType pixelBufferDidChangeHandler;

+ (id)_videoSessionQueue;

- (void)dealloc;
- (_Bool)isPlaying;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void *)arg3;
- (long long)desiredPlayState;
- (void)setDesiredPlayState:(long long)arg1;
- (id)initWithDisplayAsset:(id)arg1 mediaProvider:(id)arg2 spriteReference:(id)arg3;
- (void)prepareForVisible;
- (void)prepareForInvisible;
- (void)_ensureVideoSession;
- (void)_createVideoSessionIfNeeded;
- (void)_relinquishVideoSession;
- (void)_configureVideoSession:(id)arg1;

@end
