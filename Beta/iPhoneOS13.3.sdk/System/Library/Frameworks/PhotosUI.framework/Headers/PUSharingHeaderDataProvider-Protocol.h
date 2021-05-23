/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <PhotosUI/Swift-Protocol.h>

@class NSOrderedSet, NSString;

@protocol PXDisplayAsset;

@protocol PUSharingHeaderDataProvider <Swift>

@property (nonatomic, readonly) NSString *localizedTitle;
@property (nonatomic, readonly) NSString *localizedSubtitle;
@property (nonatomic, readonly) unsigned long long sourceOrigin;
@property (copy, nonatomic, readonly) id <PXDisplayAsset> keyAsset;
@property (copy, nonatomic, readonly) NSOrderedSet *orderedSelectedAssets;
@property (nonatomic, readonly) struct PXAssetMediaTypeCount assetTypeCount;
@property (nonatomic, readonly) _Bool isActionSheet;
@property (nonatomic, readonly) _Bool shareAsCMM;
@property (nonatomic, readonly) _Bool excludeLiveness;
@property (nonatomic, readonly) _Bool excludeLocation;
@property (nonatomic, readonly) _Bool sendAsOriginals;

@end
