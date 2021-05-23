/*
 Image: /System/Library/PrivateFrameworks/NewsUI.framework/NewsUI
 */

#import <Foundation/NSObject.h>

#import <NewsUI/Swift-Protocol.h>

@class NSString, NUAdInterstitial, NUAdStore;

@protocol NUAdManagerConfigurationProvider, NUDevice;

@interface NUAdManager : NSObject <Swift>

{
    NUAdStore *_adStore;
    id <NUAdManagerConfigurationProvider> _configurationProvider;
    id <NUDevice> _device;
    NUAdInterstitial *_interstitialAdPendingLoad;
}

@property (nonatomic, readonly) NUAdStore *adStore;
@property (nonatomic, readonly) id <NUAdManagerConfigurationProvider> configurationProvider;
@property (nonatomic, readonly) id <NUDevice> device;
@property (retain, nonatomic) NUAdInterstitial *interstitialAdPendingLoad;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)adContextValueForKeyPath:(id)arg1;
- (id)initWithConfigurationProvider:(id)arg1 device:(id)arg2;
- (void)bannerViewForIdentifier:(id)arg1 contextProviders:(id)arg2 layoutOptions:(id)arg3 withCompletionBlock:(CDUnknownBlockType)arg4;
- (void)interstitialViewForContextProviders:(id)arg1 layoutOptions:(id)arg2 withCompletionBlock:(CDUnknownBlockType)arg3;
- (void)interstitialViewForContextProviders:(id)arg1 contextProvidersWithKeys:(id)arg2 layoutOptions:(id)arg3 withCompletionBlock:(CDUnknownBlockType)arg4;
- (void)prerollForContextProviders:(id)arg1 withCompletionBlock:(CDUnknownBlockType)arg2;
- (void)videoPlaylistAdForContextProviders:(id)arg1 withCompletionBlock:(CDUnknownBlockType)arg2;
- (void)bannerViewDidLoad:(id)arg1;
- (void)bannerViewDidUnload:(id)arg1;
- (id)adWithIdentifier:(id)arg1;
- (id)inArticleContextConstructor;
- (void)adForIdentifier:(id)arg1 contextProviders:(id)arg2 constructor:(id)arg3 layoutOptions:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (id)interstitialContextConstructor;
- (id)contextForContextProviders:(id)arg1 keyedContextProviders:(id)arg2 constructor:(id)arg3;
- (id)prerollContextConstructor;
- (void)videoAdForContextProviders:(id)arg1 constructor:(id)arg2 withCompletionBlock:(CDUnknownBlockType)arg3;
- (id)videoPlaylistAdContextConstructor;
- (id)defaultRootDefinition;
- (id)defaultHeaderDefinition;
- (id)defaultBodyDefinition;
- (id)defaultArticleDefinition;
- (id)defaultIssueDefinition;
- (id)defaultFeedMetadataDefinition;
- (id)prerollRootDefinition;
- (id)prerollHeaderDefinition;
- (id)prerollBodyDefinition;
- (id)videoPlaylistAdRootDefinition;
- (id)videoInTodayHeaderDefinition;
- (id)videoPlaylistAdBodyDefinition;

@end
