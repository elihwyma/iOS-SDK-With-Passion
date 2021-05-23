/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <PhotosUICore/PXRunNode.h>

@class NSArray, NSData, NSString, PICompositionController;

@protocol PUImageInfoNode, PUVideoURLNode, PXRunNodeDelegate;

__attribute__((visibility("hidden")))
@interface PUImageDataRenderNode : PXRunNode

{
    NSData *_imageData;
    id <PUImageInfoNode> _imageDataNode;
    id <PUVideoURLNode> _videoURLNode;
    PICompositionController *_compositionController;
    double _jpegCompression;
    NSString *_livePhotoPairingIdentifier;
    struct CGSize _baseImageSize;
    struct CGSize _renderedImageSize;
}

@property (nonatomic, readonly) id <PUImageInfoNode> imageDataNode;
@property (nonatomic, readonly) id <PUVideoURLNode> videoURLNode;
@property (copy, nonatomic, readonly) PICompositionController *compositionController;
@property (nonatomic, readonly) double jpegCompression;
@property (copy, nonatomic, readonly) NSString *livePhotoPairingIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (readonly) unsigned long long state;
@property (readonly, getter=isWaiting) _Bool waiting;
@property (readonly, getter=isRunning) _Bool running;
@property (readonly, getter=isComplete) _Bool complete;
@property (readonly, getter=isCanceled) _Bool canceled;
@property (weak, nonatomic) id <PXRunNodeDelegate> delegate;
@property (copy, nonatomic, readonly) NSArray *dependencies;
@property (nonatomic, readonly) NSData *imageData;
@property (nonatomic, readonly) struct CGSize baseImageSize;
@property (nonatomic, readonly) struct CGSize renderedImageSize;

- (void)run;
- (id)_editSource;
- (id)initWithImageInfoNode:(id)arg1 videoURLNode:(id)arg2 compositionController:(id)arg3 livePhotoPairingIdentifier:(id)arg4 jpegCompression:(double)arg5;
- (_Bool)_isInputValid;
- (void)_handleRenderCompletedWithJpegData:(id)arg1 baseSize:(struct CGSize)arg2 editedSize:(struct CGSize)arg3;

@end
