/*
 Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

#import <UIKit/UIView.h>

@class HUBlendedSeparatorView, HUClipScrubberPlayheadView, UIButton, UICollectionView;

@interface HUClipScrubberView : UIView

{
    _Bool _isPlayingMedia;
    HUClipScrubberPlayheadView *_playHeadView;
    UIView *_contentView;
    UIButton *_leftActionButton;
    UIButton *_rightActionButton;
    UICollectionView *_clipCollectionView;
    unsigned long long _displayMode;
    HUBlendedSeparatorView *_leftBlendedSeparator;
    HUBlendedSeparatorView *_rightBlendedSeparator;
}

@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) HUClipScrubberPlayheadView *playHeadView;
@property (retain, nonatomic) UIButton *leftActionButton;
@property (retain, nonatomic) UIButton *rightActionButton;
@property (retain, nonatomic) UICollectionView *clipCollectionView;
@property (nonatomic) unsigned long long displayMode;
@property (retain, nonatomic) HUBlendedSeparatorView *leftBlendedSeparator;
@property (retain, nonatomic) HUBlendedSeparatorView *rightBlendedSeparator;
@property (nonatomic) _Bool isPlayingMedia;

- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (id)_deleteImage;
- (void)_addConstraints;
- (id)_playImage;
- (id)_pauseImage;
- (id)playOrPauseImageForEngineMode:(unsigned long long)arg1;
- (void)hideEditInterface;
- (void)displayEditInterface;
- (void)updateTimeControlStatus:(unsigned long long)arg1 forEngineMode:(unsigned long long)arg2;
- (void)navigateToLivePosition;
- (void)navigateToOffset:(double)arg1;
- (void)updateMode:(unsigned long long)arg1;
- (void)updateDisplayMode:(unsigned long long)arg1;

@end
