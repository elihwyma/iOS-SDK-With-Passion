/*
 Image: /System/Library/PrivateFrameworks/TouchRemote.framework/TouchRemote
 */

#import <TouchRemote/TROperation.h>

@class ACAccount, NSSet, UIViewController;

@interface TRProxyAuthOperation : TROperation

{
    ACAccount *_account;
    NSSet *_targetedServices;
    UIViewController *_presentingViewController;
}

@property (retain, nonatomic) ACAccount *account;
@property (retain, nonatomic) NSSet *targetedServices;
@property (retain, nonatomic) UIViewController *presentingViewController;

- (void)execute;
- (void)_sendProxyDeviceRequest;
- (void)_handleProxyDeviceResponse:(id)arg1;
- (void)_performProxyAuthenticationWithProxiedDevice:(id)arg1;
- (void)_handleProxyAuthenticationResponse:(id)arg1;

@end
