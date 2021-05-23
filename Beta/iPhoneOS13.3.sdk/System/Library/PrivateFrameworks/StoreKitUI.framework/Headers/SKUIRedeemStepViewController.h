/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <UIKit/UIViewController.h>

@class NSOperationQueue, SKUIClientContext, SKUIRedeemConfiguration;

@protocol SKUIRedeemStepDelegate;

@interface SKUIRedeemStepViewController : UIViewController

{
    SKUIClientContext *_clientContext;
    NSOperationQueue *_operationQueue;
    SKUIRedeemConfiguration *_configuration;
    id <SKUIRedeemStepDelegate> _redeemStepDelegate;
}

@property (retain, nonatomic) SKUIClientContext *clientContext;
@property (retain, nonatomic) SKUIRedeemConfiguration *configuration;
@property (retain, nonatomic) NSOperationQueue *operationQueue;
@property (nonatomic, readonly) _Bool shouldShowPassbookLearnMore;
@property (weak, nonatomic) id <SKUIRedeemStepDelegate> redeemStepDelegate;

@end
