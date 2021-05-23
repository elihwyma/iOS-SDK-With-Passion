/*
 Image: /System/Library/PrivateFrameworks/PencilPairingUI.framework/PencilPairingUI
 */

#import <UIKit/UIView.h>

@class NSString, PNPChargingStatusView, PNPDeviceState, PNPPencilView;

@interface PNPPencilHorizontalPresentationContainerView : UIView

{
    PNPChargingStatusView *_chargingStatusView;
    _Bool _showsChargingStatusView;
    PNPDeviceState *_deviceState;
    PNPPencilView *_pencilView;
}

@property (retain, nonatomic) PNPPencilView *pencilView;
@property (retain, nonatomic) PNPChargingStatusView *chargingStatusView;
@property (nonatomic) _Bool showsChargingStatusView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, nonatomic) PNPDeviceState *deviceState;

- (struct CGSize)intrinsicContentSize;
- (void)layoutSubviews;

@end
