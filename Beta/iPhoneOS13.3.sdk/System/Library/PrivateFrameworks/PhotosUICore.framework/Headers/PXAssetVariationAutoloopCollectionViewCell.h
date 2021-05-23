/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <PhotosUICore/PXAssetVariationCollectionViewCell.h>

@class AVAsset, ISWrappedAVAudioSession, ISWrappedAVPlayer, NSString, PXVideoPlayerView;

@interface PXAssetVariationAutoloopCollectionViewCell : PXAssetVariationCollectionViewCell

{
    ISWrappedAVPlayer *_videoPlayer;
    PXVideoPlayerView *_videoView;
    AVAsset *_displayedAsset;
    ISWrappedAVAudioSession *__audioSession;
}

@property (retain, nonatomic, setter=_setAudioSession:) ISWrappedAVAudioSession *_audioSession;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)prepareForReuse;
- (void)updateError;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void *)arg3;
- (id)loadVariationView;
- (void)updateVariationView;
- (void)_updateVideoPlayerRateWithItem:(id)arg1;
- (void)_videoStatusDidChange;

@end
