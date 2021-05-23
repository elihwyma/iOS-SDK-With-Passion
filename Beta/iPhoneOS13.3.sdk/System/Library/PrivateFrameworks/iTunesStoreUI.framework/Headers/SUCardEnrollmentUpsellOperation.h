/*
 Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

#import <iTunesStore/ISOperation.h>

@class NSObject, NSString, UIViewController;

@protocol OS_dispatch_queue, OS_dispatch_semaphore;

@interface SUCardEnrollmentUpsellOperation : ISOperation

{
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    NSString *_referrerIdentifier;
    long long _paymentSetupFeatureState;
    NSObject<OS_dispatch_semaphore> *_semaphore;
    UIViewController *_viewController;
}

@property (nonatomic) long long paymentSetupFeatureState;
@property (retain, nonatomic) NSObject<OS_dispatch_semaphore> *semaphore;
@property (retain, nonatomic) UIViewController *viewController;
@property (nonatomic, readonly) _Bool didSucceed;
@property (copy, nonatomic) NSString *referrerIdentifier;

- (void)run;
- (id)initWithViewController:(id)arg1;
- (void)paymentSetupViewControllerDidDismiss;
- (id)_paymentSetupFeature;

@end
