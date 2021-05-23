/*
 Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

#import <Foundation/NSObject.h>

@class FCArticleController, FCAssetManager, FCContentContextInternal, FCContextConfiguration, FCFlintResourceManager, FCNetworkBehaviorMonitor, FCTagController, NSString, NSURL;

@protocol FCAssetKeyCacheType, FCAssetKeyManagerType, FCAssetKeyServiceType, FCBackgroundTaskable, FCCoreConfigurationManager, FCNetworkReachabilityRequirement, FCNewsAppConfigurationManager, FCPPTContext, FCWebArchiveSource;

@interface FCContentContext : NSObject

{
    id <FCCoreConfigurationManager> _configurationManager;
    FCArticleController *_articleController;
    FCAssetManager *_assetManager;
    FCFlintResourceManager *_flintResourceManager;
    FCTagController *_tagController;
    FCNetworkBehaviorMonitor *_networkBehaviorMonitor;
    id <FCPPTContext> _pptContext;
    id <FCBackgroundTaskable> _backgroundTaskable;
    id <FCWebArchiveSource> _webArchiveSource;
    long long _preferredMediaQuality;
    FCContextConfiguration *_contextConfiguration;
    NSString *_contentDirectory;
    NSURL *_assetCacheDirectoryURL;
    NSURL *_webArchiveCacheDirectoryURL;
    FCContentContextInternal *_internalContentContext;
    id <FCAssetKeyServiceType> _assetKeyService;
    id <FCAssetKeyCacheType> _assetKeyCache;
    id <FCAssetKeyManagerType> _assetKeyManager;
    id <FCNetworkReachabilityRequirement> _supportedCountryNetworkReachabilityRequirement;
}

@property (copy, nonatomic) FCContextConfiguration *contextConfiguration;
@property (copy, nonatomic) NSString *contentDirectory;
@property (retain, nonatomic) NSURL *assetCacheDirectoryURL;
@property (retain, nonatomic) NSURL *webArchiveCacheDirectoryURL;
@property (retain, nonatomic) FCContentContextInternal *internalContentContext;
@property (retain, nonatomic) id <FCAssetKeyServiceType> assetKeyService;
@property (retain, nonatomic) id <FCAssetKeyCacheType> assetKeyCache;
@property (retain, nonatomic) id <FCAssetKeyManagerType> assetKeyManager;
@property (retain, nonatomic) id <FCNetworkReachabilityRequirement> supportedCountryNetworkReachabilityRequirement;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, nonatomic, readonly) NSString *contentStoreFrontID;
@property (copy, nonatomic, readonly) NSString *supportedContentStoreFrontID;
@property (nonatomic, readonly) id <FCCoreConfigurationManager> configurationManager;
@property (nonatomic, readonly) id <FCNewsAppConfigurationManager> appConfigurationManager;
@property (nonatomic, readonly) FCAssetManager *assetManager;
@property (nonatomic, readonly) FCArticleController *articleController;
@property (nonatomic, readonly) FCTagController *tagController;
@property (nonatomic, readonly) FCFlintResourceManager *flintResourceManager;
@property (nonatomic, readonly) FCNetworkBehaviorMonitor *networkBehaviorMonitor;
@property (retain, nonatomic) id <FCWebArchiveSource> webArchiveSource;
@property (weak, nonatomic, readonly) id <FCBackgroundTaskable> backgroundTaskable;
@property (nonatomic, readonly) long long preferredMediaQuality;
@property (nonatomic, readonly) id <FCPPTContext> pptContext;
@property (copy, nonatomic, readonly) NSString *contentEnvironmentToken;

+ (void)initialize;

- (void)dealloc;
- (void)configurationManager:(id)arg1 configurationDidChange:(id)arg2;
- (void)enableFlushingWithFlushingThreshold:(unsigned long long)arg1;
- (id)initWithConfiguration:(id)arg1 configurationManager:(id)arg2 contentHostDirectory:(id)arg3 networkBehaviorMonitor:(id)arg4 desiredHeadlineFieldOptions:(unsigned long long)arg5 feedUsage:(long long)arg6 assetKeyManagerDelegate:(id)arg7 appActivityMonitor:(id)arg8 backgroundTaskable:(id)arg9 preferredMediaQuality:(long long)arg10 pptContext:(id)arg11;
- (id)initWithConfiguration:(id)arg1 configurationManager:(id)arg2 contentDatabase:(id)arg3 contentHostDirectory:(id)arg4 networkBehaviorMonitor:(id)arg5 setupCustomURLProtocols:(_Bool)arg6 desiredHeadlineFieldOptions:(unsigned long long)arg7 feedUsage:(long long)arg8 assetKeyManagerDelegate:(id)arg9 appActivityMonitor:(id)arg10 backgroundTaskable:(id)arg11 preferredMediaQuality:(long long)arg12 pptContext:(id)arg13;
- (void)ppt_overrideFeedEndpoint:(long long)arg1;
- (id)news_core_ConfigurationManager;
- (id)magazinesConfigurationManager;
- (id)recordSourceWithSchema:(id)arg1;
- (id)recordTreeSourceWithRecordSources:(id)arg1;
- (void)networkReachabilityRequirementDidBecomeDirty:(id)arg1;
- (void)_updateReachabilityGivenRequirements;
- (id)webArchiveSourceAllowingNil;

@end
