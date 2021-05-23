/*
 Image: /System/Library/PrivateFrameworks/Memories.framework/Memories
 */

#import <UIKit/UIViewController.h>

@class AVPlayerViewController, PMTitleSubtitleView, UIView;

@interface PMRotationViewController : UIViewController

{
    _Bool _zoomedToFill;
    _Bool _preventRotation;
    AVPlayerViewController *_playerViewController;
    PMTitleSubtitleView *_titleView;
    CDUnknownBlockType _playerDidSwapBlock;
    double _orientationSwitchTime;
    id _proVideoPeriodicCaller;
    UIView *_playerRotationView;
    struct CGSize _playerSize;
}

@property (nonatomic) _Bool preventRotation;
@property (nonatomic) struct CGSize playerSize;
@property (copy) CDUnknownBlockType playerDidSwapBlock;
@property (nonatomic) double orientationSwitchTime;
@property (retain, nonatomic) id proVideoPeriodicCaller;
@property (retain, nonatomic) UIView *playerRotationView;
@property (retain, nonatomic) AVPlayerViewController *playerViewController;
@property (retain, nonatomic) PMTitleSubtitleView *titleView;
@property (nonatomic) _Bool zoomedToFill;

- (void)dealloc;
- (void)viewDidLoad;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (id)playerItem;
- (void)externalClientMessedWithPlayerItem;
- (void)gentleRebuild;
- (void)extremeRebuild;
- (void)ImAfraidOfStuckBlur;
- (void)signalCustomCompositorScheduler;
- (void)signalCustomCompositorScheduler:(CDStruct_1b6d18a9)arg1 playerRate:(float)arg2;
- (void)createAVPlayer;
- (void)destroyAVPlayer;
- (id)_snapshotPlayer;
- (CDStruct_1b6d18a9)currentPlayerTime;
- (void)refreshCompositionIfNotPlaying;
- (void)adjustPlayerSizeAndViewTransform:(struct CGSize)arg1;
- (id)_snapshotPlayerWithAspect:(double)arg1;
- (void)addProVideoTimeObserver;
- (void)removeProVideoTimeObserver;
- (void)effectRenderedTime:(CDStruct_1b6d18a9)arg1;

@end
