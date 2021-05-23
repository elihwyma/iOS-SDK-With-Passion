/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <Foundation/NSObject.h>

#import <PhotosUICore/Swift-Protocol.h>

@class NSString, PHAssetCollection, PHFetchResult, PXAssetCollectionActionManager;

@protocol PXDisplayAsset, PXPeopleFetchResult, PXUIImageProvider;

@interface PXCMMPhotoKitSuggestion : NSObject <Swift>

{
    NSString *_title;
    NSString *_subtitle;
    id <PXDisplayAsset> _posterAsset;
    id <PXUIImageProvider> _posterMediaProvider;
    PHAssetCollection *_assetCollection;
    PHFetchResult *_previewAssetsFetchResult;
    PHFetchResult *_peopleSuggestionsFetchResult;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) long long aggregateMediaType;
@property (nonatomic, readonly) PHAssetCollection *assetCollection;
@property (nonatomic, readonly) PHFetchResult *previewAssetsFetchResult;
@property (nonatomic, readonly) PHFetchResult *peopleSuggestionsFetchResult;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) long long aggregateMediaType;
@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) NSString *title;
@property (nonatomic, readonly) NSString *subtitle;
@property (nonatomic, readonly) long long count;
@property (nonatomic, readonly) id <PXDisplayAsset> posterAsset;
@property (nonatomic, readonly) id <PXUIImageProvider> posterMediaProvider;
@property (nonatomic, readonly) id <PXPeopleFetchResult> peopleFetchResult;
@property (nonatomic, readonly) PXAssetCollectionActionManager *assetCollectionActionManager;
@property (nonatomic, readonly) _Bool containsUnverifiedPersons;

+ (id)fastSuggestionWithAssetCollection:(id)arg1;
+ (id)sharedCachingImageManager;
+ (id)suggestionWithAssetCollection:(id)arg1;
+ (id)_fetchPreviewAssetsForAssetCollection:(id)arg1;
+ (id)_fetchPeopleSuggestionsForAssetCollection:(id)arg1;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithAssetCollection:(id)arg1;
- (id)contextForActivityType:(unsigned long long)arg1 sourceType:(unsigned long long)arg2;
- (void)markAsActiveIfNeeded;
- (void)decline;
- (id)diagnosticsItem;
- (id)suggestionWithUpdatedPreviewAssetsFetchResult:(id)arg1;
- (id)suggestionWithUpdatedPeopleSuggestionsFetchResult:(id)arg1;

@end
