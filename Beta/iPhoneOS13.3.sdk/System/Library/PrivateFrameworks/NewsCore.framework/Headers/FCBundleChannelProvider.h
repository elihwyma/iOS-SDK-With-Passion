/*
 Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

#import <Foundation/NSObject.h>

@class FCKeyValueStore, FCPurchaseLookupRecordSource, NFUnfairLock, NSArray, NSString;

@protocol FCBundleChannelProviderDelegate, FCCoreConfigurationManager;

@interface FCBundleChannelProvider : NSObject

{
    id <FCBundleChannelProviderDelegate> delegate;
    FCKeyValueStore *_localStore;
    NFUnfairLock *_accessLock;
    id <FCCoreConfigurationManager> _configurationManager;
    FCPurchaseLookupRecordSource *_purchaseLookupRecordSource;
    NSArray *_bundleChannelIDs;
}

@property (retain, nonatomic) FCKeyValueStore *localStore;
@property (retain, nonatomic) NFUnfairLock *accessLock;
@property (nonatomic, readonly) id <FCCoreConfigurationManager> configurationManager;
@property (nonatomic, readonly) FCPurchaseLookupRecordSource *purchaseLookupRecordSource;
@property (copy, nonatomic) NSArray *bundleChannelIDs;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (weak, nonatomic) id <FCBundleChannelProviderDelegate> delegate;

- (void)loadLocalCachesFromStore;
- (void)activityObservingApplicationWindowWillBecomeForeground;
- (id)initWithLocalStore:(id)arg1 appActivityMonitor:(id)arg2 configurationManager:(id)arg3 purchaseLookupRecordSource:(id)arg4;
- (void)loadInitialBundleChannelIDsWithCompletion:(CDUnknownBlockType)arg1;
- (void)refreshBundleChannelIDsWithCompletion:(CDUnknownBlockType)arg1;
- (void)updateBundleChannelIDs:(id)arg1;
- (void)fetchBundleTagIDsForPurchaseID:(id)arg1 completion:(CDUnknownBlockType)arg2;

@end
