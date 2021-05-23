/*
 Image: /System/Library/PrivateFrameworks/CardKit.framework/CardKit
 */

#import <UIKit/UIViewController.h>

@class CRKComposedStackView, NSMapTable, NSMutableArray, NSString;

@protocol CRCard, CRKCardSectionViewSourcing, CRKCardViewControllerDelegate;

@interface CRKCardViewController : UIViewController

{
    NSMutableArray *_cardSectionViewControllers;
    NSMapTable *_cardSectionsToCardSectionViewControllersMapTable;
    NSMapTable *_handledParametersForInteraction;
    NSMutableArray *_pendingDismissalCommands;
    _Bool _loaded;
    id <CRKCardSectionViewSourcing> _builtInCardSectionViewSource;
    NSMutableArray *_loadingCardSections;
    _Bool _indicatingActivity;
    _Bool _loadBundles;
    id <CRCard> _card;
    id <CRKCardViewControllerDelegate> _cardViewControllerDelegate;
    id <CRKCardSectionViewSourcing> _cardSectionViewSource;
    long long _preferredPunchoutIndex;
}

@property (retain, nonatomic) CRKComposedStackView *view;
@property long long preferredPunchoutIndex;
@property (weak, nonatomic) id <CRKCardViewControllerDelegate> delegate;
@property (nonatomic, readonly, getter=isLoading) _Bool loading;
@property (nonatomic, readonly, getter=isIndicatingActivity) _Bool indicatingActivity;
@property (nonatomic) _Bool loadBundles;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (retain, nonatomic) id <CRCard> card;
@property (retain, nonatomic) id <CRKCardSectionViewSourcing> cardSectionViewSource;
@property (weak, nonatomic) id <CRKCardViewControllerDelegate> cardViewControllerDelegate;

+ (void)initialize;
+ (void)_registerCardSectionViewControllers;

- (id)init;
- (id)initWithCoder:(id)arg1;
- (void)loadView;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (struct CGSize)preferredContentSize;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (_Bool)_canShowWhileLocked;
- (void)didMoveToParentViewController:(id)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)presentViewController:(id)arg1;
- (void)didEngageCardSection:(id)arg1;
- (void)_finishLoading;
- (void)willDismissViewController:(id)arg1;
- (void)cardSectionViewDidSelectPreferredPunchoutIndex:(long long)arg1;
- (double)contentHeightForWidth:(double)arg1;
- (void)userDidEngageCardSection:(id)arg1 withEngagementFeedback:(id)arg2;
- (void)userDidReportFeedback:(id)arg1 fromCardSection:(id)arg2;
- (void)cardSectionViewWillAppearForCardSection:(id)arg1 withAppearanceFeedback:(id)arg2;
- (void)cardSectionViewDidAppearForCardSection:(id)arg1 withAppearanceFeedback:(id)arg2;
- (void)cardSectionViewDidDisappearForCardSection:(id)arg1 withDisappearanceFeedback:(id)arg2;
- (void)handleCardCommand:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (id)_cardSectionViewControllerForCardSection:(id)arg1;
- (void)cardEventDidOccur:(unsigned long long)arg1 withIdentifier:(id)arg2 userInfo:(id)arg3;
- (id)defaultFeedbackDelegateForProvider:(id)arg1;
- (_Bool)performCommand:(id)arg1 forCardSectionViewController:(id)arg2;
- (void)cardSectionViewControllerDidFinishLoading:(id)arg1;
- (long long)preferredPunchoutIndexForCardSectionViewController:(id)arg1;
- (void)cardSectionViewControllerBoundsDidChange:(id)arg1;
- (void)presentViewController:(id)arg1 forCardSectionViewController:(id)arg2;
- (void)cardSectionViewController:(id)arg1 didSelectPreferredPunchoutIndex:(long long)arg2;
- (void)_cancelTouchesIfNecessary;
- (void)_resumeTouchesIfNecessary;
- (id)_initWithCard:(id)arg1 delegate:(id)arg2 loadBundles:(_Bool)arg3 loadProvidersImmediately:(_Bool)arg4;
- (void)_setCard:(id)arg1 loadProvidersImmediately:(_Bool)arg2;
- (id)initWithCard:(id)arg1 delegate:(id)arg2;
- (void)_configureCardSectionViewController:(id)arg1 forCardSection:(id)arg2;
- (long long)_defaultKeylineStyleBetweenLeadingCardSection:(id)arg1 andTrailingCardSection:(id)arg2;
- (long long)_convertSFSeparatorStyleToCRKKeylineStyle:(int)arg1;
- (long long)_keylineStyleBetweenLeadingCardSectionViewController:(id)arg1 andTrailingCardSectionViewController:(id)arg2;
- (void)_setCardWithLoadedBundles:(id)arg1 loadProvidersImmediately:(_Bool)arg2;
- (void)_loadCardSectionViewControllersFromCard:(id)arg1 currentSourceInvalid:(_Bool)arg2;
- (void)_removeCardSectionViewControllersFromParentViewController:(id)arg1;
- (id)_loadCardSectionViewControllerFromCardSection:(id)arg1;
- (void)_addCardSectionViewControllersAsChildViewControllers:(id)arg1;
- (id)_generateCardViewAppearanceFeedback;
- (_Bool)_isActuallyVisible;
- (_Bool)_askDelegateToPerformReferentialCommand:(id)arg1;
- (_Bool)_fireAndForgetOutboundCommand:(id)arg1;
- (void)cardSectionViewController:(id)arg1 requestsHandlingOfIntent:(id)arg2;
- (struct CGSize)boundingSizeForCardSectionViewController:(id)arg1;
- (id)_initWithCard:(id)arg1 delegate:(id)arg2 loadProvidersImmediately:(_Bool)arg3;
- (id)_initWithCard:(id)arg1;
- (void)cardSectionViewControllerShouldBeRemoved:(id)arg1;

@end
