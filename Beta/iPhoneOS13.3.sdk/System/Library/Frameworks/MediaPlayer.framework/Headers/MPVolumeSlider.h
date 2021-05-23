/*
 Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <UIKit/UISlider.h>

@class MPAVController, MPAVEndpointRoute, MPAVOutputDeviceRoute, MPAVRoute, MPVolumeController, NSString, NSTimer, UIImage, UIImageView, UILabel, UILayoutGuide, UIView, UIWindowScene;

@interface MPVolumeSlider : UISlider

{
    NSTimer *_commitTimer;
    UILabel *_routeNameLabel;
    long long _style;
    UIImageView *_thumbImageView;
    _Bool _isOffScreen;
    _Bool _forcingOffscreenVisibility;
    _Bool _thumbIsDefault;
    _Bool _configuredLayoutGuide;
    UIView *_volumeWarningView;
    _Bool _volumeWarningBlinking;
    UIImage *_volumeWarningTrackImage;
    _Bool _beganTrackingFromEUVolumeLimit;
    double _originalMinTrackViewAlphaOverride;
    double _originalMinValueViewAlphaOverride;
    double _originalMaxValueViewAlphaOverride;
    _Bool _isCurrentlyTracking;
    float _setVolumeStartValue;
    int _coalescedVolumeDidChangeLogCount;
    _Bool _optimisticState;
    float _optimisticValue;
    UILayoutGuide *_trackLayoutGuide;
    MPVolumeController *_volumeController;
    MPAVController *_player;
    MPAVEndpointRoute *_groupRoute;
    MPAVOutputDeviceRoute *_outputDeviceRoute;
    struct UIEdgeInsets _hitRectInsets;
}

@property (nonatomic, setter=_setIsOffScreen:) _Bool _isOffScreen;
@property (nonatomic) struct UIEdgeInsets hitRectInsets;
@property (nonatomic, readonly) UILayoutGuide *trackLayoutGuide;
@property (weak, nonatomic, readonly) UIView *thumbView;
@property (retain, nonatomic) MPVolumeController *volumeController;
@property (retain, nonatomic) MPAVController *player;
@property (retain, nonatomic) MPAVRoute *route;
@property (retain, nonatomic) MPAVEndpointRoute *groupRoute;
@property (retain, nonatomic) MPAVOutputDeviceRoute *outputDeviceRoute;
@property (nonatomic, getter=isInOptimisticState) _Bool optimisticState;
@property (nonatomic) float optimisticValue;
@property (nonatomic, readonly) long long style;
@property (retain, nonatomic) UIImage *volumeWarningTrackImage;
@property (copy, nonatomic, readonly) NSString *volumeControlLabel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) UIWindowScene *windowSceneForVolumeDisplay;
@property (nonatomic, readonly, getter=isOnScreenForVolumeDisplay) _Bool onScreenForVolumeDisplay;
@property (nonatomic, readonly) NSString *volumeAudioCategory;
@property (nonatomic, readonly, getter=isOnScreen) _Bool onScreen;

- (void)dealloc;
- (void)setHidden:(_Bool)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)setUserInteractionEnabled:(_Bool)arg1;
- (void)setAlpha:(double)arg1;
- (void)layoutSubviews;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)didMoveToSuperview;
- (void)didMoveToWindow;
- (id)initWithFrame:(struct CGRect)arg1 style:(long long)arg2;
- (void)_dynamicUserInterfaceTraitDidChange;
- (_Bool)beginTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (void)cancelTrackingWithEvent:(id)arg1;
- (_Bool)continueTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (void)endTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (void)setValue:(float)arg1 animated:(_Bool)arg2;
- (struct CGRect)hitRect;
- (struct CGRect)trackRectForBounds:(struct CGRect)arg1;
- (struct CGRect)thumbRectForBounds:(struct CGRect)arg1 trackRect:(struct CGRect)arg2 value:(float)arg3;
- (id)createThumbView;
- (float)minimumValue;
- (float)maximumValue;
- (void)setThumbImage:(id)arg1 forState:(unsigned long long)arg2;
- (id)_routeName;
- (void)_applicationDidEnterBackgroundNotification:(id)arg1;
- (void)_applicationWillEnterForegroundNotification:(id)arg1;
- (void)volumeController:(id)arg1 volumeControlAvailableDidChange:(_Bool)arg2;
- (void)volumeController:(id)arg1 volumeControlCapabilitiesDidChange:(unsigned int)arg2;
- (void)volumeController:(id)arg1 volumeControlLabelDidChange:(id)arg2;
- (void)volumeController:(id)arg1 volumeValueDidChange:(float)arg2;
- (void)volumeController:(id)arg1 volumeWarningStateDidChange:(long long)arg2;
- (void)volumeController:(id)arg1 EUVolumeLimitDidChange:(float)arg2;
- (void)volumeController:(id)arg1 EUVolumeLimitEnforcedDidChange:(_Bool)arg2;
- (id)initWithFrame:(struct CGRect)arg1 style:(long long)arg2 endpointRoute:(id)arg3 outputDeviceRoute:(id)arg4;
- (void)_endTracking;
- (void)setVolumeDataSource:(id)arg1;
- (void)updateVolume;
- (void)_commitVolumeChange;
- (id)_thumbImageForStyle:(long long)arg1;
- (id)_minTrackImageForStyle:(long long)arg1;
- (id)_maxTrackImageForStyle:(long long)arg1;
- (void)_resetThumbImageForState:(unsigned long long)arg1;
- (void)_layoutForAvailableRoutes;
- (void)_layoutVolumeWarningView;
- (void)_beginBlinkingWarningView;
- (void)_blinkWarningView;
- (void)_endBlinkingWarningView;
- (id)_newVolumeWarningView;
- (void)_logVolumeValueDidChange:(float)arg1;

@end
