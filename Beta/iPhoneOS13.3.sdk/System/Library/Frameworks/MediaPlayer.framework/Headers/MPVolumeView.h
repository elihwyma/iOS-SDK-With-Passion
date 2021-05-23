/*
 Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <UIKit/UIView.h>

#import <MediaPlayer/Swift-Protocol.h>

@class MPAVLightweightRoutingController, MPMediaControls, MPVolumeSlider, NSString, UIButton, UIImage, UILabel;

@interface MPVolumeView : UIView <Swift>

{
    MPMediaControls *_mediaControls;
    MPAVLightweightRoutingController *_lightweightRoutingController;
    _Bool _hasNonDefaultRouteButtonImages;
    _Bool _hasNonDefaultMaxVolumeSliderImage;
    _Bool _hasNonDefaultMinVolumeSliderImage;
    _Bool _hidesRouteLabelWhenNoRouteChoice;
    UIButton *_routeButton;
    _Bool _routeButtonShowsTouchWhenHighlighted;
    _Bool _routeDiscoveryEnabled;
    UILabel *_routeLabel;
    _Bool _showingButton;
    _Bool _showingLabel;
    _Bool _showingSlider;
    _Bool _showsRouteButton;
    _Bool _showsVolumeSlider;
    long long _style;
    MPVolumeSlider *_volumeSlider;
    _Bool _volumeSliderShrinksFromBothEnds;
    _Bool _wirelessRouteIsPicked;
    _Bool _wirelessRoutesAvailable;
    _Bool _pushedRouteDiscoveryModeState;
}

@property (nonatomic, readonly) long long style;
@property (nonatomic, readonly) MPVolumeSlider *volumeSlider;
@property (nonatomic) _Bool volumeSliderShrinksFromBothEnds;
@property (nonatomic) _Bool hidesRouteLabelWhenNoRouteChoice;
@property (nonatomic, readonly) _Bool isVisible;
@property (nonatomic, readonly) _Bool isShowingRouteButton;
@property (nonatomic) _Bool routeButtonShowsTouchWhenHighlighted;
@property (nonatomic) _Bool showsVolumeSlider;
@property (nonatomic) _Bool showsRouteButton;
@property (nonatomic, readonly, getter=areWirelessRoutesAvailable) _Bool wirelessRoutesAvailable;
@property (nonatomic, readonly, getter=isWirelessRouteActive) _Bool wirelessRouteActive;
@property (retain, nonatomic) UIImage *volumeWarningSliderImage;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)setHidden:(_Bool)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)setAlpha:(double)arg1;
- (void)layoutSubviews;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)didMoveToSuperview;
- (void)didMoveToWindow;
- (id)initWithFrame:(struct CGRect)arg1 style:(long long)arg2;
- (void)_initWithStyle:(long long)arg1;
- (void)_applicationDidEnterBackgroundNotification:(id)arg1;
- (void)_applicationWillEnterForegroundNotification:(id)arg1;
- (void)lightweightRoutingController:(id)arg1 didChangeDevicePresenceDetected:(_Bool)arg2;
- (void)lightweightRoutingController:(id)arg1 didChangePickedRoutes:(id)arg2;
- (id)_routeButton;
- (id)minimumVolumeSliderImageForState:(unsigned long long)arg1;
- (id)maximumVolumeSliderImageForState:(unsigned long long)arg1;
- (id)routeButtonImageForState:(unsigned long long)arg1;
- (struct CGRect)routeButtonRectForBounds:(struct CGRect)arg1;
- (void)setMinimumVolumeSliderImage:(id)arg1 forState:(unsigned long long)arg2;
- (void)setMaximumVolumeSliderImage:(id)arg1 forState:(unsigned long long)arg2;
- (void)setRouteButtonImage:(id)arg1 forState:(unsigned long long)arg2;
- (void)setVolumeThumbImage:(id)arg1 forState:(unsigned long long)arg2;
- (struct CGRect)volumeSliderRectForBounds:(struct CGRect)arg1;
- (id)volumeThumbImageForState:(unsigned long long)arg1;
- (struct CGRect)volumeThumbRectForBounds:(struct CGRect)arg1 volumeSliderRect:(struct CGRect)arg2 value:(float)arg3;
- (void)_createSubviews;
- (id)_defaultRouteButtonImageAsSelected:(_Bool)arg1;
- (void)_loadAudioRoutePickerIfNeeded;
- (void)_displayAudioRoutePicker;
- (void)_startPrewarmingAudioRoutePicker;
- (void)_stopPrewarmingAudioRoutePicker;
- (void)_getDefaultVolumeSliderFrame:(struct CGRect *)arg1 routeButtonFrame:(struct CGRect *)arg2 forBounds:(struct CGRect)arg3;
- (void)_setShowsRouteButton:(_Bool)arg1 animated:(_Bool)arg2;
- (void)_setShowsVolumeSlider:(_Bool)arg1;
- (void)_setRouteDiscoveryEnabled:(_Bool)arg1;
- (void)_updateWirelessRouteStatus;
- (void)_volumeSliderVolumeControlAvailabilityDidChangeNotification:(id)arg1;

@end
