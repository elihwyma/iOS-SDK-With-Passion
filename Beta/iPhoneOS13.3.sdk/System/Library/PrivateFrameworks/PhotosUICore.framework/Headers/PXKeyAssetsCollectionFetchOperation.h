/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <PhotosUICore/PXCollectionFetchOperation.h>

@class NSDictionary;

@interface PXKeyAssetsCollectionFetchOperation : PXCollectionFetchOperation

{
    long long _maxKeyAssets;
    NSDictionary *_outputOtherFetchResultsByAssetCollection;
}

@property (retain, nonatomic) NSDictionary *outputOtherFetchResultsByAssetCollection;
@property (nonatomic) long long maxKeyAssets;

- (void)main;

@end
