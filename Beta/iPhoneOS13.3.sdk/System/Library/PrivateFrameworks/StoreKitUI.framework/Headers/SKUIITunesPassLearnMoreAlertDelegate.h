/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <Foundation/NSObject.h>

@class NSString, SKUIClientContext, SKUIRedeemConfiguration, UIViewController;

__attribute__((visibility("hidden")))
@interface SKUIITunesPassLearnMoreAlertDelegate : NSObject

{
    SKUIClientContext *_clientContext;
    UIViewController *_presentingViewController;
    SKUIRedeemConfiguration *_redeemConfiguration;
}

@property (weak, nonatomic) UIViewController *presentingViewController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)shouldShowAlertForRedeem:(id)arg1 configuration:(id)arg2;
+ (void)beginThrottleInterval;

- (void)alertView:(id)arg1 didDismissWithButtonIndex:(long long)arg2;
- (void)show;
- (id)initWithRedeemConfiguration:(id)arg1 clientContext:(id)arg2;

@end
