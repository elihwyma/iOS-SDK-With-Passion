/*
 Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import <NSObject.h>

@class NSData, NSLock, NSNumber, NSString, NSURL, SSConsolidatedDialog, SSPaymentSheet;

@interface SSBiometricAuthenticationContext : NSObject

{
    NSLock *_lock;
    _Bool _touchIDDelayEnabled;
    _Bool _didAuthenticate;
    _Bool _didBuyParamsChange;
    _Bool _didFallbackToPassword;
    _Bool _isExtendedAction;
    _Bool _isIdentityMapInvalid;
    _Bool _isPayment;
    _Bool _shouldContinueTouchIDSession;
    _Bool _shouldSendFallbackHeader;
    SSPaymentSheet *_paymentSheet;
    NSNumber *_accountIdentifier;
    NSString *_accountName;
    long long _biometricAuthorizationAttempts;
    NSString *_challenge;
    SSConsolidatedDialog *_consolidatedDialog;
    NSString *_dialogId;
    NSString *_fpanID;
    NSString *_passwordEquivalentToken;
    NSData *_paymentTokenData;
    NSURL *_redirectURL;
    NSString *_signature;
    NSString *_userAgent;
    NSString *_xAppleAMDHeader;
    NSString *_xAppleAMDMHeader;
}

@property (copy) NSNumber *accountIdentifier;
@property (copy) NSString *accountName;
@property long long biometricAuthorizationAttempts;
@property (copy) NSString *challenge;
@property _Bool touchIDDelayEnabled;
@property (retain) SSConsolidatedDialog *consolidatedDialog;
@property (copy) NSString *dialogId;
@property _Bool didAuthenticate;
@property _Bool didBuyParamsChange;
@property _Bool didFallbackToPassword;
@property (copy) NSString *fpanID;
@property _Bool isExtendedAction;
@property _Bool isIdentityMapInvalid;
@property _Bool isPayment;
@property (copy) NSString *passwordEquivalentToken;
@property (retain) SSPaymentSheet *paymentSheet;
@property (copy) NSData *paymentTokenData;
@property (copy) NSURL *redirectURL;
@property _Bool shouldContinueTouchIDSession;
@property _Bool shouldSendFallbackHeader;
@property (copy) NSString *signature;
@property (copy) NSString *userAgent;
@property (copy) NSString *xAppleAMDHeader;
@property (copy) NSString *xAppleAMDMHeader;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithXPCEncoding:(id)arg1;
- (id)copyXPCEncoding;

@end
