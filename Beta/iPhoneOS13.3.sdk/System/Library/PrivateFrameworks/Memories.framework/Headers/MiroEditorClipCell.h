/*
 Image: /System/Library/PrivateFrameworks/Memories.framework/Memories
 */

#import <UIKit/UICollectionViewCell.h>

@class AVPlayer, AVPlayerItem, AVPlayerLayer, MiroEditorClipDebugView, NSLayoutConstraint, PMClipProvider, PXUIAssetBadgeView, UIImage, UIImageView, UILabel, UIView;

@protocol MiroEditorClipCellDelegate;

@interface MiroEditorClipCell : UICollectionViewCell

{
    id <MiroEditorClipCellDelegate> _delegate;
    UIImage *_thumbnail;
    PMClipProvider *_clipProvider;
    AVPlayer *_player;
    UIImageView *_thumbnailView;
    NSLayoutConstraint *_bottomBarBottomSpaceConstraint;
    UILabel *_debugLabel;
    AVPlayerItem *_playerItem;
    AVPlayerLayer *_playerLayer;
    UIView *_circularPlayButton;
    UIView *_audioButtonContainerView;
    UILabel *_audioButtonLabel;
    UIView *_treatmentButtonContainerView;
    PXUIAssetBadgeView *_photoIrisBadgeView;
    NSLayoutConstraint *_thumbnailAspectConstraint;
    MiroEditorClipDebugView *_debugInfoView;
    NSLayoutConstraint *_treatmentButtonTopConstraint;
}

@property (retain, nonatomic) AVPlayer *player;
@property (retain, nonatomic) AVPlayerItem *playerItem;
@property (retain, nonatomic) AVPlayerLayer *playerLayer;
@property (retain, nonatomic) UIView *circularPlayButton;
@property (weak, nonatomic) UIView *audioButtonContainerView;
@property (weak, nonatomic) UILabel *audioButtonLabel;
@property (weak, nonatomic) UIView *treatmentButtonContainerView;
@property (retain, nonatomic) PXUIAssetBadgeView *photoIrisBadgeView;
@property (retain, nonatomic) NSLayoutConstraint *thumbnailAspectConstraint;
@property (weak, nonatomic) MiroEditorClipDebugView *debugInfoView;
@property (retain, nonatomic) NSLayoutConstraint *treatmentButtonTopConstraint;
@property (weak, nonatomic) id <MiroEditorClipCellDelegate> delegate;
@property (retain, nonatomic) UIImage *thumbnail;
@property (retain, nonatomic) PMClipProvider *clipProvider;
@property (nonatomic, readonly) _Bool isPlaying;
@property (weak, nonatomic) UIImageView *thumbnailView;
@property (retain, nonatomic) NSLayoutConstraint *bottomBarBottomSpaceConstraint;
@property (weak, nonatomic) UILabel *debugLabel;

- (void)dealloc;
- (id)description;
- (id)initWithCoder:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)prepareForReuse;
- (void)layoutSubviews;
- (void)awakeFromNib;
- (void)_applicationWillResignActive:(id)arg1;
- (void)play:(id)arg1;
- (void)pause:(id)arg1;
- (void)assetBadgeView:(id)arg1 userDidSelectBadges:(unsigned long long)arg2;
- (id)_faceRectsInViewSpace;
- (void)_highlightFacesForRects:(id)arg1;
- (void)_highlightPOI;
- (struct CGRect)_poiRectInViewSpace;
- (_Bool)_removePOIsInRect:(struct CGRect)arg1;
- (void)_addPOIInRect:(struct CGRect)arg1;
- (void)_addHighlightRectsToThumbnail;
- (void)handleTapAtLocation:(struct CGPoint)arg1;
- (void)playPause:(id)arg1;
- (_Bool)circularPlayButtonIsHidden;
- (void)updateControlVisibility;
- (void)stopPlayback:(id)arg1;
- (void)showPlayerWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)_updateAudioButton;
- (void)_setupCircularPlayButton;
- (void)audioButtonTouchUpInside:(id)arg1;
- (void)_updateThumbnailAspectIfNecessary;
- (void)_updatePlayButton;
- (void)_updateTreatmentButton;
- (void)_updateDebugInfoView;
- (void)_didPlayToEnd:(id)arg1;
- (void)treatmentButtonTouchUpInside:(id)arg1;
- (void)playButtonTouchUpInside:(id)arg1;
- (void)_updateAudioVolume;
- (void)_hidePlayer;
- (void)_disableAudioTracks;

@end
