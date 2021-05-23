/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <PhotosUI/Swift-Protocol.h>

@class NSArray, PUSessionInfo;

@protocol PUPhotosGridViewSupplementalToolbarDataSource <Swift>

@property (nonatomic, readonly, getter=isAnyAssetSelected) _Bool anyAssetSelected;
@property (nonatomic, readonly) NSArray *selectedAssets;
@property (nonatomic, readonly) PUSessionInfo *sessionInfo;
@property (nonatomic, readonly, getter=isAnyAssetDownloading) _Bool anyAssetDownloading;

@end
