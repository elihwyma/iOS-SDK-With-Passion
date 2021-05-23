/*
 Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

#import <NSObject.h>

@class PKPaymentWebService;

@protocol OS_dispatch_queue, PKCloudStoreCoordinatorDelegate, PKSecureElementConsistencyCheckerDelegate;

@interface PKSecureElementConsistencyChecker : NSObject

{
    NSObject<OS_dispatch_queue> *_processingQueue;
    id <PKCloudStoreCoordinatorDelegate> _cloudStoreCoordinatorDelegate;
    id <PKSecureElementConsistencyCheckerDelegate> _delegate;
    PKPaymentWebService *_paymentWebService;
}

@property (nonatomic) id <PKSecureElementConsistencyCheckerDelegate> delegate;
@property (retain, nonatomic) PKPaymentWebService *paymentWebService;

+ (_Bool)isCheckingConsistencyForSecureElementID:(id)arg1;

- (void)startWithCompletion:(CDUnknownBlockType)arg1;
- (void)queue_startWithCompletion:(CDUnknownBlockType)arg1;
- (_Bool)_downloadPasses;
- (void)_rescheduleWithBackoff;
- (void)queue_checkConsistencyWithPaymentApplications:(id)arg1 secureElementApplets:(id)arg2 registeredRegions:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (id)initWithPaymentWebService:(id)arg1 delegate:(id)arg2 cloudStoreCoordinatorDelegate:(id)arg3;
- (void)checkConsistencyWithPaymentApplications:(id)arg1 secureElementApplets:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)initWithPaymentWebService:(id)arg1 delegate:(id)arg2;

@end
