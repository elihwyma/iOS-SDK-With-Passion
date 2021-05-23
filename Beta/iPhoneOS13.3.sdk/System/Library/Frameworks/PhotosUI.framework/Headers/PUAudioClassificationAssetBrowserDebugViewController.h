/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <PhotosUI/PUPhotosAlbumViewController.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface PUAudioClassificationAssetBrowserDebugViewController : PUPhotosAlbumViewController

{
    NSString *_audioClassificationName;
}

@property (copy, nonatomic) NSString *audioClassificationName;

- (void)viewDidLoad;
- (void)getTitle:(out id *)arg1 prompt:(out id *)arg2 shouldHideBackButton:(out _Bool *)arg3 leftBarButtonItems:(out id *)arg4 rightBarButtonItems:(out id *)arg5;
- (void)_presentTapToRadar;
- (void)_fileRadarWithIncorrectAssets:(id)arg1;
- (_Bool)_writeDiagnosticsToURL:(id)arg1 incorrectAssets:(id)arg2;
- (id)_cloneAsset:(id)arg1 toDirectory:(id)arg2;

@end
