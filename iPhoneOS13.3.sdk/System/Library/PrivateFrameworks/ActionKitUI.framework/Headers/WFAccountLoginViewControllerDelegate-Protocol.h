//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class WFAccount, WFAccountLoginViewController;

@protocol WFAccountLoginViewControllerDelegate <NSObject>
- (void)loginViewControllerDidCancel:(WFAccountLoginViewController *)arg1;
- (void)loginViewController:(WFAccountLoginViewController *)arg1 didLoginWithAccount:(WFAccount *)arg2;
@end

