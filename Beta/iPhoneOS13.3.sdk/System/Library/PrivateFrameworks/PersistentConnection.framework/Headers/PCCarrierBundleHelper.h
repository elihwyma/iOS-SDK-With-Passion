/*
 Image: /System/Library/PrivateFrameworks/PersistentConnection.framework/PersistentConnection
 */

#import <Foundation/NSObject.h>

@class CTBundle, CTXPCServiceSubscriptionContext, CoreTelephonyClient, NSDictionary, NSHashTable, NSString;

@protocol OS_dispatch_queue;

@interface PCCarrierBundleHelper : NSObject

{
    CoreTelephonyClient *_ctClient;
    NSObject<OS_dispatch_queue> *_queue;
    CTXPCServiceSubscriptionContext *_currentDataContext;
    NSHashTable *_delegates;
    CTBundle *_bundle;
    NSDictionary *_cachedPushSettings;
}

@property (copy, nonatomic) NSDictionary *cachedPushSettings;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)helper;

- (id)init;
- (void)addDelegate:(id)arg1;
- (void)removeDelegate:(id)arg1;
- (void)currentDataSimChanged:(id)arg1;
- (void)operatorBundleChange:(id)arg1;
- (id)copyValueFromPushBundleForKey:(id)arg1 error:(id *)arg2;
- (id)copyValueForKey:(id)arg1 error:(id *)arg2;
- (void)_processCarrierBundleChange:(id)arg1;
- (void)_updateCurrentDataSimContext:(id)arg1;
- (_Bool)boolValueFromPushBundleForKey:(id)arg1 error:(id *)arg2;

@end
