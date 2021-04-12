//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class NSError, PKAccountPaymentFundingSource, PKAddBankAccountInformationViewController;

@protocol PKAddBankAccountInformationViewControllerDelegate <NSObject>
- (void)bankAccountInformationViewControllerChangedBankAccountInformation:(PKAddBankAccountInformationViewController *)arg1;

@optional
- (void)addBankAccountInformationViewController:(PKAddBankAccountInformationViewController *)arg1 didFailWithError:(NSError *)arg2;
- (void)addBankAccountInformationViewControllerDidFinish:(PKAddBankAccountInformationViewController *)arg1;
- (void)addBankAccountInformationViewController:(PKAddBankAccountInformationViewController *)arg1 didAddFundingSource:(PKAccountPaymentFundingSource *)arg2;
@end

