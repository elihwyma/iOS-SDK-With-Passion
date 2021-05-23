/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <Foundation/NSObject.h>

@class NSArray, NSString, PHManualFetchResult;

__attribute__((visibility("hidden")))
@interface PUAssetHidingHelper : NSObject

{
    _Bool _areAllAssetsHidden;
    _Bool _didCheckAllAssetHidden;
    _Bool _canToogleAssetsVisibility;
    _Bool _didCheckCanToogleAssetsVisibility;
    PHManualFetchResult *__assetsFetchResults;
}

@property (retain, nonatomic, setter=_setAssetsFetchResult:) PHManualFetchResult *_assetsFetchResults;
@property (copy, nonatomic) NSArray *assets;
@property (nonatomic, readonly) _Bool isHiding;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (id)prepareForPhotoLibraryChange:(id)arg1;
- (void)photoLibraryDidChangeOnMainQueue:(id)arg1;
- (_Bool)_areAllAssetsHidden;
- (void)_prepareAssetsVisibilityValueIfNeeded;
- (_Bool)canToggleAssetsVisibility;
- (id)menuItemTitleForTogglingAssetsVisibility;
- (void)applyHiddenState:(_Bool)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)alertControllerForTogglingAssetsVisibilityWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)attemptTogglingAssetsVisibilityFromViewController:(id)arg1 sourceView:(id)arg2 sourceRect:(struct CGRect)arg3 completionHandler:(CDUnknownBlockType)arg4;

@end
