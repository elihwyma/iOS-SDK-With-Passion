/*
 Image: /System/Library/PrivateFrameworks/NewsUI.framework/NewsUI
 */

#import <NewsUI/Swift-Protocol.h>

@class FCArticleController, FCAssetManager, FCFlintResourceManager, FCNetworkBehaviorMonitor, FCTagController, NSString, NSURL;

@protocol FCBackgroundTaskable, FCContentContextInternal, FCCoreConfigurationManager, FCNewsAppConfigurationManager, FCPPTContext, FCWebArchiveSource;

@protocol FCContentContext <Swift>

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
@property (copy, nonatomic, readonly) NSString *contentDirectory;
@property (nonatomic, readonly) NSURL *assetCacheDirectoryURL;
@property (nonatomic, readonly) NSURL *webArchiveCacheDirectoryURL;
@property (nonatomic, readonly) id <FCContentContextInternal> internalContentContext;
@property (weak, nonatomic, readonly) id <FCBackgroundTaskable> backgroundTaskable;
@property (nonatomic, readonly) long long preferredMediaQuality;
@property (nonatomic, readonly) id <FCPPTContext> pptContext;
@property (copy, nonatomic, readonly) NSString *contentEnvironmentToken;

- (unsigned short)ppt_overrideFeedEndpoint: /* Error: Ran out of types for this method. */;
- (unsigned short)news_core_ConfigurationManager;
- (unsigned short)magazinesConfigurationManager;
- (unsigned short)recordSourceWithSchema: /* Error: Ran out of types for this method. */;
- (unsigned short)recordTreeSourceWithRecordSources: /* Error: Ran out of types for this method. */;

@end
