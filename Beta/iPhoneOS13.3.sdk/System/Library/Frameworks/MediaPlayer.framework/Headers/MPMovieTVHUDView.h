/*
 Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <UIKit/UIView.h>

@class MPAVController, UIImageView;

@interface MPMovieTVHUDView : UIView

{
    long long _currentState;
    UIImageView *_playbackMode;
    MPAVController *_player;
}

@property (retain, nonatomic) MPAVController *player;

- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)animationDidStop:(id)arg1;
- (void)_changeState;
- (void)_fadeOut;
- (void)_playbackStateDidChangeNotification:(id)arg1;

@end
