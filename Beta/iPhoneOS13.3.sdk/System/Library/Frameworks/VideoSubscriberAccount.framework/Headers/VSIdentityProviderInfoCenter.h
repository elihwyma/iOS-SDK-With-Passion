/*
 Image: /System/Library/Frameworks/VideoSubscriberAccount.framework/VideoSubscriberAccount
 */

#import <Foundation/NSObject.h>

@class NSOperationQueue, NSString, VSAccountStore, VSIdentityProvider, VSPreferences;

@protocol OS_dispatch_queue;

@interface VSIdentityProviderInfoCenter : NSObject

{
    VSPreferences *_preferences;
    NSObject<OS_dispatch_queue> *_serialQueue;
    NSOperationQueue *_privateQueue;
    VSAccountStore *_accountStore;
    VSIdentityProvider *_cachedIdentityProvider;
    NSString *_cachedDesignatedAppBundleIdentifier;
}

@property (retain, nonatomic) VSPreferences *preferences;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *serialQueue;
@property (retain, nonatomic) NSOperationQueue *privateQueue;
@property (retain, nonatomic) VSAccountStore *accountStore;
@property (retain, nonatomic) VSIdentityProvider *cachedIdentityProvider;
@property (retain, nonatomic) NSString *cachedDesignatedAppBundleIdentifier;

+ (id)sharedCenter;

- (id)init;
- (void)dealloc;
- (void)_accountStoreDidChange;
- (void)enqueueInfoQueryWithCompletion:(CDUnknownBlockType)arg1;
- (void)enqueueSetTopBoxProfileProviderQueryWithCompletion:(CDUnknownBlockType)arg1;
- (void)enqueueIdentityProviderAppsQueryWithCompletion:(CDUnknownBlockType)arg1;
- (void)_updateCachedBundleInfoWithAdamID:(id)arg1;
- (id)_value:(id)arg1 withDefault:(id)arg2;

@end
