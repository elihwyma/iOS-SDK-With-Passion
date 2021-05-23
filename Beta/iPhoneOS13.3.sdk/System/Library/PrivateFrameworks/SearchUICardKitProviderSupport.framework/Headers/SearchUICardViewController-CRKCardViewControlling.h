/*
 Image: /System/Library/PrivateFrameworks/SearchUICardKitProviderSupport.framework/SearchUICardKitProviderSupport
 */

#import <SearchUICardViewController.h>

#import <SearchUICardKitProviderSupport/Swift-Protocol.h>

@class NSString, SUICKPFeedbackAdapter;

@protocol CRCard, CRKCardSectionViewSourcing, CRKCardViewControllerDelegate;

@interface SearchUICardViewController (CRKCardViewControlling) <Swift>

@property (retain, nonatomic) SUICKPFeedbackAdapter *defaultFeedbackAdapter;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (retain, nonatomic) id <CRCard> card;
@property (retain, nonatomic) id <CRKCardSectionViewSourcing> cardSectionViewSource;
@property (weak, nonatomic) id <CRKCardViewControllerDelegate> cardViewControllerDelegate;

- (void)presentViewController:(id)arg1;
- (void)willDismissViewController:(id)arg1;
- (void)presentViewControllerForCard:(id)arg1 animate:(_Bool)arg2;
- (void)userDidEngageCardSection:(id)arg1 withEngagementFeedback:(id)arg2;
- (void)userDidReportFeedback:(id)arg1 fromCardSection:(id)arg2;
- (void)cardSectionViewWillAppearForCardSection:(id)arg1 withAppearanceFeedback:(id)arg2;
- (void)cardSectionViewDidAppearForCardSection:(id)arg1 withAppearanceFeedback:(id)arg2;
- (void)cardSectionViewDidDisappearForCardSection:(id)arg1 withDisappearanceFeedback:(id)arg2;
- (void)cardSectionViewDidInvalidateSizeForCardSection:(id)arg1;

@end
