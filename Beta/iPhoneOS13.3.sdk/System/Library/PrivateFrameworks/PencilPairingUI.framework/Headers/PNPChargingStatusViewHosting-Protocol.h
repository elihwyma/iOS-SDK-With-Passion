/*
 Image: /System/Library/PrivateFrameworks/PencilPairingUI.framework/PencilPairingUI
 */

@class PNPChargingStatusView;

@protocol PNPChargingStatusViewHosting

@property (retain, nonatomic) PNPChargingStatusView *chargingStatusView;
@property (nonatomic) _Bool showsChargingStatusView;

- (unsigned short)layoutIfNeeded;

@end
