/*
 Image: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
 */

#import <AppleMediaServices/AMSTask.h>

@class AKAppleIDAuthenticationContext, AMSPaymentSheetAssetCache, AMSPaymentSheetRequest, AMSPromise, NSObject, NSString, _PaymentSheetState;

@protocol AMSBagProtocol, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface AMSPaymentSheetTask : AMSTask

{
    id <AMSBagProtocol> _bag;
    AMSPaymentSheetAssetCache *_assetCache;
    AKAppleIDAuthenticationContext *_authenticationContext;
    AMSPromise *_paymentSheetPromise;
    NSObject<OS_dispatch_queue> *_presentationQueue;
    _PaymentSheetState *_state;
    AMSPaymentSheetRequest *_request;
}

@property (retain, nonatomic) AMSPaymentSheetAssetCache *assetCache;
@property (retain, nonatomic) AKAppleIDAuthenticationContext *authenticationContext;
@property (retain, nonatomic) AMSPromise *paymentSheetPromise;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *presentationQueue;
@property (retain, nonatomic) _PaymentSheetState *state;
@property (retain, nonatomic) AMSPaymentSheetRequest *request;
@property (retain, nonatomic) id <AMSBagProtocol> bag;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)_authenticationContextForRequest:(id)arg1;

- (id)perform;
- (void)paymentAuthorizationControllerDidFinish:(id)arg1;
- (void)paymentAuthorizationController:(id)arg1 didAuthorizePayment:(id)arg2 handler:(CDUnknownBlockType)arg3;
- (void)paymentAuthorizationController:(id)arg1 didEncounterAuthorizationEvent:(unsigned long long)arg2;
- (void)paymentAuthorizationController:(id)arg1 willFinishWithError:(id)arg2;
- (id)initWithRequest:(id)arg1 bag:(id)arg2;
- (id)_paymentRequest;
- (_Bool)_presentPaymentSheetWithPaymentRequest:(id)arg1 error:(id *)arg2;
- (float)_challengeSigningDelay;

@end
