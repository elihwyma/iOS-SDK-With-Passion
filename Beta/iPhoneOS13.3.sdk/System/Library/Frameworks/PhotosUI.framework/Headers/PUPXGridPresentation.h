/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <Foundation/NSObject.h>

@class NSString, PUSessionInfo;

__attribute__((visibility("hidden")))
@interface PUPXGridPresentation : NSObject

{
    PUSessionInfo *_sessionInfo;
    long long _userInterfaceIdiom;
}

@property long long userInterfaceIdiom;
@property (nonatomic, readonly, getter=_isRunningInPhotoPicker) _Bool _isRunningInPhotoPicker;
@property (retain, nonatomic) PUSessionInfo *sessionInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (id)createPhotosAlbumViewControllerForAlbum:(id)arg1 withFetchResult:(id)arg2;
- (void)createGridViewControllerWithAssets:(id)arg1 withTitle:(id)arg2 hideTabBar:(_Bool)arg3 gridPresentationContext:(long long)arg4 containerViewController:(id)arg5 navigationItemDelegate:(id)arg6 andCompletion:(CDUnknownBlockType)arg7;
- (id)createPanoramaViewController;
- (id)createImportHistoryGridViewControllerWithCollection:(id)arg1;
- (id)createSharedAlbumListViewControllerWithConfiguration:(id)arg1;
- (id)createAlbumListViewControllerWithConfiguration:(id)arg1;
- (id)createPhotosPickerViewControllerWithSelectedAssets:(id)arg1 anchorAtAsset:(id)arg2 inAssetCollection:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (id)initWithUserInterfaceIdiom:(long long)arg1;
- (_Bool)_isEmpty:(id)arg1;
- (id)_assetCollectionToAssetsMapForAssets:(id)arg1;

@end
