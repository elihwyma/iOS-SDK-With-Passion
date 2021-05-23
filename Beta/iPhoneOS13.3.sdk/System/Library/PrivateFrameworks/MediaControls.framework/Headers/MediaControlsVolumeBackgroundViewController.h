/*
 Image: /System/Library/PrivateFrameworks/MediaControls.framework/MediaControls
 */

#import <ControlCenterUIKit/CCUISliderModuleBackgroundViewController.h>

@class MediaControlsBluetoothListeningModeButton, MediaControlsRouteView, MediaControlsVolumeController, NSString, NSTimer;

@interface MediaControlsVolumeBackgroundViewController : CCUISliderModuleBackgroundViewController

{
    MediaControlsRouteView *_primaryRouteView;
    MediaControlsRouteView *_secondaryRouteView;
    MediaControlsBluetoothListeningModeButton *_primaryBluetoothListeningModeButton;
    MediaControlsBluetoothListeningModeButton *_secondaryBluetoothListeningModeButton;
    NSTimer *_primaryUpdateTimer;
    NSTimer *_secondaryUpdateTimer;
    MediaControlsVolumeController *_volumeController;
}

@property (retain, nonatomic) MediaControlsVolumeController *volumeController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (_Bool)_canShowWhileLocked;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)viewDidLayoutSubviews;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidMoveToWindow:(id)arg1 shouldAppearOrDisappear:(_Bool)arg2;
- (void)_updateVisibility;
- (double)_horizontalPadding;
- (double)_verticalPadding;
- (void)didTapPrimaryBluetoothListeningModeButton:(id)arg1;
- (void)primaryBluetoothListeningModeButtonDidChangeValue:(id)arg1;
- (void)didTapSecondaryBluetoothListeningModeButton:(id)arg1;
- (void)secondaryBluetoothListeningModeButtonDidChangeValue:(id)arg1;
- (void)collapseBluetoothListeningModeButtons;
- (void)_configureRouteViews;
- (void)_configurePrimaryOptionsButtonIfNeeded;
- (void)_configureSecondaryOptionsButtonIfNeeded;
- (void)_updateButtonAxis;
- (void)_performLayoutWithAnimation:(CDUnknownBlockType)arg1;
- (void)_updateButton:(id)arg1 routeType:(unsigned long long)arg2;
- (void)_configureRouteView:(id)arg1 forRouteType:(unsigned long long)arg2;
- (void)_configureOptionsButton:(id)arg1 forRouteType:(unsigned long long)arg2;
- (void)_springAnimate:(CDUnknownBlockType)arg1;
- (void)mediaControlsVolumeController:(id)arg1 didUpdateSplitRoute:(_Bool)arg2;
- (void)mediaControlsVolumeController:(id)arg1 didChangeVolumeAvailable:(_Bool)arg2 effectiveVolume:(float)arg3 forRoute:(unsigned long long)arg4;

@end
