/*
 Image: /System/Library/PrivateFrameworks/TextInputCore.framework/TextInputCore
 */

#import <Foundation/NSObject.h>

@class NSArray, NSMutableArray, NSMutableDictionary, NSString, TIMobileAssetTimer, TIRequestedInputModes;

@protocol OS_dispatch_queue, TIInputModePreferenceProvider, TIMobileAssetMediator;

@interface TIAssetManager : NSObject

{
    NSMutableArray *_notificationTokens;
    _Bool _assetDownloadingEnabled;
    CDUnknownBlockType _enabledInputModeIdentifiersProviderBlock;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    id <TIMobileAssetMediator> _mobileAssetMediator;
    NSMutableDictionary *_assetsByInputMode;
    NSMutableDictionary *_assetsByInputModeLevel;
    NSArray *_requestedInputModes_mainThreadCache;
    id <TIInputModePreferenceProvider> _inputModePreferenceProvider;
    TIMobileAssetTimer *_timer;
    NSArray *_currentActiveRegions;
    NSArray *_currentNormalizedActiveRegions;
    TIRequestedInputModes *_requestedInputModes;
}

@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (nonatomic, readonly) id <TIMobileAssetMediator> mobileAssetMediator;
@property (nonatomic, readonly) NSMutableDictionary *assetsByInputMode;
@property (nonatomic, readonly) NSMutableDictionary *assetsByInputModeLevel;
@property (copy, nonatomic) NSArray *requestedInputModes_mainThreadCache;
@property (nonatomic, readonly) id <TIInputModePreferenceProvider> inputModePreferenceProvider;
@property (retain, nonatomic) TIMobileAssetTimer *timer;
@property (nonatomic, readonly) _Bool assetDownloadingEnabled;
@property (retain, nonatomic) NSArray *currentActiveRegions;
@property (retain, nonatomic) NSArray *currentNormalizedActiveRegions;
@property (nonatomic, readonly) double requestExpirationInterval;
@property (nonatomic, readonly) TIRequestedInputModes *requestedInputModes;
@property (copy, nonatomic) CDUnknownBlockType enabledInputModeIdentifiersProviderBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)sharedAssetManager;
+ (id)_addressFromRegion:(id)arg1;
+ (id)sharedAssetManagerWithEnabledInputModesProvider:(CDUnknownBlockType)arg1;
+ (id)singletonInstanceWithEnabledInputModesProvider:(CDUnknownBlockType)arg1;
+ (id)_regionFromAddress:(id)arg1;
+ (void)setSharedAssetManager:(id)arg1;

- (id)init;
- (void)dealloc;
- (id)recursiveDescription;
- (id)activeInputModes;
- (id)enabledInputModes;
- (void)registerForNotifications;
- (void)addAssets:(id)arg1;
- (void)unregisterForNotifications;
- (void)performMaintenance;
- (_Bool)purgeAsset:(id)arg1;
- (id)assetContentItemsWithContentType:(id)arg1 inputMode:(id)arg2;
- (void)requestAssetDownloadForLanguage:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)initWithMobileAssetMediator:(id)arg1 requestedInputModes:(id)arg2 inputModePreferenceProvider:(id)arg3 enabledInputModesProvider:(CDUnknownBlockType)arg4;
- (void)appleKeyboardsInternalSettingsChanged:(id)arg1;
- (void)appleKeyboardsPreferencesChanged:(id)arg1;
- (void)newAssetInstalled:(id)arg1;
- (void)didUpdateAssets;
- (id)levelsForInputMode:(id)arg1;
- (id)defaultEnabledInputModes;
- (id)activeInputModeLevels;
- (id)updatedActiveRegions;
- (void)updateAssetDownloadingEnabled;
- (void)updateInstalledAssets;
- (void)startDownloadingUninstalledAssetsForInputModeLevels:(id)arg1 regions:(id)arg2;
- (void)scheduleNextDownload;
- (void)gatherStatistics:(id)arg1;
- (void)submitStatistics:(id)arg1;
- (void)updateInputModesAndLevels;
- (id)purgeableAssets;
- (void)registerCacheDeleteCallbacks;
- (long long)amountOfPurgeableAssetsWithUrgency:(int)arg1;
- (long long)tryToPurgeAssetAmount:(long long)arg1 urgency:(int)arg2;
- (id)initForTestingWithMobileAssetMediator:(id)arg1 requestedInputModes:(id)arg2 inputModePreferenceProvider:(id)arg3 enabledInputModesProvider:(CDUnknownBlockType)arg4;

@end
