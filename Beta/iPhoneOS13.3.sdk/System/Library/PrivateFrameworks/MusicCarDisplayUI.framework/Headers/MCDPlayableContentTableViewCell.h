/*
 Image: /System/Library/PrivateFrameworks/MusicCarDisplayUI.framework/MusicCarDisplayUI
 */

#import <UIKit/UITableViewCell.h>

@class UIActivityIndicatorView, UIImage, UIImageView, UIView;

@interface MCDPlayableContentTableViewCell : UITableViewCell

{
    _Bool _showExplicit;
    _Bool _showCloud;
    _Bool _showActivityIndicator;
    _Bool _shouldShowPlaybackProgress;
    _Bool _container;
    _Bool _currentlyPlaying;
    double _playbackProgress;
    UIImage *_artwork;
    UIView *_playbackProgressView;
    UIImageView *_artworkImageView;
    UIImageView *_explicitItemView;
    UIActivityIndicatorView *_activityIndicatorView;
}

@property (retain, nonatomic) UIView *playbackProgressView;
@property (retain, nonatomic) UIImageView *artworkImageView;
@property (retain, nonatomic) UIImageView *explicitItemView;
@property (retain, nonatomic) UIActivityIndicatorView *activityIndicatorView;
@property (nonatomic, getter=isShowExplicit) _Bool showExplicit;
@property (nonatomic, getter=isShowCloud) _Bool showCloud;
@property (nonatomic) _Bool showActivityIndicator;
@property (nonatomic) double playbackProgress;
@property (nonatomic) _Bool shouldShowPlaybackProgress;
@property (nonatomic) _Bool container;
@property (retain, nonatomic) UIImage *artwork;
@property (nonatomic) _Bool currentlyPlaying;

+ (id)reuseIdentifier;

- (void)traitCollectionDidChange:(id)arg1;
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;
- (void)layoutSubviews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)setHighlighted:(_Bool)arg1 animated:(_Bool)arg2;
- (void)_setCloudAccessoryView:(_Bool)arg1;
- (void)_updatePlayingArtworkIfNeeded;
- (void)_setExplicitView:(_Bool)arg1;

@end
