/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
 */

@interface NPKPaymentProvisioningFlowController : NSObject <PKContactlessCardIngesterDelegate, PKPaymentAuthorizationControllerDelegate, PKPaymentAuthorizationControllerPrivateDelegate> {
    PKPaymentAuthorizationController * _authorizationController;
    PKContactlessCardIngester * _cardIngester;
    NSString * _chooseCredentialsStepIdentifier;
    PKPaymentCredential * _currentCredential;
    PKPaymentSetupProduct * _currentProduct;
    int  _currentStep;
    <NPKPaymentProvisioningFlowControllerDelegate> * _delegate;
    NSDecimalNumber * _digitalIssuanceAmount;
    PKPaymentRequest * _digitalIssuancePaymentRequest;
    PKServiceProviderPurchase * _digitalIssuancePurchase;
    NPKPaymentProvisioningFlowControllerRequestContext * _digitalIssuanceRequestContext;
    bool  _digitalIssuanceSupported;
    PKPaymentSetupFieldsModel * _fieldsModel;
    unsigned long long  _flowIngestionState;
    NSString * _immediatelyBeforeTermsStepIdentifier;
    NSObject<OS_dispatch_source> * _inAppProvisioningGetRequestTimer;
    NSData * _inAppProvisioningNonce;
    NSData * _inAppProvisioningPublicKeyHash;
    PKAddPaymentPassRequest * _inAppProvisioningRequest;
    PKAddPaymentPassRequestConfiguration * _inAppProvisioningRequestConfiguration;
    NSObject<OS_dispatch_source> * _ingestionCardNotFoundTimer;
    NSString * _ingestionCardSessionToken;
    PKPaymentProvisioningMethodMetadata * _ingestionMethodMetadata;
    double  _ingestionProgress;
    unsigned long long  _ingestionStateOnRetry;
    unsigned long long  _internalIngestionState;
    PKPaymentPass * _issuerVerificationPass;
    <NSObject> * _progressNotificationToken;
    PKPaymentProvisioningController * _provisioningController;
    NPKPaymentProvisioningFlowControllerRequestContext * _provisioningProgressRequestContext;
    bool  _readerModeProvisioningSupported;
    NPKPaymentProvisioningFlowControllerRequestContext * _readerModeRequestContext;
    bool  _separateLocalDeviceEntryRequired;
    long long  _setupContext;
    bool  _termsAcceptedOutOfBand;
    unsigned long long  _termsReason;
    PKPaymentAuthorizationController * _unitTestingAuthorizationController;
    PKContactlessCardIngester * _unitTestingCardIngester;
    PKPaymentWebService * _webService;
}

