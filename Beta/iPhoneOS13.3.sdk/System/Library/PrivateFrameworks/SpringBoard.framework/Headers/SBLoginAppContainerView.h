/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <UIKit/UIView.h>

@class CSBatteryChargingView, NSMutableSet, SBLockScreenDeviceInformationTextView, SBLoginAppContainerOverlayWrapperView, _UILegibilitySettings;

@interface SBLoginAppContainerView : UIView

{
    NSMutableSet *_contentHiddenRequesters;
    UIView *_contentView;
    CSBatteryChargingView *_batteryChargingView;
    SBLoginAppContainerOverlayWrapperView *_thermalWarningView;
    SBLockScreenDeviceInformationTextView *_deviceInformationTextView;
    UIView *_pluginView;
    _UILegibilitySettings *_legibilitySettings;
}

@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) CSBatteryChargingView *batteryChargingView;
@property (retain, nonatomic) SBLoginAppContainerOverlayWrapperView *thermalWarningView;
@property (retain, nonatomic) SBLockScreenDeviceInformationTextView *deviceInformationTextView;
@property (retain, nonatomic) UIView *pluginView;
@property (retain, nonatomic) _UILegibilitySettings *legibilitySettings;

- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)_showOrHidePluginViewAppropriately;
- (void)setContentHidden:(_Bool)arg1 forRequester:(id)arg2;

@end
