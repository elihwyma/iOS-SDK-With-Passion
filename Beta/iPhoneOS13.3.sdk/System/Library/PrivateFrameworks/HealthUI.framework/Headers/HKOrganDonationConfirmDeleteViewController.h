/*
 Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

#import <HealthUI/HKOrganDonationBaseViewController.h>

@class HKOrganDonationConnectionManager;

@interface HKOrganDonationConfirmDeleteViewController : HKOrganDonationBaseViewController

{
    HKOrganDonationConnectionManager *_connectionManager;
}

- (id)titleString;
- (id)titleImage;
- (void)deleteButtonTapped:(id)arg1;
- (id)bodyString;
- (id)bottomAnchoredButtons;
- (void)buttonAtIndexTapped:(long long)arg1;
- (id)initWithConnectionManager:(id)arg1 medicalIDData:(id)arg2;

@end
