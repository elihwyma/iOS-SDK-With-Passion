/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <Foundation/NSObject.h>

@interface PXPeopleUtilities : NSObject

+ (id)sharedContactStore;
+ (_Bool)showBootstrapIfNeededWithContext:(id)arg1 fromParentVC:(id)arg2 force:(_Bool)arg3 delegate:(id)arg4;
+ (id)bootstrapViewControllerForContext:(id)arg1 delegate:(id)arg2;
+ (_Bool)showBootstrapIfNeededWithContext:(id)arg1 fromParentVC:(id)arg2;
+ (_Bool)showBootstrapIfNeededWithContext:(id)arg1 fromParentVC:(id)arg2 delegate:(id)arg3;
+ (id)alertControllerForRemovingNumberOfPeople:(long long)arg1 completionBlock:(CDUnknownBlockType)arg2;
+ (id)alertControllerForResettingPeopleWithCompletion:(CDUnknownBlockType)arg1;
+ (id)personWithLocalIdentifier:(id)arg1;
+ (id)personWithPersonUri:(id)arg1;
+ (id)peopleWithPersonUris:(id)arg1;
+ (id)changePerson:(id)arg1 toPersonType:(long long)arg2;
+ (_Bool)changePeople:(id)arg1 toPersonType:(long long)arg2 error:(id *)arg3;
+ (id)_peopleHomeFetchResultForPersonType:(long long)arg1;
+ (void)mergePersons:(id)arg1 withPerson:(id)arg2;
+ (id)identifiersForPeople:(id)arg1;
+ (id)assetCollectionListFetchResultForPerson:(id)arg1;
+ (_Bool)isPersonHiddenFromPeopleHome:(id)arg1;
+ (id)facesForPerson:(id)arg1 inAssets:(id)arg2;
+ (CDUnknownBlockType)comparatorForFetchType:(unsigned long long)arg1;
+ (CDUnknownBlockType)_manualOrderComparator;
+ (id)sortDescriptorsForManualSort;
+ (long long)manualOrderForInsertingAtEndOfSectionWithType:(long long)arg1;
+ (_Bool)isFavoritePerson:(id)arg1;
+ (void)peopleFaceTilesForAsset:(id)arg1 options:(id)arg2 completion:(CDUnknownBlockType)arg3;
+ (void)peopleFaceTilesForFaces:(id)arg1 asset:(id)arg2 options:(id)arg3 completion:(CDUnknownBlockType)arg4;
+ (id)generateNewFaceTileFromFaceTile:(id)arg1;
+ (id)personFaceTileByPersonIdForPersons:(id)arg1 options:(id)arg2;
+ (struct CGRect)faceRectForPeopleFaceTile:(id)arg1;
+ (void)_peopleFaceTilesForFaces:(id)arg1 asset:(id)arg2 options:(id)arg3 completion:(CDUnknownBlockType)arg4;
+ (_Bool)shouldShowBootstrapForPerson:(id)arg1;
+ (void)markHandledBootstrapForPerson:(id)arg1;
+ (_Bool)_hasRecentlyHandledBootstrapForPerson:(id)arg1;
+ (id)_daysDictionary;
+ (void)_setDaysDictionary:(id)arg1;
+ (id)titleStringForPeople:(id)arg1;
+ (id)_titleStringForPeople:(id)arg1 singlePersonFallback:(id)arg2 groupFallback:(id)arg3;
+ (id)slideshowTitleStringForPeople:(id)arg1;
+ (id)memoryTitleStringFromPeople:(id)arg1;

@end
