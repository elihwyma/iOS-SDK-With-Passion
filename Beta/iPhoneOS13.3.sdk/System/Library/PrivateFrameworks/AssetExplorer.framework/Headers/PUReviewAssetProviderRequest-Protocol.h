/*
 Image: /System/Library/PrivateFrameworks/AssetExplorer.framework/AssetExplorer
 */

#import <AssetExplorer/Swift-Protocol.h>

@protocol PUDisplayAsset;

@protocol PUReviewAssetProviderRequest <Swift>

@property (nonatomic, readonly) id <PUDisplayAsset> sourceAsset;

- (unsigned short)requestReviewAssetWithCompletionHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)cancelReviewAssetRequest;

@end
