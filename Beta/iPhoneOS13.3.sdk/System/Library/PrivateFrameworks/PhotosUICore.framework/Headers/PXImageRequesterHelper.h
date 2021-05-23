/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <PhotosUICore/PXObservable.h>

#import <PhotosUICore/Swift-Protocol.h>

@class NSString, PXImageRequester, UIImage;

@protocol PXDisplayAsset, PXUIImageProvider;

@interface PXImageRequesterHelper : PXObservable <Swift>

{
    id <PXDisplayAsset> _asset;
    id <PXUIImageProvider> _mediaProvider;
    double _scale;
    UIImage *_image;
    PXImageRequester *_imageRequester;
    struct CGSize _contentSize;
    struct CGRect _contentsRect;
}

@property (retain, nonatomic) PXImageRequester *imageRequester;
@property (nonatomic, readonly) id <PXDisplayAsset> asset;
@property (nonatomic, readonly) id <PXUIImageProvider> mediaProvider;
@property (nonatomic, readonly) struct CGSize contentSize;
@property (nonatomic, readonly) struct CGRect contentsRect;
@property (nonatomic, readonly) double scale;
@property (nonatomic, readonly) UIImage *image;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)setImage:(id)arg1;
- (void)setScale:(double)arg1;
- (void)setContentSize:(struct CGSize)arg1;
- (void)setAsset:(id)arg1;
- (void)_updateImage;
- (void)setContentsRect:(struct CGRect)arg1;
- (void)_updateContentsRect;
- (void)performChanges:(CDUnknownBlockType)arg1;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void *)arg3;
- (void)didPublishChanges;
- (void)_updateImageRequester;
- (void)setMediaProvider:(id)arg1;
- (void)_updateAssetOrMediaProvider;

@end
