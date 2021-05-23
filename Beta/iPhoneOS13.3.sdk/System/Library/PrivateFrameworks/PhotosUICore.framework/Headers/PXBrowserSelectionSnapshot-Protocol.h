/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <PhotosUICore/Swift-Protocol.h>

@class NSArray;

@protocol PXBrowserSelectionSnapshot <Swift>

@property (nonatomic, readonly) long long estimatedAssetCount;
@property (nonatomic, readonly) long long assetCount;
@property (nonatomic, readonly) long long mediaType;
@property (nonatomic, readonly) long long estimatedModelObjectsCount;
@property (nonatomic, readonly) NSArray *modelObjects;

- (unsigned short)displayAssetAtIndex: /* Error: Ran out of types for this method. */;
- (unsigned short)assetReferenceAtIndex: /* Error: Ran out of types for this method. */;
- (unsigned short)indexOfAssetReference: /* Error: Ran out of types for this method. */;

@end
