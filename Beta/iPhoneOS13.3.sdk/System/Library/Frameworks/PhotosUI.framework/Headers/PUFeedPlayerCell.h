/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <PhotosUI/PUFeedCell.h>

@class AVAsset, ISLivePhotoPlayer, ISLivePhotoUIView, UIButton, UICollectionView, UIImage;

__attribute__((visibility("hidden")))
@interface PUFeedPlayerCell : PUFeedCell

{
    _Bool _playerHidden;
    _Bool _isPhotoImageDegraded;
    _Bool __isPerformingIrisPlayerChanges;
    _Bool __needsUpdatePlayerItem;
    _Bool __needsUpdateVitality;
    _Bool __shouldHideCommentButton;
    int _currentImageRequestID;
    long long _commentCount;
    AVAsset *_videoAsset;
    UIImage *_photoImage;
    double _photoTime;
    UICollectionView *_containingCollectionView;
    ISLivePhotoPlayer *__player;
    ISLivePhotoUIView *__playerView;
    UIButton *__commentButton;
}

@property (nonatomic, setter=_setPerformingIrisPlayerChanges:) _Bool _isPerformingIrisPlayerChanges;
@property (nonatomic, setter=_setNeedsUpdatePlayerItem:) _Bool _needsUpdatePlayerItem;
@property (nonatomic, setter=_setNeedsUpdateVitality:) _Bool _needsUpdateVitality;
@property (nonatomic, readonly) ISLivePhotoPlayer *_player;
@property (nonatomic, readonly) ISLivePhotoUIView *_playerView;
@property (retain, nonatomic, setter=_setCommentButton:) UIButton *_commentButton;
@property (nonatomic, setter=_setShouldHideCommentButton:) _Bool _shouldHideCommentButton;
@property (nonatomic) long long commentCount;
@property (nonatomic) int currentImageRequestID;
@property (nonatomic, getter=isPlayerHidden) _Bool playerHidden;
@property (retain, nonatomic) AVAsset *videoAsset;
@property (retain, nonatomic) UIImage *photoImage;
@property (nonatomic, setter=setPhotoImageDegraded:) _Bool isPhotoImageDegraded;
@property (nonatomic) double photoTime;
@property (weak, nonatomic) UICollectionView *containingCollectionView;

+ (Class)_contentViewClass;

- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)setParallaxOffset:(struct CGPoint)arg1;
- (void)_updateCommentButton;
- (void)_handleCommentButton:(id)arg1;
- (void)performIrisPlayerChanges:(CDUnknownBlockType)arg1;
- (void)_assertInsideIrisPlayerChanges;
- (void)_updateIrisIfNeeded;
- (_Bool)_needsUpdateIris;
- (void)_setNeedsUpdateIris;
- (void)_invalidatePlayerItem;
- (void)_updatePlayerItemIfNeeded;
- (void)_invalidateVitality;
- (void)_updateVitalityIfNeeded;
- (id)_playerCellDelegate;
- (void)_layoutPlayerView;

@end
