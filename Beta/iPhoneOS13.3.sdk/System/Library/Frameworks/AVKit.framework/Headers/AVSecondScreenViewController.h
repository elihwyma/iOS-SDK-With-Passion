/*
 Image: /System/Library/Frameworks/AVKit.framework/AVKit
 */

#import <UIViewController.h>

@class AVPlayerLayer, AVSecondScreenPlayerLayerView, UILabel, UIView;

__attribute__((visibility("hidden")))
@interface AVSecondScreenViewController : UIViewController

{
    _Bool _playingOnSecondScreen;
    UIView *_contentView;
    AVPlayerLayer *_sourcePlayerLayer;
    UILabel *_debugLabel;
    AVSecondScreenPlayerLayerView *_playerLayerView;
    struct CGRect _initialScreenBoundsHint;
}

@property (nonatomic, readonly) UILabel *debugLabel;
@property (retain, nonatomic) AVSecondScreenPlayerLayerView *playerLayerView;
@property (nonatomic, getter=isPlayingOnSecondScreen) _Bool playingOnSecondScreen;
@property (nonatomic) struct CGRect initialScreenBoundsHint;
@property (retain, nonatomic) UIView *contentView;
@property (weak, nonatomic) AVPlayerLayer *sourcePlayerLayer;
@property (nonatomic, readonly) struct CGSize videoDisplaySize;

- (void)dealloc;
- (void)loadView;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void)viewDidAppear:(_Bool)arg1;
- (void)_updateLayout;
- (void)setDebugText:(id)arg1;
- (id)debugText;
- (void)loadPlayerLayerViewIfNeeded;
- (void)_updateContentViewIfNeeded;

@end