@property (nonatomic, retain) PKPaymentAuthorizationController *authorizationController;
@property (nonatomic, retain) PKContactlessCardIngester *cardIngester;
@property (nonatomic, retain) NSString *chooseCredentialsStepIdentifier;
@property (nonatomic, retain) PKPaymentCredential *currentCredential;
@property (nonatomic, retain) PKPaymentSetupProduct *currentProduct;
@property (nonatomic) int currentStep;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <NPKPaymentProvisioningFlowControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSDecimalNumber *digitalIssuanceAmount;
@property (nonatomic, retain) PKPaymentRequest *digitalIssuancePaymentRequest;
@property (nonatomic, retain) PKServiceProviderPurchase *digitalIssuancePurchase;
@property (nonatomic, retain) NPKPaymentProvisioningFlowControllerRequestContext *digitalIssuanceRequestContext;
@property (getter=isDigitalIssuanceSupported, nonatomic) bool digitalIssuanceSupported;
@property (nonatomic, retain) PKPaymentSetupFieldsModel *fieldsModel;
@property (nonatomic) unsigned long long flowIngestionState;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSString *immediatelyBeforeTermsStepIdentifier;
@property (nonatomic, retain) NSObject<OS_dispatch_source> *inAppProvisioningGetRequestTimer;
@property (nonatomic, retain) NSData *inAppProvisioningNonce;
@property (nonatomic, retain) NSData *inAppProvisioningPublicKeyHash;
@property (nonatomic, retain) PKAddPaymentPassRequest *inAppProvisioningRequest;
@property (nonatomic, retain) PKAddPaymentPassRequestConfiguration *inAppProvisioningRequestConfiguration;
@property (nonatomic, retain) NSObject<OS_dispatch_source> *ingestionCardNotFoundTimer;
@property (nonatomic, retain) NSString *ingestionCardSessionToken;
@property (nonatomic, retain) PKPaymentProvisioningMethodMetadata *ingestionMethodMetadata;
@property (nonatomic) double ingestionProgress;
@property (nonatomic) unsigned long long ingestionStateOnRetry;
@property (nonatomic) unsigned long long internalIngestionState;
@property (nonatomic, retain) PKPaymentPass *issuerVerificationPass;
@property (nonatomic, retain) <NSObject> *progressNotificationToken;
@property (nonatomic, readonly) PKPaymentProvisioningController *provisioningController;
@property (nonatomic, retain) NPKPaymentProvisioningFlowControllerRequestContext *provisioningProgressRequestContext;
@property (getter=isReaderModeProvisioningSupported, nonatomic) bool readerModeProvisioningSupported;
@property (nonatomic, retain) NPKPaymentProvisioningFlowControllerRequestContext *readerModeRequestContext;
@property (getter=isSeparateLocalDeviceEntryRequired, nonatomic) bool separateLocalDeviceEntryRequired;
@property (nonatomic, readonly) long long setupContext;
@property (readonly) Class superclass;
@property (nonatomic) bool termsAcceptedOutOfBand;
@property (nonatomic) unsigned long long termsReason;
@property (nonatomic, retain) PKPaymentAuthorizationController *unitTestingAuthorizationController;
@property (nonatomic, retain) PKContactlessCardIngester *unitTestingCardIngester;
@property (nonatomic, retain) PKPaymentWebService *webService;

+ (id)_authContext;
+ (id)_displayableCouldNotAddCardErrorWithUnderlyingError:(id)arg1;
+ (id)_displayableErrorWithIneligibilityReason:(long long)arg1 learnMoreURL:(id)arg2;
+ (id)_displayableErrorWithUnderlyingVerificationError:(id)arg1;
+ (id)_filteredPaymentSetupProducts:(id)arg1 localCredentials:(id)arg2 setupContext:(long long)arg3 webService:(id)arg4 mobileCarrierRegion:(id)arg5 readerModeSupported:(bool)arg6 digitalIssuanceSupported:(bool)arg7;
+ (id)_flowPickerSectionsWithContext:(long long)arg1 provisioningController:(id)arg2 readerModeSupported:(bool)arg3 digitalIssuanceSupported:(bool)arg4;
+ (bool)_isHSA2Enabled;
+ (bool)_localCredentials:(id)arg1 containProduct:(id)arg2;
+ (id)_physicalCardURLFromMetadata:(id)arg1 forScale:(double)arg2;
+ (bool)_readerModeEntryAllowedForProduct:(id)arg1;
+ (id)_readerModeResources;

