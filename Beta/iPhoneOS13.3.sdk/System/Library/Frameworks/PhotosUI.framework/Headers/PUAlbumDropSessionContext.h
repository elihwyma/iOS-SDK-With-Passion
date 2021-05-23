/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <Foundation/NSObject.h>

@class PHAssetCollection, UIViewController;

@interface PUAlbumDropSessionContext : NSObject

{
    UIViewController *_viewController;
    PHAssetCollection *_assetCollection;
    unsigned long long _numberOfAssets;
}

@property (nonatomic, readonly) UIViewController *viewController;
@property (nonatomic, readonly) PHAssetCollection *assetCollection;
@property (nonatomic, readonly) unsigned long long numberOfAssets;

+ (id)contextWithViewController:(id)arg1 assetCollection:(id)arg2 numberOfAssets:(unsigned long long)arg3;

@end
