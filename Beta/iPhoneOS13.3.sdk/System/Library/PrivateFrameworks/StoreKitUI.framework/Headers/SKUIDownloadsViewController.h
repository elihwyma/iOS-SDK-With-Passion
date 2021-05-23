/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <StoreKitUI/SKUIViewController.h>

@class NSArray, NSCache, NSMutableDictionary, NSString, SKUIIPadDownloadsViewController, SKUIIPhoneDownloadsViewController, SKUIImageDataConsumer, SSDownloadManager, UIImage;

@interface SKUIDownloadsViewController : SKUIViewController

{
    SKUIImageDataConsumer *_consumer;
    SSDownloadManager *_downloadManager;
    NSMutableDictionary *_imageOperations;
    NSCache *_images;
    SKUIIPhoneDownloadsViewController *_iphoneViewController;
    SKUIIPadDownloadsViewController *_ipadViewController;
    UIImage *_nullImage;
    NSArray *_downloads;
}

@property (copy) NSArray *downloads;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (long long)_sizeClassForSize:(struct CGSize)arg1;

- (void)dealloc;
- (void)downloadManager:(id)arg1 downloadStatesDidChange:(id)arg2;
- (void)downloadManagerDownloadsDidChange:(id)arg1;
- (void)loadView;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)viewDidLayoutSubviews;
- (id)childViewController:(id)arg1 artworkForDownload:(id)arg2;
- (void)childViewController:(id)arg1 performActionForDownload:(id)arg2;
- (void)childViewController:(id)arg1 removeDownloads:(id)arg2;
- (void)_reloadView;
- (void)_reloadManagerFromServer;
- (void)_reloadBadge;
- (void)_reloadViewControllerWithSize:(struct CGSize)arg1;
- (void)_setArtwork:(id)arg1 forURLString:(id)arg2;

@end
