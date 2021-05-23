/*
 Image: /System/Library/PrivateFrameworks/HeartRhythmUI.framework/HeartRhythmUI
 */

#import <UIKit/UIView.h>

@class AVPlayerLooper, AVQueuePlayer, NSArray, UIImage, UIImageView;

@protocol NSObject;

@interface HRVideoPlayerView : UIView

{
    _Bool _looping;
    _Bool _shouldBePlaying;
    NSArray *_items;
    UIImage *_thumbnail;
    UIImageView *_thumbnailImageView;
    AVQueuePlayer *_queuePlayer;
    AVPlayerLooper *_playerLooper;
    id <NSObject> _applicationActiveNotificationStub;
    id <NSObject> _applicationInactiveNotificationStub;
}

@property (retain, nonatomic) UIImage *thumbnail;
@property (retain, nonatomic) UIImageView *thumbnailImageView;
@property (retain, nonatomic) AVQueuePlayer *queuePlayer;
@property (retain, nonatomic) AVPlayerLooper *playerLooper;
@property (retain, nonatomic) NSArray *items;
@property (nonatomic) _Bool looping;
@property (nonatomic) _Bool shouldBePlaying;
@property (retain, nonatomic) id <NSObject> applicationActiveNotificationStub;
@property (retain, nonatomic) id <NSObject> applicationInactiveNotificationStub;
@property (nonatomic) _Bool preventsDisplaySleepDuringVideoPlayback;

+ (Class)layerClass;
+ (id)playerViewWithURL:(id)arg1 looping:(_Bool)arg2;

- (void)dealloc;
- (void)pause;
- (void)play;
- (id)player;
- (void)setPlayer:(id)arg1;
- (void)_setUpUI;
- (void)_setUpNotifications;
- (id)initWithItems:(id)arg1 thumbnail:(id)arg2 looping:(_Bool)arg3;

@end
