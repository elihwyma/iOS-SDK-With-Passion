/*
 Image: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
 */

#import <Foundation/NSObject.h>

@class PKPeerPaymentAccount, PKPeerPaymentService;

@interface NPKPeerPaymentAccountManager : NSObject

{
    PKPeerPaymentService *_peerPaymentService;
    PKPeerPaymentAccount *_account;
}

@property (retain) PKPeerPaymentAccount *account;
@property (nonatomic, readonly) PKPeerPaymentService *peerPaymentService;

+ (id)sharedInstance;

- (id)init;
- (void)_updateAccount;
- (id)initWithPeerPaymentService:(id)arg1;
- (void)_handleAccountChanged:(id)arg1;

@end
