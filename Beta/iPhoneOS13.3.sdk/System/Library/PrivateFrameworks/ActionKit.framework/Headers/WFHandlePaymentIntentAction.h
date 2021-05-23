/*
 Image: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
 */

#import <WorkflowKit/WFHandleSystemIntentAction.h>

@class WFImage;

@interface WFHandlePaymentIntentAction : WFHandleSystemIntentAction

{
    WFImage *_icon;
}

- (id)icon;
- (_Bool)showsWhenRun;
- (_Bool)opensInApp;
- (id)errorFromResolutionResult:(id)arg1 forSlot:(id)arg2 onIntent:(id)arg3;
- (id)errorFromConfirmResponse:(id)arg1 intent:(id)arg2;
- (id)errorFromHandleResponse:(id)arg1 intent:(id)arg2;
- (id)localizedKeyParameterDisplayName;
- (id)localizedPaymentServiceName;
- (id)noRecipientAccountError:(_Bool)arg1;
- (id)credentialsUnverifiedError;
- (id)amountBelowMinimumErrorWithAmount:(id)arg1 sending:(_Bool)arg2;
- (id)amountAboveMaximumErrorWithAmount:(id)arg1 sending:(_Bool)arg2;
- (id)currencyUnsupportedErrorWithAmount:(id)arg1;
- (id)noBankAccountError;
- (id)insufficientFundsError;
- (id)errorFromPaymentsResponse:(id)arg1 intent:(id)arg2;

@end
