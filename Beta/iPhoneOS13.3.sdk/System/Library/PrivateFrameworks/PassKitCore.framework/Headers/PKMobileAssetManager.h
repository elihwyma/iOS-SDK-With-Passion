/*
 Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

#import <NSObject.h>

@protocol OS_dispatch_queue;

@interface PKMobileAssetManager : NSObject

{
    NSObject<OS_dispatch_queue> *_queue;
}

+ (id)sharedInstance;

- (id)init;
- (void)fetchAssetsForMarketWithIdentifier:(id)arg1 userInitiated:(_Bool)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)fetchCityStationProviderAssetForBaseProvider:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)_queriesForEducationVideo;
- (id)sortDescriptorsForEducationVideoWithPreferredFeatures:(unsigned long long)arg1;
- (void)_retrieveAssetWithQueries:(id)arg1 latestCompatibilityVersion:(unsigned long long)arg2 userInitiated:(_Bool)arg3 sortDescriptors:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (id)_sortDescriptorWithPreferredFeatureKey:(id)arg1 isFeaturePreferred:(_Bool)arg2 keyPath:(id)arg3;
- (id)_queriesForMarketIdentifer:(id)arg1;
- (id)sortDescriptorsForMarkets;
- (id)_queriesForCityCodeStationProvider:(id)arg1;
- (id)sortDescriptorsForCityCode;
- (id)_compatibleVersionsWithMinimumVersion:(unsigned long long)arg1 maximumVersion:(unsigned long long)arg2;
- (id)_downloadOptionsWithUserInitiation:(_Bool)arg1;
- (void)_executeQueries:(id)arg1 currentIndex:(unsigned long long)arg2 userInitiated:(_Bool)arg3 sortDescriptors:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (void)_downloadAsset:(id)arg1 userInitiated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)fetchNeededAssetsForThisDeviceWithPreferredFeatures:(unsigned long long)arg1;
- (void)fetchEducationVideoWithPreferredFeatures:(unsigned long long)arg1 completionHandler:(CDUnknownBlockType)arg2;

@end
