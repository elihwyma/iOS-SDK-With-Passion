/*
 Image: /System/Library/PrivateFrameworks/CardKit.framework/CardKit
 */

#import <Foundation/NSObject.h>

@class CRKCardPresentationConfiguration, CRProtocolRestrictedInvocationChain, NSString, UIViewController, _CRKCardSectionViewLoader;

@protocol CRCard, CRKCardPresentationDelegate, CRKCardViewControllerDelegate, CRKCardViewControlling, CRKIdentifiedProviding;

@interface CRKCardPresentation : NSObject

{
    _CRKCardSectionViewLoader *_cardSectionViewLoader;
    id <CRKIdentifiedProviding> _loadedCardViewControllerProvider;
    CRProtocolRestrictedInvocationChain *_cardViewControllerDelegateChain;
    id <CRKCardViewControllerDelegate> _externalCardViewControllerDelegate;
    _Bool _debugModeEnabled;
    CRKCardPresentationConfiguration *_configuration;
    UIViewController<CRKCardViewControlling> *_cardViewController;
    id <CRKCardPresentationDelegate> _delegate;
}

@property (nonatomic) _Bool debugModeEnabled;
@property (weak, nonatomic) id <CRKCardPresentationDelegate> delegate;
@property (nonatomic, readonly) UIViewController<CRKCardViewControlling> *cardViewController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, nonatomic) CRKCardPresentationConfiguration *configuration;
@property (nonatomic, readonly) id <CRCard> card;

+ (void)initialize;
+ (void)registerProvider:(id)arg1;
+ (void)unregisterProvider:(id)arg1;

- (id)init;
- (void)transitionAnimator:(id)arg1 willTransitionFromCardViewController:(id)arg2 toCardViewController:(id)arg3 withAnimationCoordinator:(id)arg4;
- (void)cardViewController:(id)arg1 requestCardSectionViewSourceForCard:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (void)setConfiguration:(id)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_fullyConfigureWithRequestedCard:(id)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_establishParsecSessionIfNeeded:(CDUnknownBlockType)arg1;
- (void)configureWithContent:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)configureWithCardRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_updateViewConfigurationsDebugMode:(_Bool)arg1;
- (id)_cardSectionViewControllerForCardSection:(id)arg1;
- (void)_configureWithRequestedCard:(id)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_loadAndRegisterBundleProviders:(CDUnknownBlockType)arg1;
- (id)defaultFeedbackDelegateForProvider:(id)arg1;
- (_Bool)cardSectionDisplayRequiresUserConsentForProvider:(id)arg1;
- (double)boundingWidthForProvider:(id)arg1;
- (long long)semanticContentAttributeForCardFactory:(id)arg1;
- (long long)cardSectionViewLoader:(id)arg1 compareCardSectionViewProviderOne:(id)arg2 providerTwo:(id)arg3;
- (void)configureWithCard:(id)arg1 completion:(CDUnknownBlockType)arg2;

@end
