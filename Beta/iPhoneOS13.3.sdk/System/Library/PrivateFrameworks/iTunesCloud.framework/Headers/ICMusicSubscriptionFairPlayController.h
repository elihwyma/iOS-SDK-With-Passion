/*
 Image: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
 */

#import <NSObject.h>

@class NSMutableDictionary;

@protocol OS_dispatch_queue;

@interface ICMusicSubscriptionFairPlayController : NSObject

{
    NSObject<OS_dispatch_queue> *_calloutQueue;
    NSObject<OS_dispatch_queue> *_fairPlaySerialQueue;
    NSMutableDictionary *_subscriptionKeyBagStatusCache;
}

+ (id)sharedController;

- (id)_init;
- (void)importSubscriptionKeyBagData:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)generateSubscriptionBagRequestWithAccountUniqueIdentifier:(unsigned long long)arg1 transactionType:(unsigned int)arg2 machineIDData:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)importSubscriptionKeyBagData:(id)arg1 leaseInfoData:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)generateSubscriptionLeaseRequestWithAccountUniqueID:(unsigned long long)arg1 transactionType:(unsigned int)arg2 certificateData:(id)arg3 assetIDData:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)stopSubscriptionLeaseForAccountUniqueIdentifier:(unsigned long long)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)getKeyStatusListWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)_handleSubscriptionFairPlayKeyStatusChangedDistributedNotification:(id)arg1;
- (void)getKeyStatusForAccountUniqueIdentifier:(unsigned long long)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;

@end
