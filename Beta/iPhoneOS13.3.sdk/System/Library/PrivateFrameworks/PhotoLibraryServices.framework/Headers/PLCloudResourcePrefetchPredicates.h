/*
 Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

#import <Foundation/NSObject.h>

@interface PLCloudResourcePrefetchPredicates : NSObject

+ (id)_orderedPrefetchConditionStringsOnAssets;
+ (id)_missingThumbnailConditionString;
+ (id)_predicateForMaxFilesize:(long long)arg1;
+ (id)_predicateForResourceCreatedAfterDate:(id)arg1;
+ (id)_predicateForImageResourcePixelsLessOrEqual:(long long)arg1;
+ (id)_missingLocalOriginalConditionString;
+ (id)_irisConditionString;
+ (id)_excludeMomentShareAssetsString;
+ (id)_assetPredicateForCPLResourceType:(unsigned long long)arg1 additionalAssetConditions:(id)arg2 additionalResourcePredicates:(id)arg3;
+ (id)_masterPredicateForCPLResourceType:(unsigned long long)arg1 additionalAssetConditions:(id)arg2 additionalResourcePredicates:(id)arg3;
+ (id)_prefetchResourceForAsset:(id)arg1 inResourceTypes:(id)arg2;
+ (_Bool)_shouldPrefetchMediums;
+ (id)_resourcesToPrefetchForAsset:(id)arg1;
+ (id)_predicateToPrefetchSuggestions:(id)arg1 photoLibrary:(id)arg2;
+ (id)_predicateForKeyFacePrefetching:(id)arg1;
+ (id)_predicateToPrefetchMemories:(id)arg1 photoLibrary:(id)arg2;
+ (id)_predicateToPrefetchHighlightWithUUIDs:(id)arg1 photoLibrary:(id)arg2;
+ (id)predicatesForThumbnails;
+ (id)predicatesForNonThumbnails:(id)arg1 photoLibrary:(id)arg2 defaultPrefetchMode:(long long)arg3;

@end
