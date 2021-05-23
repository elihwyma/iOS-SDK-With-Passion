/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <Foundation/NSObject.h>

@class NSIndexPath, NSString, PHAsset, PHAssetCollection;

__attribute__((visibility("hidden")))
@interface _PUPhotosGridProgressInfo : NSObject

{
    NSString *_identifier;
    PHAsset *_asset;
    PHAssetCollection *_collection;
    NSIndexPath *_cachedIndexPath;
    double _progress;
}

@property (retain, nonatomic) NSString *identifier;
@property (retain, nonatomic) PHAsset *asset;
@property (retain, nonatomic) PHAssetCollection *collection;
@property (retain, nonatomic) NSIndexPath *cachedIndexPath;
@property (nonatomic) double progress;

@end
