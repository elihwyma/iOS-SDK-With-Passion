/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <StoreKitUI/SKUIRedeemStepViewController.h>

@class SKUIRedeem;

__attribute__((visibility("hidden")))
@interface SKUIRedeemResultsViewController : SKUIRedeemStepViewController

{
    SKUIRedeem *_redeem;
    long long _redeemCategory;
}

@property (retain, nonatomic) SKUIRedeem *redeem;
@property (nonatomic) long long redeemCategory;

+ (_Bool)canShowResultsForRedeem:(id)arg1;
+ (id)redeemResultsControllerForRedeem:(id)arg1;

- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)viewDidLoad;
- (id)initWithRedeem:(id)arg1;
- (void)_doneAction:(id)arg1;

@end
