/*
 Image: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
 */

#import <Foundation/NSObject.h>

@class IDSService, NPKPaymentProvisioningFlowController, NPKPaymentProvisioningFlowStepContext, NPKStandaloneProvisioningNumericEntryCoordinator, NSMutableDictionary, NSString;

@protocol OS_dispatch_queue;

@interface NPKStandaloneService : NSObject

{
    int _defaultProtocolVersion;
    IDSService *_provisioningService;
    NSObject<OS_dispatch_queue> *_queue;
    NPKPaymentProvisioningFlowController *_flowController;
    NPKPaymentProvisioningFlowStepContext *_flowStepContext;
    NSMutableDictionary *_flowStepToContext;
    NPKStandaloneProvisioningNumericEntryCoordinator *_numericEntryCoordinator;
}

@property (retain, nonatomic) IDSService *provisioningService;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) NPKPaymentProvisioningFlowController *flowController;
@property (retain, nonatomic) NPKPaymentProvisioningFlowStepContext *flowStepContext;
@property (retain, nonatomic) NSMutableDictionary *flowStepToContext;
@property (nonatomic) int defaultProtocolVersion;
@property (retain, nonatomic) NPKStandaloneProvisioningNumericEntryCoordinator *numericEntryCoordinator;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)service:(id)arg1 account:(id)arg2 incomingUnhandledProtobuf:(id)arg3 fromID:(id)arg4 context:(id)arg5;
- (void)handlePingRequest:(id)arg1 service:(id)arg2 account:(id)arg3 fromID:(id)arg4 context:(id)arg5;
- (void)handleInitializationRequest:(id)arg1 service:(id)arg2 account:(id)arg3 fromID:(id)arg4 context:(id)arg5;
- (void)handlePaymentProvisioningFlowStartProvisioningFlowRequest:(id)arg1 service:(id)arg2 account:(id)arg3 fromID:(id)arg4 context:(id)arg5;
- (void)handlePaymentProvisioningFlowAcknowledgeWelcomeRequest:(id)arg1 service:(id)arg2 account:(id)arg3 fromID:(id)arg4 context:(id)arg5;
- (void)handlePaymentProvisioningFlowChooseFlowRequest:(id)arg1 service:(id)arg2 account:(id)arg3 fromID:(id)arg4 context:(id)arg5;
- (void)handlePaymentProvisioningFlowChooseProductRequest:(id)arg1 service:(id)arg2 account:(id)arg3 fromID:(id)arg4 context:(id)arg5;
- (void)handlePaymentProvisioningFlowChooseCredentialsRequest:(id)arg1 service:(id)arg2 account:(id)arg3 fromID:(id)arg4 context:(id)arg5;
- (void)handlePaymentProvisioningFlowChooseManualEntryRequest:(id)arg1 service:(id)arg2 account:(id)arg3 fromID:(id)arg4 context:(id)arg5;
- (void)handlePaymentProvisioningFlowHandleManualEntryFieldsRequest:(id)arg1 service:(id)arg2 account:(id)arg3 fromID:(id)arg4 context:(id)arg5;
- (void)handlePaymentProvisioningFlowAcceptTermsRequest:(id)arg1 service:(id)arg2 account:(id)arg3 fromID:(id)arg4 context:(id)arg5;
- (void)handlePaymentProvisioningFlowSkipProvisioningRequest:(id)arg1 service:(id)arg2 account:(id)arg3 fromID:(id)arg4 context:(id)arg5;
- (void)handlePaymentProvisioningFlowHandleIssuerVerificationChannelRequest:(id)arg1 service:(id)arg2 account:(id)arg3 fromID:(id)arg4 context:(id)arg5;
- (void)handlePaymentProvisioningFlowHandleIssuerVerificationFieldsRequest:(id)arg1 service:(id)arg2 account:(id)arg3 fromID:(id)arg4 context:(id)arg5;
- (void)handlePaymentProvisioningFlowHandleIssuerVerificationCodeRequest:(id)arg1 service:(id)arg2 account:(id)arg3 fromID:(id)arg4 context:(id)arg5;
- (void)handlePaymentPassListRequest:(id)arg1 service:(id)arg2 account:(id)arg3 fromID:(id)arg4 context:(id)arg5;
- (void)handlePaymentProvisioningFlowStartIssuerVerificationFlowForPaymentPassRequest:(id)arg1 service:(id)arg2 account:(id)arg3 fromID:(id)arg4 context:(id)arg5;
- (void)handlePaymentProvisioningFlowAcknowledgeMoreInformationRequest:(id)arg1 service:(id)arg2 account:(id)arg3 fromID:(id)arg4 context:(id)arg5;
- (void)handlePaymentProvisioningFlowHandleDigitalIssuanceAmountRequest:(id)arg1 service:(id)arg2 account:(id)arg3 fromID:(id)arg4 context:(id)arg5;
- (void)handlePaymentProvisioningFlowChooseReaderModeRequest:(id)arg1 service:(id)arg2 account:(id)arg3 fromID:(id)arg4 context:(id)arg5;
- (void)handlePaymentProvisioningFlowHandleReaderModeFieldsRequest:(id)arg1 service:(id)arg2 account:(id)arg3 fromID:(id)arg4 context:(id)arg5;
- (void)_initFlowControllerWithSimulatedFlowController:(_Bool)arg1 separateLocalDeviceEntryRequired:(_Bool)arg2;
- (void)sendPingResponse:(id)arg1;
- (void)sendInitializationResponse:(id)arg1;
- (void)_didEncounterErrorUnexpectedError:(id)arg1;
- (void)_showCVVEntryUIWithLocalDeviceManualEntryContext:(id)arg1;
- (void)paymentProvisioningFlowController:(id)arg1 didEncounterError:(id)arg2 requestContext:(id)arg3;
- (void)paymentProvisioningFlowController:(id)arg1 didTransitionFromStep:(int)arg2 toStep:(int)arg3 withContext:(id)arg4;

@end
