/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <PhotosUI/PUPhotosAlbumViewController.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface PUCurationImportSourceAssetBrowserDebugViewController : PUPhotosAlbumViewController

{
    NSString *_importSourceName;
}

@property (copy, nonatomic) NSString *importSourceName;

- (void)viewDidLoad;

@end
