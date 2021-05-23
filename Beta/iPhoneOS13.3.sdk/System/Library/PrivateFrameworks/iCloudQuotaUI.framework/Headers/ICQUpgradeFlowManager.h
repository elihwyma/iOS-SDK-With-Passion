/*
 Image: /System/Library/PrivateFrameworks/iCloudQuotaUI.framework/iCloudQuotaUI
 */

#import <Foundation/NSObject.h>

@class ICQAlertController, ICQOffer, ICQUpgradeFlowOptions, ICQUpgradeOfferViewController, NSDictionary, NSString, UINavigationController;

@protocol ICQUpgradeFlowManagerDelegate;

@interface ICQUpgradeFlowManager : NSObject

{
    ICQUpgradeOfferViewController *_busyOfferViewController;
    _Bool _shouldNavigationControllerBeDismissed;
    _Bool _completedFamilySetup;
    ICQOffer *_offer;
    NSDictionary *_bindings;
    ICQUpgradeFlowOptions *_flowOptions;
    id <ICQUpgradeFlowManagerDelegate> _delegate;
    UINavigationController *_hostingNavigationController;
    ICQAlertController *_upgradeAlertController;
}

@property (nonatomic) _Bool completedFamilySetup;
@property (nonatomic, readonly) ICQOffer *offer;
@property (retain, nonatomic) NSDictionary *bindings;
@property (copy, nonatomic) ICQUpgradeFlowOptions *flowOptions;
@property (weak, nonatomic) id <ICQUpgradeFlowManagerDelegate> delegate;
@property (nonatomic) _Bool shouldNavigationControllerBeDismissed;
@property (retain, nonatomic) UINavigationController *hostingNavigationController;
@property (retain, nonatomic) ICQAlertController *upgradeAlertController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)shouldShowForOffer:(id)arg1;
+ (Class)subclassForOfferType:(long long)arg1;
+ (_Bool)shouldSubclassShowForOffer:(id)arg1;
+ (void)addActiveFlowManager:(id)arg1;
+ (id)activeFlowManagers;
+ (void)removeActiveFlowManager:(id)arg1;
+ (void)needsToRunWithCompletion:(CDUnknownBlockType)arg1;

- (id)init;
- (void)_openURL:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)navigationController:(id)arg1 willShowViewController:(id)arg2 animated:(_Bool)arg3;
- (unsigned long long)navigationControllerSupportedInterfaceOrientations:(id)arg1;
- (id)initWithOffer:(id)arg1;
- (void)beginFlowWithPresentingViewController:(id)arg1;
- (_Bool)needsNetwork;
- (id)initSubclassWithOffer:(id)arg1;
- (void)_performPageButtonActionWithParameters:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_sendDelegateCancel;
- (void)_sendDelegateComplete;
- (void)_tappedAlertLink:(id)arg1;
- (void)_sendDelegateDidPresentViewController:(id)arg1;
- (void)_addAlertActionForAlertSpec:(id)arg1 buttonIndex:(long long)arg2;
- (id)initBaseclassWithOffer:(id)arg1;
- (void)sender:(id)arg1 action:(long long)arg2 parameters:(id)arg3;
- (void)_presentPageWithSpecification:(id)arg1;
- (void)_setBusyOfferViewController:(id)arg1;
- (void)_clearBusyOfferViewController;
- (void)_initiateFamilySetupFlow;
- (void)_simulateDoneButton;
- (void)_cancelFlow;
- (void)_presentUpgradeComplete;
- (void)presentFlowHostedInNavigationController:(id)arg1;

@end
