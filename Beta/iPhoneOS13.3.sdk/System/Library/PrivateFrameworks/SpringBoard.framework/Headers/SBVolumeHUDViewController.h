/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <SpringBoardFoundation/SBFTouchPassThroughViewController.h>

@class NSString, SBElasticVolumeViewController;

@protocol SBVolumeHUDViewControllerDelegate;

@interface SBVolumeHUDViewController : SBFTouchPassThroughViewController

{
    id <SBVolumeHUDViewControllerDelegate> _delegate;
    SBElasticVolumeViewController *_elasticAudioViewController;
}

@property (nonatomic, readonly) SBElasticVolumeViewController *elasticAudioViewController;
@property (weak, nonatomic) id <SBVolumeHUDViewControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (void)viewDidLoad;
- (_Bool)_canShowWhileLocked;
- (id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3;
- (id)animationControllerForDismissedController:(id)arg1;
- (unsigned long long)supportedInterfaceOrientations;
- (void)viewDidLayoutSubviews;
- (void)_dismiss;
- (_Bool)definesAnimatedDismissal;
- (void)dismissAnimatedWithCompletion:(CDUnknownBlockType)arg1;
- (void)noteVolumeUpWasHit:(_Bool)arg1;
- (void)noteVolumeDownWasHit:(_Bool)arg1;
- (void)noteVolumeWillDeltaStepToVolume:(double)arg1;
- (void)noteVolumeDidChange:(float)arg1;
- (void)refreshAudioUI;
- (float)elasticAudioViewControllerCurrentVolume:(id)arg1;
- (_Bool)elasticAudioViewController:(id)arg1 updateCurrentVolumeToLevel:(float)arg2;
- (id)elasticAudioViewControllerActiveAudioRouteTypes:(id)arg1;
- (id)elasticAudioViewControllerActiveAudioCategory:(id)arg1;
- (_Bool)elasticAudioViewControllerShouldShowVolumeWarningForCurrentVolumeLevel:(id)arg1;
- (void)elasticVolumeViewControllerNeedsDismissal:(id)arg1;
- (unsigned long long)_volumeHUDPresentationEdge;

@end
