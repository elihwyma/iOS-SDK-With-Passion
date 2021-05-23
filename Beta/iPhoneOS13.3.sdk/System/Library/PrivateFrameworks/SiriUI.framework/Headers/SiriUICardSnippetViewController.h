/*
 Image: /System/Library/PrivateFrameworks/SiriUI.framework/SiriUI
 */

#import <SiriUI/SiriUISnippetViewController.h>

@class CRKCardPresentation, NSMutableDictionary, NSObject, NSString, NSTimer, SACardSnippet, SiriUICardSnippetView, SiriUIModalContainerViewController, UIViewController, _SiriUICardLoader;

@protocol CRKCardViewControllerDelegate, CRKCardViewControlling, OS_dispatch_group;

@interface SiriUICardSnippetViewController : SiriUISnippetViewController

{
    SACardSnippet *_snippet;
    struct CGSize _contentSize;
    NSMutableDictionary *_referenceableCommandsByIdentifierMap;
    NSMutableDictionary *_referenceableSnippetsByIdentifierMap;
    NSObject<OS_dispatch_group> *_cardLoadingGroup;
    SACardSnippet *_newlyLoadedCardSnippet;
    _SiriUICardLoader *_cardLoader;
    CDUnknownBlockType _cardLoadingCompletionhandler;
    NSTimer *_cardLoadingTimer;
    _Bool _isCardLoading;
    SiriUIModalContainerViewController *_presentedModalContainerViewController;
    UIViewController<CRKCardViewControlling> *_cardViewController;
    CRKCardPresentation *_cardPresentation;
}

@property (retain, nonatomic, getter=_cardViewController, setter=_setCardViewController:) UIViewController<CRKCardViewControlling> *cardViewController;
@property (retain, nonatomic, getter=_cardPresentation, setter=_setCardPresentation:) CRKCardPresentation *cardPresentation;
@property (retain, nonatomic) SiriUICardSnippetView *view;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) id <CRKCardViewControllerDelegate> cardViewControllerDelegate;

+ (void)initialize;

- (void)loadView;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)viewDidAppear:(_Bool)arg1;
- (id)snippet;
- (void)setSnippet:(id)arg1;
- (id)requestContext;
- (double)desiredHeight;
- (double)contentHeightForWidth:(double)arg1;
- (void)userDidEngageCardSection:(id)arg1 withEngagementFeedback:(id)arg2;
- (void)userDidReportFeedback:(id)arg1 fromCardSection:(id)arg2;
- (void)cardViewWillAppearForCard:(id)arg1 withAppearanceFeedback:(id)arg2;
- (void)cardViewDidAppearForCard:(id)arg1 withAppearanceFeedback:(id)arg2;
- (void)cardViewDidDisappearForCard:(id)arg1 withDisappearanceFeedback:(id)arg2;
- (void)cardSectionViewWillAppearForCardSection:(id)arg1 withAppearanceFeedback:(id)arg2;
- (void)cardSectionViewDidAppearForCardSection:(id)arg1 withAppearanceFeedback:(id)arg2;
- (void)cardSectionViewDidDisappearForCardSection:(id)arg1 withDisappearanceFeedback:(id)arg2;
- (void)controllerForCard:(id)arg1 didRequestAsyncCard:(id)arg2 withAsyncCardRequestFeedback:(id)arg3;
- (void)controllerForCard:(id)arg1 didReceiveAsyncCard:(id)arg2 withAsyncCardReceiptFeedback:(id)arg3;
- (void)cardViewControllerDidLoad:(id)arg1;
- (void)cardViewControllerBoundsDidChange:(id)arg1;
- (void)cardViewController:(id)arg1 requestsHandlingOfIntent:(id)arg2;
- (struct CGSize)cardViewController:(id)arg1 boundingSizeForCardSectionViewController:(id)arg2;
- (unsigned long long)navigationIndexOfCardViewController:(id)arg1;
- (void)presentViewController:(id)arg1 forCardViewController:(id)arg2;
- (void)cardViewController:(id)arg1 willDismissViewController:(id)arg2;
- (_Bool)performReferentialCommand:(id)arg1 forCardViewController:(id)arg2;
- (_Bool)performNextCardCommand:(id)arg1 forCardViewController:(id)arg2;
- (_Bool)performPunchoutCommand:(id)arg1 forCardViewController:(id)arg2;
- (_Bool)performBeganEditingCommand:(id)arg1 forCardViewController:(id)arg2;
- (double)boundingWidthForPresentation:(id)arg1;
- (_Bool)isIndicatingActivity;
- (void)siriDidDeactivate;
- (void)cardLoadingMonitor:(id)arg1 didReceiveCardSnippet:(id)arg2;
- (_Bool)usePlatterStyle;
- (void)wasAddedToTranscript;
- (void)siriWillBeginScrolling;
- (void)siriDidScrollVisible:(_Bool)arg1;
- (void)siriDidStartSpeakingWithIdentifier:(id)arg1;
- (void)siriDidStopSpeakingWithIdentifier:(id)arg1 speechQueueIsEmpty:(_Bool)arg2;
- (void)siriDidReceiveViewsWithDialogPhase:(id)arg1;
- (void)_addCardViewControllerAsChildViewController:(id)arg1;
- (void)_updateContentSizeAndNotifyDelegateIfNecessary:(_Bool)arg1;
- (_Bool)logContentsIfApplicable;
- (void)_forwardProgressEvent:(unsigned long long)arg1 toCardViewController:(id)arg2 animated:(_Bool)arg3;
- (void)willCancel;
- (void)_forwardProgressEventToCardViewController:(unsigned long long)arg1;
- (void)_removeCardViewControllerFromParentViewController:(id)arg1;
- (void)willConfirm;
- (void)_insertCardViewController:(id)arg1;
- (void)_validateCardSectionForParsecFeedbackDelivery:(id)arg1 validHandler:(CDUnknownBlockType)arg2;
- (id)_metricsContextOfEventsForCardSection:(id)arg1 inCard:(id)arg2;
- (id)_metricsContextOfEventsForCard:(id)arg1;
- (void)_validateCardForParsecFeedbackDelivery:(id)arg1 validHandler:(CDUnknownBlockType)arg2;
- (void)_beginMonitoringForNextCardWithBlock:(CDUnknownBlockType)arg1;
- (Class)transparentHeaderViewClass;
- (_Bool)cardLoader:(id)arg1 shouldLoadCard:(id)arg2;
- (_Bool)cardLoader:(id)arg1 loadCard:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;
- (void)modalContainerViewControllerViewWillDisappear:(id)arg1;
- (void)modalContainerViewControllerViewDidDisappear:(id)arg1;
- (id)sashItemForCardSnippetView:(id)arg1;
- (id)localeForCardSnippetView:(id)arg1;
- (void)cardSnippetViewSashWasTapped:(id)arg1;
- (struct UIEdgeInsets)defaultViewInsets;
- (void)configureReusableTransparentHeaderView:(id)arg1;
- (double)desiredHeightForTransparentHeaderView;

@end
