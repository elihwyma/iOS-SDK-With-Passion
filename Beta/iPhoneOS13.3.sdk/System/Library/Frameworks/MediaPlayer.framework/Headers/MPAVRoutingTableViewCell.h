/*
 Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <MediaPlayer/MPAVClippingTableViewCell.h>

@class MPAVRoutingTableViewCellSubtitleTextState, MPVolumeSlider, NSString, NSTimer, UIActivityIndicatorView, UIImageView, UILabel;

@protocol MPAVRoutingTableViewCellDelegate;

@interface MPAVRoutingTableViewCell : MPAVClippingTableViewCell

{
    UIImageView *_iconImageView;
    UILabel *_routeNameLabel;
    UILabel *_subtitleTextLabel;
    NSTimer *_subtitleTextUpdateTimer;
    UIActivityIndicatorView *_spinnerView;
    UIImageView *_smartAudioImageView;
    UIImageView *_checkmarkImageView;
    _Bool _mirroringSwitchVisible;
    _Bool _pendingSelection;
    _Bool _isDisplayedAsPicked;
    _Bool _useSmartAudioCheckmarkStyle;
    _Bool _provideOwnSeparator;
    _Bool _showingVolumeSlider;
    id <MPAVRoutingTableViewCellDelegate> _delegate;
    unsigned long long _mirroringStyle;
    unsigned long long _iconStyle;
    double _subtitleViewAlpha;
    MPVolumeSlider *_volumeSlider;
    MPAVRoutingTableViewCellSubtitleTextState *_subtitleTextState;
}

@property (retain, nonatomic) MPAVRoutingTableViewCellSubtitleTextState *subtitleTextState;
@property (weak, nonatomic) id <MPAVRoutingTableViewCellDelegate> delegate;
@property (nonatomic) _Bool mirroringSwitchVisible;
@property (nonatomic) unsigned long long mirroringStyle;
@property (nonatomic) unsigned long long iconStyle;
@property (nonatomic, getter=isPendingSelection) _Bool pendingSelection;
@property (nonatomic) _Bool isDisplayedAsPicked;
@property (nonatomic) _Bool useSmartAudioCheckmarkStyle;
@property (nonatomic) _Bool provideOwnSeparator;
@property (nonatomic) double subtitleViewAlpha;
@property (retain, nonatomic) MPVolumeSlider *volumeSlider;
@property (nonatomic, getter=isShowingVolumeSlider) _Bool showingVolumeSlider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (void)prepareForReuse;
- (void)layoutSubviews;
- (void)setTintColor:(id)arg1;
- (id)separatorView;
- (id)titleView;
- (void)setAccessoryType:(long long)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)_updateAccessory;
- (id)iconView;
- (id)subtitleView;
- (void)updateForEndpoint:(id)arg1 routeItem:(id)arg2 inferLocalizedModelName:(_Bool)arg3;
- (id)volumeView;
- (void)_handleContentSizeCategoryDidChangeNotification:(id)arg1;
- (void)_configureLabel:(id)arg1;
- (void)_configureDetailLabel:(id)arg1;
- (_Bool)_shouldShowSeparateBatteryPercentagesForBatteryLevel:(id)arg1;
- (id)_batteryTextForRoute:(id)arg1;
- (id)_pairedDeviceTextForRoute:(id)arg1;
- (id)_iconImageForRoute:(id)arg1;
- (id)_checkmarkImageNameForSmartAudio;
- (id)_checkmarkAccessibilityLabelForSmartAudio;
- (id)_checkmarkImageForSmartAudio;
- (void)_updateSubtitleTextLabelForRouteItem:(id)arg1;
- (void)_updateSpinnerStyle;
- (void)_animateSubtitleLabelToNextAvailableText;

@end
