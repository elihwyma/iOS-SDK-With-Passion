/*
 Image: /System/Library/Frameworks/SafariServices.framework/SafariServices
 */

#import <Foundation/NSObject.h>

@class NSString, WBSSiteMetadataImageCache;

@protocol WBSSiteMetadataProviderDelegate;

@interface _SFLinkPresentationIconCache : NSObject

{
    WBSSiteMetadataImageCache *_imageCache;
    id <WBSSiteMetadataProviderDelegate> _providerDelegate;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (weak, nonatomic) id <WBSSiteMetadataProviderDelegate> providerDelegate;
@property (nonatomic, readonly) _Bool providesFavicons;

- (void)dealloc;
- (_Bool)canHandleRequest:(id)arg1;
- (void)savePendingChangesBeforeTermination;
- (id)imageForHost:(id)arg1;
- (void)saveImage:(id)arg1 forHost:(id)arg2;
- (void)_historyItemsWereRemoved:(id)arg1;
- (id)responseForRequest:(id)arg1 willProvideUpdates:(_Bool *)arg2;
- (void)prepareResponseForRequest:(id)arg1 allowDelayedResponse:(_Bool)arg2;
- (void)emptyCaches;
- (void)purgeUnneededCacheEntries;
- (id)initWithImageDirectoryURL:(id)arg1;

@end
