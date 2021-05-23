/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <PhotosUI/PUPhotosAlbumViewController.h>

@class NSDictionary, NSNumber;

__attribute__((visibility("hidden")))
@interface PUSceneDebugGridViewController : PUPhotosAlbumViewController

{
    NSNumber *_sceneIdentifier;
    NSDictionary *_assetsHighestConfidence;
}

@property (retain, nonatomic) NSNumber *sceneIdentifier;
@property (copy, nonatomic) NSDictionary *assetsHighestConfidence;

+ (CDUnknownBlockType)assetResourceLargestToSmallestComparator;

- (double)globalHeaderHeight;
- (void)_fileRadarWithIncorrectAssets:(id)arg1;
- (_Bool)_writeDiagnosticsToURL:(id)arg1 incorrectAssets:(id)arg2;
- (id)_cloneAsset:(id)arg1 toDirectory:(id)arg2;
- (_Bool)allowSlideshowButton;
- (void)getEmptyPlaceholderViewTitle:(id *)arg1 message:(id *)arg2 buttonTitle:(id *)arg3 buttonAction:(CDUnknownBlockType *)arg4;
- (id)_globalHeaderTitle;
- (void)configureGlobalHeaderView:(id)arg1;
- (id)_newEditActionItemsWithWideSpacing:(_Bool)arg1;
- (void)configureDecorationsForCell:(id)arg1 withAsset:(id)arg2 assetCollection:(id)arg3 thumbnailIsPlaceholder:(_Bool)arg4 assetMayHaveChanged:(_Bool)arg5;
- (_Bool)assetShouldBeSurpassedInNormalUI:(id)arg1;
- (_Bool)assetConfidenceIsAboveThreshold:(id)arg1;
- (void)_tappedFileRadarButton:(id)arg1;
- (id)_assetResourcesForAssets:(id)arg1;
- (id)_assetResourceForAsset:(id)arg1;
- (id)_keywordForSceneIdentifier:(id)arg1;
- (double)_thresholdForSceneIdentifer:(id)arg1;
- (_Bool)_isJunkSceneIdentifer:(id)arg1;
- (id)_localFileURLForAssetResource:(id)arg1 error:(id *)arg2;
- (id)assetResourceFromAcceptableAssetResources:(id)arg1;
- (id)preferredAssetResourcesForAnalyzingAsset:(id)arg1;

@end
