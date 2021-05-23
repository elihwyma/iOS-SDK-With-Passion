/*
 Image: /System/Library/Frameworks/SafariServices.framework/SafariServices
 */

#import <WebUI/WBSSiteMetadataManager.h>

@class WBSLeadImageCache, _SFFaviconProvider, _SFLinkPresentationIconCache, _SFPasswordTouchIconCache, _SFTouchIconCache;

@interface _SFSiteMetadataManager : WBSSiteMetadataManager

{
    _SFFaviconProvider *_faviconProvider;
    _SFPasswordTouchIconCache *_passwordTouchIconCache;
    _SFTouchIconCache *_touchIconCache;
    WBSLeadImageCache *_leadImageCache;
    _SFLinkPresentationIconCache *_linkPresentationIconCache;
}

@property (nonatomic, readonly) _SFFaviconProvider *faviconProvider;
@property (nonatomic, readonly) _SFPasswordTouchIconCache *passwordTouchIconCache;
@property (nonatomic, readonly) _SFTouchIconCache *touchIconCache;
@property (nonatomic, readonly) WBSLeadImageCache *leadImageCache;
@property (nonatomic, readonly) _SFLinkPresentationIconCache *linkPresentationIconCache;

+ (id)sharedSiteMetadataManager;
+ (void)setSharedSiteMetadataManager:(id)arg1;
+ (void)setSharedSiteMetadataManagerProvider:(id)arg1;

- (id)initWithInjectedBundleURL:(id)arg1 imageCacheDirectoryURL:(id)arg2 cacheIsReadOnly:(_Bool)arg3 metadataType:(unsigned long long)arg4;
- (void)scheduleLowPriorityRequestForBookmarks:(id)arg1;

@end
