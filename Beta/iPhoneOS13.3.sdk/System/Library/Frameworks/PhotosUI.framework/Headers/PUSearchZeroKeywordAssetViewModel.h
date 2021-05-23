/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <PhotosUI/PUSearchZeroKeywordBaseViewModel.h>

@class PHAsset;

@interface PUSearchZeroKeywordAssetViewModel : PUSearchZeroKeywordBaseViewModel

{
    PHAsset *_asset;
}

@property (retain, nonatomic) PHAsset *asset;

- (id)debugDictionary;

@end
