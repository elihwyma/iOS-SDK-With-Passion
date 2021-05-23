/*
 Image: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary, NSString, NSURL, WBSSiteMetadataImageCache;

@protocol OS_dispatch_queue, WBSSiteMetadataProviderDelegate;

@interface WBSLeadImageCache : NSObject

{
    WBSSiteMetadataImageCache *_imageCache;
    NSObject<OS_dispatch_queue> *_internalQueue;
    NSMutableDictionary *_urlStringToRequestSets;
    id <WBSSiteMetadataProviderDelegate> _providerDelegate;
}

@property (nonatomic, readonly) NSURL *imageDirectoryURL;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (weak, nonatomic) id <WBSSiteMetadataProviderDelegate> providerDelegate;
@property (nonatomic, readonly) _Bool providesFavicons;

- (_Bool)canHandleRequest:(id)arg1;
- (id)imageForURL:(id)arg1;
- (void)stopWatchingUpdatesForRequest:(id)arg1;
- (void)savePendingChangesBeforeTermination;
- (id)responseForRequest:(id)arg1 willProvideUpdates:(_Bool *)arg2;
- (void)prepareResponseForRequest:(id)arg1 allowDelayedResponse:(_Bool)arg2;
- (void)emptyCaches;
- (void)purgeUnneededCacheEntries;
- (id)initWithImageDirectoryURL:(id)arg1;
- (void)_addRequest:(id)arg1;
- (void)saveImage:(id)arg1 forURL:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)siteMetadataImageCache:(id)arg1 didFinishLoadingImage:(id)arg2 forKeyString:(id)arg3;
- (void)siteMetadataImageCacheDidEmptyCache:(id)arg1;

@end
