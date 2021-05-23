/*
 Image: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
 */

#import <NanoPassKit/NPKPeerPaymentAccountManager.h>

@class NSObject, PKPeerPaymentAccount;

@protocol OS_dispatch_queue;

@interface NPKMockPeerPaymentAccountManager : NPKPeerPaymentAccountManager

{
    PKPeerPaymentAccount *_mockAccount;
    NSObject<OS_dispatch_queue> *_accountQueue;
    unsigned long long _balanceOffset;
}

+ (id)sharedInstance;

- (void)dealloc;
- (id)account;
- (id)initWithPeerPaymentService:(id)arg1;
- (void)_updateMockBalance;

@end
