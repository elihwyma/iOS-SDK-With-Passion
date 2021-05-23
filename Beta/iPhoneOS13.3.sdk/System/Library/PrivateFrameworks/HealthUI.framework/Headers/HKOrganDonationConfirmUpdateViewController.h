/*
 Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

#import <HealthUI/HKOrganDonationBaseViewController.h>

@class HKOrganDonationConnectionManager, HKOrganDonationRegistrant;

@interface HKOrganDonationConfirmUpdateViewController : HKOrganDonationBaseViewController

{
    HKOrganDonationConnectionManager *_connectionManager;
    HKOrganDonationRegistrant *_registrant;
}

- (id)titleString;
- (id)titleImage;
- (id)bodyString;
- (id)bottomAnchoredButtons;
- (void)buttonAtIndexTapped:(long long)arg1;
- (void)updateButtonTapped:(id)arg1;
- (id)initWithRegistrant:(id)arg1 medicalIDData:(id)arg2 connectionManager:(id)arg3;

@end
