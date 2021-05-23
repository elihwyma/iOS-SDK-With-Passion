/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <PhotosUI/PUSearchZeroKeywordAssetViewModel.h>

@class PHAssetCollection;

@interface PUSearchZeroKeywordAssetCollectionViewModel : PUSearchZeroKeywordAssetViewModel

{
    PHAssetCollection *_assetCollection;
}

@property (retain, nonatomic) PHAssetCollection *assetCollection;

- (id)debugDictionary;

@end
