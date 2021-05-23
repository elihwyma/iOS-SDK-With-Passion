/*
 Image: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
 */

#import <Foundation/NSObject.h>

@class AMSBiometricsSignatureResult, AMSPaymentSheetMetricsEvent, NSError, NSString;

__attribute__((visibility("hidden")))
@interface _PaymentSheetState : NSObject

{
    _Bool _didAuthorizePayment;
    _Bool _didBiometricLockout;
    _Bool _didPresent;
    NSError *_error;
    AMSPaymentSheetMetricsEvent *_event;
    NSString *_passwordEquivalentToken;
    NSString *_paymentToken;
    AMSBiometricsSignatureResult *_signatureResult;
}

@property (retain, nonatomic) NSError *error;
@property (nonatomic) _Bool didAuthorizePayment;
@property (nonatomic) _Bool didBiometricLockout;
@property (nonatomic) _Bool didPresent;
@property (retain, nonatomic) AMSPaymentSheetMetricsEvent *event;
@property (retain, nonatomic) NSString *passwordEquivalentToken;
@property (retain, nonatomic) NSString *paymentToken;
@property (retain, nonatomic) AMSBiometricsSignatureResult *signatureResult;

- (id)init;

@end
