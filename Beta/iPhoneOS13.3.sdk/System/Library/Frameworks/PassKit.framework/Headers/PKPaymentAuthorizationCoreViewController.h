/*
 Image: /System/Library/Frameworks/PassKit.framework/PassKit
 */

#import <UIKit/UIViewController.h>

#import <PassKit/Swift-Protocol.h>

@class NSString, PKPaymentAuthorizationDataModel, PKPaymentAuthorizationLayout, PKPaymentAuthorizationStateMachine;

@protocol PKPaymentAuthorizationHostProtocol;

@interface PKPaymentAuthorizationCoreViewController : UIViewController <Swift>

{
    long long _paymentAuthorizationStyle;
    PKPaymentAuthorizationLayout *_paymentAuthorizationLayout;
    PKPaymentAuthorizationStateMachine *_stateMachine;
    PKPaymentAuthorizationDataModel *_dataModel;
    id <PKPaymentAuthorizationHostProtocol> _delegate;
}

@property (nonatomic, readonly) long long paymentAuthorizationStyle;
@property (nonatomic, readonly) PKPaymentAuthorizationLayout *paymentAuthorizationLayout;
@property (nonatomic, readonly) PKPaymentAuthorizationStateMachine *stateMachine;
@property (nonatomic, readonly) PKPaymentAuthorizationDataModel *dataModel;
@property (weak, nonatomic) id <PKPaymentAuthorizationHostProtocol> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

@end
