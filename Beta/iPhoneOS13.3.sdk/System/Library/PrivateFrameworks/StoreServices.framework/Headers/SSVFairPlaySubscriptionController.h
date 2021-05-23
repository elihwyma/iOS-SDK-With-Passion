/*
 Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import <NSObject.h>

@protocol OS_dispatch_queue;

@interface SSVFairPlaySubscriptionController : NSObject

{
    NSObject<OS_dispatch_queue> *_accessQueue;
    _Bool _hasValidSubscriptionStatusDidChangeNotifyToken;
    int _subscriptionStatusDidChangeNotifyToken;
}

- (id)init;
- (void)dealloc;
- (id)subscriptionStatusForAccountUniqueIdentifier:(unsigned long long)arg1;
- (_Bool)stopSubscriptionLease:(id *)arg1;
- (_Bool)importSubscriptionKeyBagData:(id)arg1 leaseInfoData:(id)arg2 returningError:(id *)arg3;
- (id)_subscriptionStatusForFPSubscriptionInfo:(struct FPSubscriptionInfo_)arg1;
- (void)_enumerateSubscriptionInfoUsingBlock:(CDUnknownBlockType)arg1;
- (id)_accountUniqueIdentifierToSubscriptionStatusWithFPSubscriptionInfoList:(struct FPSubscriptionInfo_ *)arg1 subscriptionInfoListLength:(unsigned int)arg2;
- (void)_notifySubscriptionStatusDidChange;
- (void)enumerateAccountSubscriptionStatusUsingBlock:(CDUnknownBlockType)arg1;
- (_Bool)generateSubscriptionBagRequestWithAccountUniqueIdentifier:(unsigned long long)arg1 transactionType:(unsigned int)arg2 machineIDData:(id)arg3 returningSubscriptionBagData:(id *)arg4 error:(id *)arg5;
- (_Bool)generateSubscriptionLeaseRequestWithAccountUniqueID:(unsigned long long)arg1 transactionType:(unsigned int)arg2 certificateData:(id)arg3 assetIDData:(id)arg4 returningLeaseData:(id *)arg5 subscriptionBagData:(id *)arg6 error:(id *)arg7;
- (_Bool)importSubscriptionKeyBagData:(id)arg1 returningError:(id *)arg2;

@end
