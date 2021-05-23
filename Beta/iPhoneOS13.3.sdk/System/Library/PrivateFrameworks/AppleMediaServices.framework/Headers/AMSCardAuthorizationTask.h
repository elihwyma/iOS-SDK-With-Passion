/*
 Image: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
 */

#import <AppleMediaServices/AMSTask.h>

@class AMSBinaryPromise, AMSMetricsEvent, NSDictionary, NSMutableArray, NSString, PKPayment;

@interface AMSCardAuthorizationTask : AMSTask

{
    _Bool _didBiometricsLockout;
    _Bool _didCancelHomeButton;
    long long _confirmationStyle;
    NSString *_countryCode;
    NSString *_currencyCode;
    AMSMetricsEvent *_metricsEvent;
    NSString *_passSerialNumber;
    NSString *_passTypeIdentifier;
    NSDictionary *_paymentSession;
    AMSBinaryPromise *_authorizationPromise;
    PKPayment *_payment;
    NSMutableArray *_userActions;
}

@property (retain, nonatomic) AMSBinaryPromise *authorizationPromise;
@property (retain, nonatomic) PKPayment *payment;
@property (nonatomic) _Bool didBiometricsLockout;
@property (nonatomic) _Bool didCancelHomeButton;
@property (retain, nonatomic) NSMutableArray *userActions;
@property (nonatomic) long long confirmationStyle;
@property (retain, nonatomic) NSString *countryCode;
@property (retain, nonatomic) NSString *currencyCode;
@property (copy, nonatomic) AMSMetricsEvent *metricsEvent;
@property (retain, nonatomic) NSString *passSerialNumber;
@property (retain, nonatomic) NSString *passTypeIdentifier;
@property (nonatomic, readonly) NSDictionary *paymentSession;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)paymentAuthorizationControllerDidFinish:(id)arg1;
- (void)paymentAuthorizationController:(id)arg1 didAuthorizePayment:(id)arg2 handler:(CDUnknownBlockType)arg3;
- (void)paymentAuthorizationController:(id)arg1 didEncounterAuthorizationEvent:(unsigned long long)arg2;
- (void)paymentAuthorizationController:(id)arg1 willFinishWithError:(id)arg2;
- (id)_presentPaymentRequest:(id)arg1;
- (void)_metricsPost;
- (id)_metricsTimestamp;
- (id)_metricsUserActionDictionary;
- (id)initWithPaymentSession:(id)arg1;
- (id)performCardAuthorization;

@end
