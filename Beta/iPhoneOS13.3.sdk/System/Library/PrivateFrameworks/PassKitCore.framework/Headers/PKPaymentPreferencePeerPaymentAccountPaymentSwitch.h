/*
 Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

#import <PassKitCore/PKPaymentPreference.h>

@class PKCurrencyAmount, PKPaymentPass;

@interface PKPaymentPreferencePeerPaymentAccountPaymentSwitch : PKPaymentPreference

{
    _Bool _on;
    _Bool _enabled;
    PKPaymentPass *_peerPaymentPass;
    PKCurrencyAmount *_peerPaymentBalance;
}

@property (retain, nonatomic) PKPaymentPass *peerPaymentPass;
@property (retain, nonatomic) PKCurrencyAmount *peerPaymentBalance;
@property (nonatomic, getter=isOn) _Bool on;
@property (nonatomic, getter=isEnabled) _Bool enabled;

@end
