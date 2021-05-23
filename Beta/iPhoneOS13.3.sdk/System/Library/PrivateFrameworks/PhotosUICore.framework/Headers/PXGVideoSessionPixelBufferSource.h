/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <Foundation/NSObject.h>

#import <PhotosUICore/Swift-Protocol.h>

@class NSString, PXVideoSession;

@protocol PXGVideoSessionPixelBufferSourceDelegate;

@interface PXGVideoSessionPixelBufferSource : NSObject <Swift>

{
    PXVideoSession *_videoSession;
    NSString *_bufferRequestIdentifier;
    CDUnknownBlockType _pixelBufferDidChangeHandler;
    long long _desiredPlayState;
    id <PXGVideoSessionPixelBufferSourceDelegate> _delegate;
}

@property (nonatomic) long long desiredPlayState;
@property (weak, nonatomic) id <PXGVideoSessionPixelBufferSourceDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) struct __CVBuffer *currentPixelBuffer;
@property (nonatomic, readonly) struct CGAffineTransform videoRotationTransform;
@property (copy, nonatomic) CDUnknownBlockType pixelBufferDidChangeHandler;

- (id)init;
- (void)dealloc;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void *)arg3;
- (id)initWithVideoSession:(id)arg1;
- (id)initWithDisplayAsset:(id)arg1 mediaProvider:(id)arg2;
- (void)_prepareVideoSession;
- (void)_updateVideoSession:(id)arg1;

@end
