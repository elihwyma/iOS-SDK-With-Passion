/*
 Image: /System/Library/PrivateFrameworks/PencilPairingUI.framework/PencilPairingUI
 */

#import <UIKit/UIView.h>

@class NSString, PNPDeviceState, UIButton, UILabel;

@protocol PNPAirplaneModeBluetoothViewDelegate;

@interface PNPAirplaneModeView : UIView

{
    PNPDeviceState *_deviceState;
    UIView *_contentAreaView;
    UILabel *_deviceNameLabel;
    UIButton *_turnOnBluetoothButton;
    NSString *_currentString;
    NSString *_pencilStatusString;
    id <PNPAirplaneModeBluetoothViewDelegate> _bluetoothDelegate;
}

@property (weak, nonatomic) id <PNPAirplaneModeBluetoothViewDelegate> bluetoothDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, nonatomic) PNPDeviceState *deviceState;

- (struct CGSize)intrinsicContentSize;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)_configureConstraints;
- (void)turnOnBluetooth:(id)arg1;
- (id)_turnOnString;
- (id)_applePencilOff;
- (id)_bluetoothOnString;
- (id)_applePencilOn;

@end
