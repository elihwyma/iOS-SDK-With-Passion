/*
 Image: /System/Library/PrivateFrameworks/SearchUICardKitProviderSupport.framework/SearchUICardKitProviderSupport
 */

#import <NSObject.h>

#import <SearchUICardKitProviderSupport/Swift-Protocol.h>

@class NSMutableArray, NSMutableDictionary, NSString;

@interface SUICKPCardViewControllerProvider : NSObject <Swift>

{
    NSMutableDictionary *_cardsByCardSectionIdentifiers;
    NSMutableDictionary *_cardViewControllersByCardIdentifiers;
    NSMutableArray *_pendingDismissalCommands;
    long long _preferredPunchoutIndex;
    NSMutableDictionary *_feedbackDelegateDemultiplexersByCardIdentifiers;
}

@property (retain, nonatomic) NSMutableDictionary *feedbackDelegateDemultiplexersByCardIdentifiers;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)presentViewController:(id)arg1;
- (id)customViewControllerForCardSection:(id)arg1;
- (void)userDidEngageCardSection:(id)arg1 withEngagementFeedback:(id)arg2;
- (void)cardSectionViewWillAppearForCardSection:(id)arg1 withAppearanceFeedback:(id)arg2;
- (void)cardSectionViewDidAppearForCardSection:(id)arg1 withAppearanceFeedback:(id)arg2;
- (void)cardSectionViewDidDisappearForCardSection:(id)arg1 withDisappearanceFeedback:(id)arg2;
- (unsigned long long)displayPriorityForCard:(id)arg1;
- (id)cardViewControllerForCard:(id)arg1;
- (void)presentation:(id)arg1 didApplyCardSectionViewSource:(id)arg2 toCardViewController:(id)arg3;
- (_Bool)performCommand:(id)arg1 forCardSectionViewController:(id)arg2;
- (long long)preferredPunchoutIndexForCardSectionViewController:(id)arg1;
- (void)presentViewController:(id)arg1 forCardSectionViewController:(id)arg2;
- (void)cardSectionViewController:(id)arg1 didSelectPreferredPunchoutIndex:(long long)arg2;
- (struct CGSize)boundingSizeForCardSectionViewController:(id)arg1;
- (id)_cardViewControllerForCardSection:(id)arg1;
- (_Bool)_askDelegateToPerformReferentialCommand:(id)arg1 forCardSection:(id)arg2;

@end
