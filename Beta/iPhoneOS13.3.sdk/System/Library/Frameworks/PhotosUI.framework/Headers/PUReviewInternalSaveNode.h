/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <PhotosUICore/PXRunNode.h>

@class NSArray, NSData, NSString, NSURL, PUEditableMediaProviderImageDataNode, PUEditableMediaProviderVideoURLNode, PUImageDataRenderNode, PUPhotoEditIrisModel, PUVideoExportNode;

@protocol PXRunNodeDelegate;

__attribute__((visibility("hidden")))
@interface PUReviewInternalSaveNode : PXRunNode

{
    _Bool _useEmbeddedPreview;
    NSURL *_imageDataURL;
    long long _imageExifOrientation;
    NSURL *_providedFullsizeImageURL;
    NSURL *_providedVideoURL;
    NSURL *_videoURL;
    NSURL *_adjustmentURL;
    NSData *_imageData;
    NSString *_imageDataUTI;
    PUEditableMediaProviderImageDataNode *_imageDataNode;
    PUImageDataRenderNode *_imageRenderNode;
    PUEditableMediaProviderVideoURLNode *_videoURLNode;
    PUVideoExportNode *_videoRenderNode;
    NSURL *_directory;
    PUPhotoEditIrisModel *_livePhotoModel;
    struct CGSize _renderedVideoSize;
    struct CGSize _baseImageSize;
    struct CGSize _renderedImageSize;
}

@property (nonatomic, readonly) PUEditableMediaProviderImageDataNode *imageDataNode;
@property (nonatomic, readonly) PUImageDataRenderNode *imageRenderNode;
@property (nonatomic, readonly) PUEditableMediaProviderVideoURLNode *videoURLNode;
@property (nonatomic, readonly) PUVideoExportNode *videoRenderNode;
@property (nonatomic, readonly) NSURL *directory;
@property (copy, nonatomic, readonly) PUPhotoEditIrisModel *livePhotoModel;
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
@property (nonatomic, readonly) NSURL *imageDataURL;
@property (nonatomic, readonly) NSString *imageDataUTI;
@property (nonatomic, readonly) _Bool useEmbeddedPreview;
@property (nonatomic, readonly) long long imageExifOrientation;
@property (nonatomic, readonly) NSURL *videoURL;
@property (nonatomic, readonly) struct CGSize renderedVideoSize;
@property (nonatomic, readonly) NSURL *adjustmentURL;
@property (nonatomic, readonly) NSURL *providedFullsizeImageURL;
@property (nonatomic, readonly) NSURL *providedVideoURL;
@property (nonatomic, readonly) NSData *imageData;
@property (nonatomic, readonly) struct CGSize baseImageSize;
@property (nonatomic, readonly) struct CGSize renderedImageSize;

- (void)run;
- (double)_baseDuration;
- (long long)_adjustmentBaseVersion;
- (id)initWithDirectory:(id)arg1 imageDataNode:(id)arg2 imageRenderNode:(id)arg3 videoURLNode:(id)arg4 videoRenderNode:(id)arg5 livePhotoModel:(id)arg6;
- (long long)_baseExifOrientation;
- (id)_exportProperties;

@end
