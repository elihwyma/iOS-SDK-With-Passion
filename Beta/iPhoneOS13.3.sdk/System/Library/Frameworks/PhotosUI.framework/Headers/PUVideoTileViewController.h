/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <PhotosUI/PUTileViewController.h>

#import <PhotosUI/Swift-Protocol.h>

@class NSString, PUAssetViewModel, PUBrowsingVideoPlayer, PUMediaProvider, PXVideoSession, PXVideoSessionUIView, UIImage, UIImageView, UIView;

@protocol PUDisplayAsset;

__attribute__((visibility("hidden")))
@interface PUVideoTileViewController : PUTileViewController <Swift>

{
    UIView *_view;
    UIImageView *_placeholderImageView;
    UIImage *_preloadedImage;
    _Bool _hidePlaceholderImmediately;
    _Bool _canPlayVideo;
    _Bool __isDisplayingFullQualityImage;
    _Bool _playerIsSeeking;
    _Bool _playerDidPlayToEnd;
    _Bool _placeholderVisible;
    _Bool _currentImageIsPlaceholder;
    int __currentImageRequestID;
    PUAssetViewModel *_assetViewModel;
    PUMediaProvider *_mediaProvider;
    PXVideoSession *_videoSession;
    PXVideoSessionUIView *_videoView;
    id <PUDisplayAsset> _asset;
    PUBrowsingVideoPlayer *__browsingVideoPlayer;
    long long __thumbnailRequestNumber;
    CDUnknownBlockType __readyForDisplayCompletionHandler;
    struct CGSize __targetSize;
}

@property (retain, nonatomic) PXVideoSession *videoSession;
@property (retain, nonatomic) PXVideoSessionUIView *videoView;
@property (retain, nonatomic, setter=_setAsset:) id <PUDisplayAsset> asset;
@property (nonatomic, setter=_setCurrentImageRequestID:) int _currentImageRequestID;
@property (nonatomic, setter=_setTargetSize:) struct CGSize _targetSize;
@property (retain, nonatomic, setter=_setBrowsingVideoPlayer:) PUBrowsingVideoPlayer *_browsingVideoPlayer;
@property (nonatomic, setter=_setThumbnailRequestNumber:) long long _thumbnailRequestNumber;
@property (nonatomic, setter=_setDisplayingFullQualityImage:) _Bool _isDisplayingFullQualityImage;
@property (copy, nonatomic, setter=_setReadyForDisplayCompletionHandler:) CDUnknownBlockType _readyForDisplayCompletionHandler;
@property (nonatomic, readonly) _Bool _isDisplayingVideo;
@property (nonatomic) _Bool playerIsSeeking;
@property (nonatomic) _Bool playerDidPlayToEnd;
@property (nonatomic) _Bool placeholderVisible;
@property (nonatomic) _Bool currentImageIsPlaceholder;
@property (retain, nonatomic) PUAssetViewModel *assetViewModel;
@property (retain, nonatomic) PUMediaProvider *mediaProvider;
@property (nonatomic) _Bool canPlayVideo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (id)loadView;
- (void)removeAllAnimations;
- (void)_updateImage;
- (id)initWithReuseIdentifier:(id)arg1;
- (void)_updatePlaceholderVisibility;
- (void)setEdgeAntialiasingEnabled:(_Bool)arg1;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void *)arg3;
- (void)becomeReusable;
- (void)videoSessionViewPlaceholderVisibilityChanged:(id)arg1;
- (void)_updateReadyForDisplay;
- (void)applyLayoutInfo:(id)arg1;
- (void)viewModel:(id)arg1 didChange:(id)arg2;
- (void)_handleBrowsingVideoPlayer:(id)arg1 didChange:(id)arg2;
- (void)_handleAssetViewModel:(id)arg1 didChange:(id)arg2;
- (void)videoPlayer:(id)arg1 currentTimeDidChange:(CDStruct_1b6d18a9)arg2;
- (void)videoPlayer:(id)arg1 desiredSeekTimeDidChange:(CDStruct_1b6d18a9)arg2;
- (void)didChangeAnimating;
- (void)setPreloadedImage:(id)arg1;
- (id)generateAssetTransitionInfo;
- (_Bool)adoptAssetTransitionInfo:(id)arg1;
- (void)setPlaceholderVisible:(_Bool)arg1 animated:(_Bool)arg2;
- (void)_handleImageResult:(id)arg1 info:(id)arg2 requestID:(int)arg3;
- (void)_updateVideo;

@end
