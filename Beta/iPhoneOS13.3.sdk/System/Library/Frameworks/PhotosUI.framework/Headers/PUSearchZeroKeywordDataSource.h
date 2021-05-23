/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <Foundation/NSObject.h>

@class NSArray;

@protocol OS_dispatch_queue, PUSearchZeroKeywordChangeDelegate;

@interface PUSearchZeroKeywordDataSource : NSObject

{
    _Bool _fetchInProgress;
    id <PUSearchZeroKeywordChangeDelegate> _delegate;
    NSObject<OS_dispatch_queue> *_fetchQueue;
    NSArray *_sections;
}

@property (nonatomic) _Bool fetchInProgress;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *fetchQueue;
@property (copy, nonatomic) NSArray *sections;
@property (weak, nonatomic) id <PUSearchZeroKeywordChangeDelegate> delegate;

+ (id)_fetchAssetsWithLocalIdentifiers:(id)arg1;
+ (id)_fetchFinalMergeTargetPersonForPersonLocalIdentifier:(id)arg1;
+ (void)_fetchKeyAssetsForAssetCollectionViewModels:(id)arg1;
+ (void)_fetchAssetsForAssetViewModels:(id)arg1;
+ (id)_personsForLocalIdentifiers:(id)arg1;
+ (id)_zeroKeywordsFromDefaultKeywordStore;
+ (id)_fetchKeyAssetForSceneIdentifier:(int)arg1;
+ (id)_fetchOptionsForPersonFetching;
+ (id)_fetchAssetCollectionsForIdentifiers:(id)arg1;
+ (id)_fetchKeyAssetOfAssetCollection:(id)arg1 withOptions:(id)arg2;
+ (id)_sectionsForZeroKeywords:(id)arg1 personsByLocalIdentifier:(id)arg2;
+ (id)_personsByLocalIdentifiers:(id)arg1 allUniqueLocalIdentifiers:(id)arg2;
+ (id)_uniquePersonLocalIdentifiersForZeroKeywords:(id)arg1;
+ (id)zeroKeywordLog;
+ (id)_socialGroupsByKeywordwithPersonsByLocalIdentifier:(id)arg1 socialGroupZeroKeywords:(id)arg2;
+ (id)_personViewModelForKeywordDictionary:(id)arg1 person:(id)arg2;
+ (id)_socialGroupViewModelForKeywordDictionary:(id)arg1 peopleByKeyword:(id)arg2;
+ (id)_holidayViewModelForKeywordDictionary:(id)arg1;
+ (id)_dateViewModelForKeywordDictionary:(id)arg1;
+ (id)_placeViewModelForKeywordDictionary:(id)arg1;
+ (id)_homeViewModelForKeywordDictionary:(id)arg1;
+ (id)_meaningViewModelForKeywordDictionary:(id)arg1;
+ (id)_seasonViewModelForKeywordDictionary:(id)arg1;
+ (id)_sceneViewModelForKeywordDictionary:(id)arg1;

- (id)init;
- (id)description;
- (id)debugDictionary;
- (unsigned long long)numberOfSections;
- (unsigned long long)numberOfItemsInSection:(unsigned long long)arg1;
- (id)titleForSection:(unsigned long long)arg1;
- (id)tapToRadarAttachments;
- (long long)sectionTypeForSection:(unsigned long long)arg1;
- (void)ppt_prepareZeroKeywordRequest:(CDUnknownBlockType)arg1;
- (id)_zeroKeywordsFromDefaultKeywordStore;
- (long long)sectionForSectionType:(long long)arg1;
- (id)viewModelForIndexPath:(id)arg1;
- (long long)indexForPlaceKey:(id)arg1;
- (void)fetchItems;
- (_Bool)hasZeroKeywords;
- (_Bool)_shouldFetchItems;

@end
