/*
 Image: /System/Library/PrivateFrameworks/PencilPairingUI.framework/PencilPairingUI
 */

#import <UIKit/UIView.h>

@class NSString, PNPChargingStatusView, PNPDeviceState, PNPPencilView, PNPWizardView;

@protocol PNPPairingViewDelegate;

@interface PNPPairingView : UIView

{
    PNPDeviceState *_deviceState;
    PNPPencilView *_pencilView;
    PNPWizardView *_wizardView;
    _Bool _finishedWizardTransition;
    PNPChargingStatusView *_chargingStatusView;
    _Bool _showsChargingStatusView;
    struct CGRect _pencilSpinningRect;
    _Bool _showWizardContents;
    unsigned long long _state;
    id <PNPPairingViewDelegate> _delegate;
}

@property (nonatomic) unsigned long long state;
@property (weak, nonatomic) id <PNPPairingViewDelegate> delegate;
@property (nonatomic) _Bool showWizardContents;
@property (nonatomic, readonly) PNPPencilView *pencilView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, nonatomic) PNPDeviceState *deviceState;
@property (retain, nonatomic) PNPChargingStatusView *chargingStatusView;
@property (nonatomic) _Bool showsChargingStatusView;

- (struct CGSize)intrinsicContentSize;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)wizardViewRequestsDismiss:(id)arg1;
- (void)transitionToWizard;
- (void)wizardTransitionFinished;
- (struct CGSize)_intrinsicContentSizeForState:(unsigned long long)arg1 deviceState:(id)arg2;
- (struct CGSize)_pencilSizeForState:(unsigned long long)arg1;
- (struct CGAffineTransform)_pencilTransformForState:(unsigned long long)arg1 deviceState:(id)arg2;

@end
