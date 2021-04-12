//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SearchUICardKitProviderSupport/SFFeedbackListener-Protocol.h>

@class NSString, SFCard, SFCardSectionEngagementFeedback, UIView, UIViewController;

@protocol SearchUIFeedbackDelegate <SFFeedbackListener>

@optional
- (void)cardSectionViewDidInvalidateSize:(UIView *)arg1;
- (void)cardSectionViewDidSelectPreferredPunchoutIndex:(long long)arg1;
- (void)updateViewControllerTitle:(NSString *)arg1;
- (void)presentViewControllerForCard:(SFCard *)arg1 animate:(BOOL)arg2;
- (void)willDismissViewController:(UIViewController *)arg1;
- (void)presentViewController:(UIViewController *)arg1;
- (void)cardSectionViewDidInvalidateSize:(UIView *)arg1 animate:(BOOL)arg2;
- (BOOL)shouldHandleCardSectionEngagement:(SFCardSectionEngagementFeedback *)arg1;
@end