- (void).cxx_destruct;
- (id)_addCardErrorForPaymentRequest:(id)arg1;
- (void)_cardNotFoundTimerFired;
- (void)_configureWebServiceIfNecessary:(id)arg1 completion:(id /* block */)arg2;
- (void)_downloadAndAddUpdatedPassForPaymentPass:(id)arg1 completion:(id /* block */)arg2;
- (void)_downloadRemoteAssetsAndAddPaymentPass:(id)arg1 completion:(id /* block */)arg2;
- (void)_endProvisioningFlowWithError:(id)arg1 requestContext:(id)arg2;
- (void)_endProvisioningFlowWithSuccessForPass:(id)arg1 requestContext:(id)arg2;
- (void)_fetchAddRequestWithCertificatesResponse:(id)arg1 requestContext:(id)arg2;
- (void)_fetchInAppProvisioningCertificates:(id)arg1;
- (bool)_fieldRequiresLocalEntry:(id)arg1;
- (bool)_fieldsModelCompleteExceptForLocalFields:(id)arg1;
- (id)_filteredPaymentSetupFields:(id)arg1 forLocalDeviceEntry:(bool)arg2;
- (void)_handleDigitalIssuanceTermsAccepted:(id)arg1;
- (void)_handleEndOfProvisioningFlowForCurrentPass:(id)arg1 requestContext:(id)arg2;
- (void)_handleFinished:(id)arg1;
- (void)_handlePreconditionsVerified:(id)arg1;
- (void)_handleProceedWithCredentials:(id)arg1 chosenByUser:(bool)arg2 requestContext:(id)arg3;
- (void)_handleProductChosen:(id)arg1 requestContext:(id)arg2;
- (void)_handleProvisioningFlowStarted:(id)arg1;
- (void)_handleReaderModeTermsAccepted:(id)arg1;
- (void)_handleVerificationCode:(id)arg1 forPass:(id)arg2 context:(id)arg3;
- (void)_handleVerificationFieldsForPass:(id)arg1 context:(id)arg2;
- (void)_handleVerificationResponseForPass:(id)arg1 context:(id)arg2;
- (void)_invalidateCardNotFoundTimer;
- (id)_localRequiredFieldsFromRequirementsResponse;
- (id)_newPaymentEligibilityRequest;
- (id)_newPaymentProvisioningRequest;
- (id)_newPaymentRequirementsRequest;
- (void)_noteProvisioningStateChangeForReaderMode:(long long)arg1;
- (id)_paymentRequestForAmount:(id)arg1;
- (void)_performEligibility:(id)arg1;
- (void)_performNextActionForProvisioningState:(id)arg1;
- (void)_performNextStepForProvisionedPass:(id)arg1 moreInfoAcknowledged:(bool)arg2 requestContext:(id)arg3;
- (void)_performNextStepForProvisionedPass:(id)arg1 requestContext:(id)arg2;
- (void)_performPasscodeUpgrade:(id)arg1;
- (void)_performProvision:(id)arg1;
- (void)_performRequirementsOrEligibilityForInAppProvisioning:(id)arg1;
- (void)_performTerms:(id)arg1;
- (void)_performTransitionToStep:(int)arg1 withContext:(id)arg2;
- (void)_provisioningLocalizedProgressDescriptionDidChange:(id)arg1;
- (void)_removePassIfNecessary;
- (void)_requestPassDetailsForAccountCredential:(id)arg1 withCompletionHandler:(id /* block */)arg2;
- (void)_requestRequirements:(id)arg1;
- (void)_requestVerificationOptionsForPass:(id)arg1 context:(id)arg2;
- (id)_requiredFieldsFromRequirementsResponse;
- (id)_requiredFieldsFromRequirementsResponseExcludingLocalFields;
- (void)_resetReaderModeProvisioningState;
- (void)_sendDidEncounterError:(id)arg1 requestContext:(id)arg2;
- (void)_sendDidTransitionFromStep:(int)arg1 toStep:(int)arg2 withContext:(id)arg3;
- (void)_setupCardIngester;
- (void)_startCardNotFoundTimer;
- (void)_startDigitalIssuancePaymentWithAmount:(id)arg1 requestContext:(id)arg2;
- (void)_startIngestion;
- (void)_startProvisioningForCredential:(id)arg1 requestContext:(id)arg2;
- (void)_startReaderModeIngestion:(id)arg1;
- (void)_startReadingCard;
- (void)_startTransferringCard;
- (id)_subtitleForState:(unsigned long long)arg1;
- (void)_tearDownCardIngester;
- (id)_titleForState:(unsigned long long)arg1;
- (void)_transitionBasedOnCredentials:(id)arg1 product:(id)arg2 requestContext:(id)arg3;
- (void)_transitionToChooseCredentials:(id)arg1 requestContext:(id)arg2;
- (void)_transitionToChooseFlowWithSections:(id)arg1 requestContext:(id)arg2;
- (void)_transitionToChooseProductWithProducts:(id)arg1 requestContext:(id)arg2;
- (void)_transitionToDigitalIssuanceForProduct:(id)arg1 requestContext:(id)arg2;
- (void)_transitionToFlowIngestionState:(unsigned long long)arg1;
- (void)_transitionToFlowIngestionState:(unsigned long long)arg1 progress:(double)arg2;
- (void)_transitionToIngestionProgress:(double)arg1;
- (void)_transitionToManualEntry:(id)arg1;
- (void)_transitionToMoreInformationWithItems:(id)arg1 pass:(id)arg2 requestContext:(id)arg3;
- (void)_transitionToProductDisambiguationWithProducts:(id)arg1 requestContext:(id)arg2;
- (void)_transitionToProvisioningProgressWithRequestContext:(id)arg1;
- (void)_transitionToReaderModeForProduct:(id)arg1 requestContext:(id)arg2;
- (void)_transitionToSecondaryManualEntryWithFields:(id)arg1 credential:(id)arg2 requestContext:(id)arg3;
- (void)_transitionToTermsForReason:(unsigned long long)arg1 URL:(id)arg2 requestContext:(id)arg3;
- (void)_transitionToVerificationChannelsWithPaymentPass:(id)arg1 channels:(id)arg2 requestContext:(id)arg3;
- (void)_transitionToVerificationCodeWithPaymentPass:(id)arg1 channel:(id)arg2 requestContext:(id)arg3;
- (void)_transitionToVerificationFieldsWithPaymentPass:(id)arg1 fields:(id)arg2 requestContext:(id)arg3;
- (void)_updateVerificationForPass:(id)arg1 channel:(id)arg2 context:(id)arg3;
- (void)_verifyPasscodeStateIfNecessaryWithCompletion:(id /* block */)arg1;
- (void)acceptTerms:(id)arg1;
- (void)acknowledgeMoreInformation:(id)arg1;
- (void)acknowledgeWelcome:(id)arg1;
- (id)authorizationController;
- (id)cardIngester;
- (void)chooseCredentials:(id)arg1 requestContext:(id)arg2;
- (id)chooseCredentialsStepIdentifier;
- (void)chooseFlowForPickerItem:(id)arg1 requestContext:(id)arg2;
- (void)chooseManualEntry:(id)arg1;
- (void)chooseProduct:(id)arg1 requestContext:(id)arg2;
- (void)chooseReaderMode:(id)arg1;
- (void)contactlessCardIngester:(id)arg1 didFailToIngestCardWithError:(id)arg2 resetProvisioning:(bool)arg3 isRecoverable:(bool)arg4;
- (void)contactlessCardIngester:(id)arg1 didUpdateCardIngestionStatus:(unsigned long long)arg2;
- (id)currentCredential;
- (id)currentProduct;
- (int)currentStep;
- (void)dealloc;
- (id)delegate;
- (id)digitalIssuanceAmount;
- (id)digitalIssuancePaymentRequest;
- (id)digitalIssuancePurchase;
- (id)digitalIssuanceRequestContext;
- (id)fieldsModel;
- (unsigned long long)flowIngestionState;
- (void)handleDigitalIssuanceAmount:(id)arg1 requestContext:(id)arg2;
- (void)handleIssuerApplicationAddRequest:(id)arg1 requestContext:(id)arg2;
- (void)handleIssuerVerificationChannel:(id)arg1 requestContext:(id)arg2;
- (void)handleIssuerVerificationCode:(id)arg1 requestContext:(id)arg2;
- (void)handleIssuerVerificationFields:(id)arg1 requestContext:(id)arg2;
- (void)handleManualEntryFields:(id)arg1 credential:(id)arg2 requestContext:(id)arg3;
- (void)handleProductSelection:(id)arg1 requestContext:(id)arg2;
- (void)handleReaderModeFields:(id)arg1 requestContext:(id)arg2;
- (id)immediatelyBeforeTermsStepIdentifier;
- (id)inAppProvisioningGetRequestTimer;
- (id)inAppProvisioningNonce;
- (id)inAppProvisioningPublicKeyHash;
- (id)inAppProvisioningRequest;
- (id)inAppProvisioningRequestConfiguration;
- (id)ingestionCardNotFoundTimer;
- (id)ingestionCardSessionToken;
- (id)ingestionMethodMetadata;
- (double)ingestionProgress;
- (unsigned long long)ingestionStateOnRetry;
- (id)initWithProvisioningController:(id)arg1 setupContext:(long long)arg2;
- (unsigned long long)internalIngestionState;
- (bool)isDigitalIssuanceSupported;
- (bool)isReaderModeProvisioningSupported;
- (bool)isSeparateLocalDeviceEntryRequired;
- (id)issuerVerificationPass;
- (void)paymentAuthorizationController:(id)arg1 didAuthorizePayment:(id)arg2 handler:(id /* block */)arg3;
- (void)paymentAuthorizationController:(id)arg1 didAuthorizePurchase:(id)arg2 completion:(id /* block */)arg3;
- (void)paymentAuthorizationControllerDidFinish:(id)arg1;
- (id)progressNotificationToken;
- (id)provisioningController;
- (id)provisioningProgressRequestContext;
- (id)readerModeRequestContext;
- (void)reset;
- (void)setAuthorizationController:(id)arg1;
- (void)setCardIngester:(id)arg1;
- (void)setChooseCredentialsStepIdentifier:(id)arg1;
- (void)setCurrentCredential:(id)arg1;
- (void)setCurrentProduct:(id)arg1;
- (void)setCurrentStep:(int)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDigitalIssuanceAmount:(id)arg1;
- (void)setDigitalIssuancePaymentRequest:(id)arg1;
- (void)setDigitalIssuancePurchase:(id)arg1;
- (void)setDigitalIssuanceRequestContext:(id)arg1;
- (void)setDigitalIssuanceSupported:(bool)arg1;
- (void)setFieldsModel:(id)arg1;
- (void)setFlowIngestionState:(unsigned long long)arg1;
- (void)setImmediatelyBeforeTermsStepIdentifier:(id)arg1;
- (void)setInAppProvisioningGetRequestTimer:(id)arg1;
- (void)setInAppProvisioningNonce:(id)arg1;
- (void)setInAppProvisioningPublicKeyHash:(id)arg1;
- (void)setInAppProvisioningRequest:(id)arg1;
- (void)setInAppProvisioningRequestConfiguration:(id)arg1;
- (void)setIngestionCardNotFoundTimer:(id)arg1;
- (void)setIngestionCardSessionToken:(id)arg1;
- (void)setIngestionMethodMetadata:(id)arg1;
- (void)setIngestionProgress:(double)arg1;
- (void)setIngestionStateOnRetry:(unsigned long long)arg1;
- (void)setInternalIngestionState:(unsigned long long)arg1;
- (void)setIssuerVerificationPass:(id)arg1;
- (void)setProgressNotificationToken:(id)arg1;
- (void)setProvisioningProgressRequestContext:(id)arg1;
- (void)setReaderModeProvisioningSupported:(bool)arg1;
- (void)setReaderModeRequestContext:(id)arg1;
- (void)setSeparateLocalDeviceEntryRequired:(bool)arg1;
- (void)setTermsAcceptedOutOfBand:(bool)arg1;
- (void)setTermsReason:(unsigned long long)arg1;
- (void)setUnitTestingAuthorizationController:(id)arg1;
- (void)setUnitTestingCardIngester:(id)arg1;
- (void)setWebService:(id)arg1;
- (long long)setupContext;
- (void)skipIssuerVerification:(id)arg1;
- (void)skipProvisioning:(id)arg1;
- (void)startInAppProvisioningFlowWithConfiguration:(id)arg1 requestContext:(id)arg2;
- (void)startIssuerVerificationFlowForPaymentPass:(id)arg1 requestContext:(id)arg2;
- (void)startProvisioningFlow:(id)arg1;
- (bool)termsAcceptedOutOfBand;
- (unsigned long long)termsReason;
- (id)unitTestingAuthorizationController;
- (id)unitTestingCardIngester;
- (id)webService;

@end