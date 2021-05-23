/*
 Image: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
 */

#import <Foundation/NSObject.h>

@class AMSBiometricsSignatureResult, NSString;

__attribute__((visibility("hidden")))
@interface AMSPaymentSheetResult : NSObject

{
    NSString *_passwordEquivalentToken;
    NSString *_paymentToken;
    AMSBiometricsSignatureResult *_signatureResult;
}

@property (retain, nonatomic) NSString *passwordEquivalentToken;
@property (retain, nonatomic) NSString *paymentToken;
@property (retain, nonatomic) AMSBiometricsSignatureResult *signatureResult;

@end
