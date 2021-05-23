/*
 Image: /System/Library/PrivateFrameworks/TVPlayback.framework/TVPlayback
 */

#import <UIKit/UIView.h>

@class NSObject, TVPPlayerLayerView, UIImageView, UILabel;

@protocol TVPAVFPlayback;

@interface TVPVideoView : UIView

{
    _Bool _isPrimarySubtitleDisplayer;
    _Bool _readyForDisplay;
    long long _videoGravity;
    NSObject<TVPAVFPlayback> *_player;
    UILabel *_debugLabel;
    TVPPlayerLayerView *_playerLayerView;
    UIImageView *_stillImageView;
}

@property (retain, nonatomic) TVPPlayerLayerView *playerLayerView;
@property (nonatomic, getter=isReadyForDisplay) _Bool readyForDisplay;
@property (retain, nonatomic) UIImageView *stillImageView;
@property (retain, nonatomic) NSObject<TVPAVFPlayback> *player;
@property (nonatomic, readonly) UILabel *debugLabel;
@property (nonatomic) _Bool isPrimarySubtitleDisplayer;
@property (nonatomic) long long videoGravity;

+ (void)initialize;
+ (id)preservedVideoViewsForPlayer:(id)arg1 identifier:(id)arg2;
+ (void)_playerStateDidChange:(id)arg1;
+ (void)_purgePreservedVideoViewsForPlayer:(id)arg1;
+ (void)preserveVideoViewForReuse:(id)arg1 identifier:(id)arg2;

- (void)dealloc;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)setAVPlayer:(id)arg1;
- (id)AVPlayer;
- (void)_playerStillImageDidChange:(id)arg1;

@end
