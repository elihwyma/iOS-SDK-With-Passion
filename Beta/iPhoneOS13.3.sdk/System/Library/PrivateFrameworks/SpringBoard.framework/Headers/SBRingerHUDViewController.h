/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <UIKit/UIViewController.h>

@class NSString, NSTimer, SBRingerPillView, UIViewFloatAnimatableProperty;

@protocol SBRingerHUDViewControllerDelegate;

@interface SBRingerHUDViewController : UIViewController

{
    _Bool _ringerSilent;
    _Bool _lastEventIsAVolumeChange;
    float _volume;
    id <SBRingerHUDViewControllerDelegate> _delegate;
    SBRingerPillView *_pillView;
    UIViewFloatAnimatableProperty *_positionSpring;
    UIViewFloatAnimatableProperty *_ringerValueSpring;
    NSTimer *_dismissalTimer;
    double _overshoot;
}

@property (retain, nonatomic) SBRingerPillView *pillView;
@property (retain, nonatomic) UIViewFloatAnimatableProperty *positionSpring;
@property (retain, nonatomic) UIViewFloatAnimatableProperty *ringerValueSpring;
@property (retain, nonatomic) NSTimer *dismissalTimer;
@property (nonatomic) _Bool lastEventIsAVolumeChange;
@property (nonatomic) double overshoot;
@property (nonatomic) _Bool ringerSilent;
@property (weak, nonatomic) id <SBRingerHUDViewControllerDelegate> delegate;
@property (nonatomic) float volume;
@property (nonatomic, readonly, getter=isPresented) _Bool presented;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)loadView;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (_Bool)_canShowWhileLocked;
- (void)viewDidLayoutSubviews;
- (void)_dismiss;
- (_Bool)definesAnimatedDismissal;
- (void)dismissAnimatedWithCompletion:(CDUnknownBlockType)arg1;
- (void)noteVolumeUpWasHit:(_Bool)arg1;
- (void)noteVolumeDownWasHit:(_Bool)arg1;
- (void)buttonReleased;
- (void)nudgeUp:(_Bool)arg1;
- (void)noteVolumeDidChange:(float)arg1;
- (void)refreshAudioUI;
- (void)_createSprings;
- (void)setVolume:(float)arg1 animated:(_Bool)arg2 forKeyPress:(_Bool)arg3;
- (void)presentForMuteSwitch:(_Bool)arg1;
- (void)_layoutPillView;
- (void)swipeGesture:(id)arg1;
- (void)_updateVolumeSliderAnimated:(_Bool)arg1;
- (void)_updateStateAnimated:(_Bool)arg1 invert:(_Bool)arg2;
- (void)_extendDismissalTimer;
- (void)_setPositionSpringValue:(double)arg1 completion:(CDUnknownBlockType)arg2;

@end
