/*
 Image: /System/Library/PrivateFrameworks/Memories.framework/Memories
 */

#import <UIKit/UITableViewCell.h>

@class MiroCircularProgressBar, MiroSongPreviewButton, NSString, Reachability, UIImageView, UILabel, VEKSong;

@interface MiroSmartMusicMenuCell : UITableViewCell

{
    _Bool _observingSong;
    float _progress;
    NSString *_songUID;
    VEKSong *_song;
    UIImageView *_checkmark;
    MiroSongPreviewButton *_previewSongButton;
    UILabel *_songName;
    UILabel *_artistName;
    MiroCircularProgressBar *_progressIndicator;
    UIImageView *_cloudStatus;
    UIImageView *_artwork;
    Reachability *_reachability;
}

@property (weak, nonatomic) UILabel *songName;
@property (weak, nonatomic) UILabel *artistName;
@property (weak, nonatomic) MiroCircularProgressBar *progressIndicator;
@property (weak, nonatomic) UIImageView *cloudStatus;
@property (weak, nonatomic) UIImageView *artwork;
@property (nonatomic) _Bool observingSong;
@property (retain, nonatomic) Reachability *reachability;
@property (retain, nonatomic) NSString *songUID;
@property (nonatomic) float progress;
@property (retain, nonatomic) VEKSong *song;
@property (weak, nonatomic) UIImageView *checkmark;
@property (weak, nonatomic) MiroSongPreviewButton *previewSongButton;

+ (double)dynamicTypeHeight;

- (void)dealloc;
- (void)prepareForReuse;
- (void)setUserInteractionEnabled:(_Bool)arg1;
- (void)awakeFromNib;
- (void)_setProgress:(float)arg1;
- (void)_updateTextColors;
- (long long)networkStatus;
- (void)_setupReachabiliy;
- (void)networkStatusChanged:(id)arg1;
- (void)_updateCloudStatus;
- (void)_updateProgressIndicator:(float)arg1;
- (void)updateArtwork;
- (void)updateSongNameForSong:(id)arg1;
- (void)_songAssetChanged:(id)arg1;
- (void)_updateDownload:(id)arg1;

@end
