/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <PhotosUICore/Swift-Protocol.h>

@protocol PXDisplayAssetFetchResult, PXDisplayMomentShare, PXSectionedFetchResult;

@protocol PXMutableMomentShareStatus <Swift>

@property (retain, nonatomic) id <PXDisplayMomentShare> momentShare;
@property (retain, nonatomic) id <PXDisplayAssetFetchResult> downloadingAssetsFetchResult;
@property (retain, nonatomic) id <PXDisplayAssetFetchResult> copiedAssetsFetchResult;
@property (retain, nonatomic) id <PXDisplayAssetFetchResult> allAssetsFetchResult;
@property (retain, nonatomic) id <PXSectionedFetchResult> participantsFetchResult;

@end
