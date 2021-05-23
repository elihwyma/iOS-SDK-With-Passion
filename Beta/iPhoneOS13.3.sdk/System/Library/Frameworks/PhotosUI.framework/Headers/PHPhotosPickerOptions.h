/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <Foundation/NSObject.h>

@class NSArray, NSDictionary, PHAsset, PHAssetCollection;

@interface PHPhotosPickerOptions : NSObject

{
    _Bool _hideTabBar;
    NSDictionary *_initialAssetsToSelect;
    PHAsset *_keyAsset;
    PHAssetCollection *_keyAssetCollection;
    NSArray *_excludedContentModes;
}

@property (copy, nonatomic) NSDictionary *initialAssetsToSelect;
@property (retain, nonatomic) PHAsset *keyAsset;
@property (retain, nonatomic) PHAssetCollection *keyAssetCollection;
@property (copy, nonatomic) NSArray *excludedContentModes;
@property (nonatomic) _Bool hideTabBar;

@end
