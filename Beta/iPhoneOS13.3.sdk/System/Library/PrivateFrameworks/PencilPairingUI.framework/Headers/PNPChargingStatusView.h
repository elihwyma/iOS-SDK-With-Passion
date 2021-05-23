/*
 Image: /System/Library/PrivateFrameworks/PencilPairingUI.framework/PencilPairingUI
 */

#import <UIKit/UIView.h>

@class NSLayoutConstraint, NSString, PNPConnectButton, PNPDeviceState, UIActivityIndicatorView, UILabel, _UIBatteryView;

@protocol PNPChargingStatusViewDelegate;

@interface PNPChargingStatusView : UIView

{
    PNPDeviceState *_deviceState;
    UIView *_contentAreaView;
    UIView *_batterySectionView;
    UILabel *_deviceNameLabel;
    _UIBatteryView *_batteryView;
    UILabel *_percentageLabel;
    PNPConnectButton *_tapToConnectButton;
    NSLayoutConstraint *_alignDeviceNameToTopConstraint;
    NSLayoutConstraint *_centerDeviceNameConstraint;
    UIActivityIndicatorView *_spinnerView;
    double _maxPillWidth;
    _Bool _didStartBatteryAnimation;
    _Bool _isFadingOutDeviceName;
    _Bool _showsCharging;
    _Bool _isTransitioningToBatteryUI;
    _Bool _didStartBatteryTransition;
    _Bool _alphaOutName;
    id <PNPChargingStatusViewDelegate> _delegate;
    long long _chargingState;
}

@property (weak, nonatomic) id <PNPChargingStatusViewDelegate> delegate;
@property (nonatomic) _Bool showsCharging;
@property (nonatomic) _Bool isTransitioningToBatteryUI;
@property (nonatomic) _Bool didStartBatteryTransition;
@property (nonatomic) long long chargingState;
@property (nonatomic) _Bool alphaOutName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, nonatomic) PNPDeviceState *deviceState;

- (struct CGSize)intrinsicContentSize;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)updateConstraints;
- (id)_batteryPercentageTextColor;
- (_Bool)_showBatteryStatus;
- (void)_setAndAnimateChargingStateToConnecting;
- (void)_performAnimations:(CDUnknownBlockType)arg1 completion:(CDUnknownBlockType)arg2;
- (void)beginPairing;
- (void)updateChargingState:(long long)arg1;

@end
