/*
 Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

#import <NSObject.h>

@class NSMutableDictionary, PKPaymentWebService;

@interface PKPassUpgradeControllerBase : NSObject

{
    CDUnknownBlockType _addPaymentPassToLibrary;
    struct os_unfair_lock_s _pass_upgrade_lock;
    NSMutableDictionary *_pendingPassUpgrades;
    PKPaymentWebService *_paymentWebService;
}

@property (retain, nonatomic) PKPaymentWebService *paymentWebService;

- (void)requestPassUpgrade:(id)arg1 pass:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)initWithWebService:(id)arg1 addPaymentPassToLibrary:(CDUnknownBlockType)arg2;
- (void)appletsDidUpdate;
- (void)downloadUpgradedPassForPassUniqueID:(id)arg1 atURL:(id)arg2;
- (void)completePassUpgradeForPassUniqueID:(id)arg1 withError:(id)arg2;

@end
