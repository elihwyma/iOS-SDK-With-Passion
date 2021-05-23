/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <PhotosUICore/Swift-Protocol.h>

@class NSString, PXAssetCollectionActionManager;

@protocol PXDisplayAsset, PXPeopleFetchResult, PXUIImageProvider;

@protocol PXCMMSuggestion <Swift>

@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) NSString *title;
@property (nonatomic, readonly) NSString *subtitle;
@property (nonatomic, readonly) long long count;
@property (nonatomic, readonly) id <PXDisplayAsset> posterAsset;
@property (nonatomic, readonly) id <PXUIImageProvider> posterMediaProvider;
@property (nonatomic, readonly) id <PXPeopleFetchResult> peopleFetchResult;
@property (nonatomic, readonly) PXAssetCollectionActionManager *assetCollectionActionManager;
@property (nonatomic, readonly) _Bool containsUnverifiedPersons;

- (unsigned short)contextForActivityType:sourceType: /* Error: Ran out of types for this method. */;
- (unsigned short)markAsActiveIfNeeded;
- (unsigned short)decline;
- (unsigned short)diagnosticsItem;

@end
