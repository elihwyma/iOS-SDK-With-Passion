/*
 Image: /System/Library/PrivateFrameworks/CardKit.framework/CardKit
 */

#import <UIKit/UIViewController.h>

#import <CardKit/Swift-Protocol.h>

@class CRKCardSectionViewConfiguration, CRKOverlayButton, INUIRemoteViewController, NSArray, NSString, UIView;

@protocol CRCardSection, CRKCardSectionView, CRKCardSectionViewControllerDelegate;

@interface CRKCardSectionViewController : UIViewController <Swift>

{
    CRKOverlayButton *_overlayButton;
    _Bool _loading;
    id <CRKCardSectionViewControllerDelegate> _delegate;
    id <CRCardSection> _cardSection;
    NSArray *_extraCommands;
    INUIRemoteViewController *__remoteViewController;
    CRKCardSectionViewConfiguration *_viewConfiguration;
}

@property (retain, nonatomic, getter=_extraCommands, setter=_setExtraCommands:) NSArray *extraCommands;
@property (nonatomic, readonly) INUIRemoteViewController *_remoteViewController;
@property (retain, nonatomic) CRKCardSectionViewConfiguration *viewConfiguration;
@property (weak, nonatomic) id <CRKCardSectionViewControllerDelegate> delegate;
@property (retain, nonatomic) UIView<CRKCardSectionView> *view;
@property (retain, nonatomic) id <CRCardSection> cardSection;
@property (nonatomic, getter=isLoading) _Bool loading;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)cardSectionViewControllerForCardSection:(id)arg1;
+ (void)registerCardSectionViewController;
+ (id)cardSectionClasses;
+ (id)cardSectionViewControllerForViewConfiguration:(id)arg1;
+ (void)_registerWithCardKit;

- (void)loadView;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (_Bool)_canShowWhileLocked;
- (void)viewDidLayoutSubviews;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)presentViewController:(id)arg1;
- (void)didEngageCardSection:(id)arg1;
- (id)_commands;
- (void)willDismissViewController:(id)arg1;
- (void)cardSectionViewDidSelectPreferredPunchoutIndex:(long long)arg1;
- (void)cardSectionViewDidInvalidateSize:(id)arg1 animate:(_Bool)arg2;
- (void)cardSectionViewDidInvalidateSize:(id)arg1;
- (void)userDidEngageCardSection:(id)arg1 withEngagementFeedback:(id)arg2;
- (void)cardViewWillAppearForCard:(id)arg1 withAppearanceFeedback:(id)arg2;
- (void)cardViewDidAppearForCard:(id)arg1 withAppearanceFeedback:(id)arg2;
- (void)cardViewDidDisappearForCard:(id)arg1 withDisappearanceFeedback:(id)arg2;
- (void)cardSectionViewWillAppearForCardSection:(id)arg1 withAppearanceFeedback:(id)arg2;
- (void)cardSectionViewDidAppearForCardSection:(id)arg1 withAppearanceFeedback:(id)arg2;
- (void)cardSectionViewDidDisappearForCardSection:(id)arg1 withDisappearanceFeedback:(id)arg2;
- (void)controllerForCard:(id)arg1 didRequestAsyncCard:(id)arg2 withAsyncCardRequestFeedback:(id)arg3;
- (void)controllerForCard:(id)arg1 didReceiveAsyncCard:(id)arg2 withAsyncCardReceiptFeedback:(id)arg3;
- (void)cardSectionViewDidInvalidateSizeForCardSection:(id)arg1;
- (_Bool)shouldHandleEngagement:(id)arg1 forCardSection:(id)arg2;
- (void)cardEventDidOccur:(unsigned long long)arg1 withIdentifier:(id)arg2 userInfo:(id)arg3;
- (_Bool)_shouldHideButtonOverlay;
- (id)_preferredPunchoutCommand;
- (id)_destinationPunchout;
- (void)_performAllCommands;
- (_Bool)_checkIfCardSectionIsNull:(id)arg1;
- (void)_loadCardSectionView;
- (void)_setupCardSectionButtons;
- (_Bool)_shouldRenderButtonOverlay;
- (void)_buttonOverlayWasTouchedUpInside:(id)arg1;
- (void)_buttonOverlayWasTouchedUpOutside:(id)arg1;
- (void)_buttonOverlayWasTouchedDown:(id)arg1;
- (void)_buttonOverlayTouchWasCanceled:(id)arg1;
- (id)_generateCardSectionViewAppearanceFeedback;
- (_Bool)performCommand:(id)arg1 forViewController:(id)arg2;
- (id)_initWithCardSection:(id)arg1;
- (void)_performCommand:(id)arg1;
- (_Bool)_hasCorrespondingSearchUIView;
- (_Bool)_expectsSearchUIView;
- (_Bool)_isLoadedWithIntentsUIView;
- (void)_finishLoadingViewIfNecessary;
- (void)_cancelTouchesIfNecessary;
- (void)_resumeTouchesIfNecessary;
- (void)_cardSectionTapped;
- (_Bool)_isIndicatingActivity;
- (id)_backingCardSection;
- (void)_setViewExternally:(id)arg1;

@end
