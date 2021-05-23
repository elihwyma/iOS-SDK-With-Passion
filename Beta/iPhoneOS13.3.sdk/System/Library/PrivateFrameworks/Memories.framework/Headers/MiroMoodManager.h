/*
 Image: /System/Library/PrivateFrameworks/Memories.framework/Memories
 */

#import <Memories/VEiOSSharedObject.h>

@class NSArray, NSDictionary;

__attribute__((visibility("hidden")))
@interface MiroMoodManager : VEiOSSharedObject

{
    NSDictionary *_rawSongList;
    NSArray *_songList;
    NSDictionary *_rawTitlesList;
    NSArray *_titlesList;
    NSDictionary *_rawEditStylesList;
    NSArray *_editStylesList;
    NSDictionary *_rawTransitionDetailsList;
    NSArray *_titleStylesForTitlePicker;
}

@property (retain, nonatomic) NSDictionary *rawSongList;
@property (retain, nonatomic) NSArray *songList;
@property (retain, nonatomic) NSDictionary *rawTitlesList;
@property (retain, nonatomic) NSArray *titlesList;
@property (retain, nonatomic) NSDictionary *rawEditStylesList;
@property (retain, nonatomic) NSArray *editStylesList;
@property (retain, nonatomic) NSDictionary *rawTransitionDetailsList;
@property (retain, nonatomic) NSArray *titleStylesForTitlePicker;

+ (id)blueprintForBlueprint:(id)arg1 replaceSongByiTunesMediaID:(unsigned long long)arg2;
+ (id)blueprintWithNewSongForBlueprint:(id)arg1;
+ (id)blueprintForBlueprint:(id)arg1 replaceSongByID:(id)arg2 shouldLockSong:(_Bool)arg3;
+ (id)titleListForTitlePicker;
+ (id)fontNameFromTitleDictionary:(id)arg1;
+ (id)titleIDsByMoodIDSorted;
+ (id)displayNamesByTitleID;
+ (id)blueprintForBlueprint:(id)arg1 replaceTitleByID:(id)arg2;
+ (id)editStyleIDsByMoodIDSorted;
+ (id)displayNamesByEditStyleID;
+ (id)blueprintForBlueprint:(id)arg1 replaceEditStyleByID:(id)arg2;
+ (id)transitionsByMoodIDSortedForBlueprint:(id)arg1;
+ (id)displayNamesByTransitionForBlueprint:(id)arg1;
+ (id)blueprintForBlueprint:(id)arg1 replaceEditStyleBySingleTransition:(id)arg2;
+ (id)projectFilterIDsByMoodIDSorted;
+ (id)displayNamesByProjectFilterID;
+ (id)blueprintForBlueprint:(id)arg1 replaceProjectFilterByID:(id)arg2;
+ (id)allMoodIDsSorted;
+ (id)displayNameForMoodID:(id)arg1;
+ (_Bool)transitionEndsAtEditPoint:(id)arg1;
+ (id)displayNameForSong:(id)arg1;
+ (id)displayNameForPacingOfSongID:(id)arg1;
+ (id)displayNameForTitle:(id)arg1;
+ (id)displayNameForEditStyle:(id)arg1;
+ (id)displayNameForSingleTransition:(id)arg1;
+ (id)displayNameForFilter:(id)arg1;
+ (id)fontNameFromBlueprint:(id)arg1;
+ (id)blueprintWithMood:(id)arg1 keywords:(id)arg2 musicGenreDistribution:(id)arg3 allowNonLocalSongs:(_Bool)arg4;
+ (id)allMoodIDs;
+ (id)blueprintForBlueprint:(id)arg1 replaceSongWithKeywords:(id)arg2 musicGenreDistribution:(id)arg3 shouldLockSong:(_Bool)arg4;
+ (id)_randomMoodID;
+ (id)_projectFilterForMood:(id)arg1;
+ (id)sharedMoodManager;
+ (id)randomBlueprint;
+ (id)replaceBlueprint:(id)arg1 usingMoodID:(id)arg2;
+ (void)separateAnimationSpecifier:(id *)arg1 fromTitleStyleID:(id *)arg2;
+ (void)incrementAnimationSpecifier:(id *)arg1 forTitleStyleID:(id)arg2 by:(unsigned long long)arg3;
+ (_Bool)titleValid:(id)arg1 forClipLength:(id)arg2;
+ (id)_availableProjectFilterIDsSorted;
+ (id)_moodIDsForProjectFilterID:(id)arg1;
+ (id)_displayNameForSingleTransition:(id)arg1;
+ (id)_projectFilterNameForID:(id)arg1;
+ (id)_fetchStoreItemForMediaID:(unsigned long long)arg1;
+ (id)_fetchMediaItemForMediaID:(unsigned long long)arg1;
+ (id)_storeItemFromBlueprint:(id)arg1;
+ (id)_pacingDescriptionForSongDict:(id)arg1;
+ (_Bool)_effectIsACut:(id)arg1;
+ (_Bool)_effectIsAFade:(id)arg1;
+ (_Bool)_effectIsASlide:(id)arg1 organicOnly:(_Bool)arg2;
+ (id)_projectFiltersForMood:(id)arg1;
+ (unsigned long long)_projectFilterCountForMood:(id)arg1;
+ (id)backstopEditValuesForPacing:(id)arg1;
+ (id)blueprintWithNewTitleStyleForBlueprint:(id)arg1;
+ (id)blueprintForBlueprint:(id)arg1 replaceTitleByID:(id)arg2 shouldLockTitle:(_Bool)arg3;
+ (id)blueprintForBlueprint:(id)arg1 replaceTitleByID:(id)arg2 orChangeAnimation:(_Bool)arg3;
+ (id)blueprintForBlueprint:(id)arg1 titleValidforClipLength:(id)arg2;
+ (id)requestStyleBForBlueprint:(id)arg1;
+ (id)incrementAnimationStyleForBlueprint:(id)arg1 by:(unsigned long long)arg2;
+ (id)multiUpTransitionsForMood:(id)arg1;
+ (void)populateBlueprint:(id)arg1;
+ (id)titleList;
+ (id)displayNameForArtist:(id)arg1;
+ (unsigned long long)allMoodsCount;
+ (_Bool)blueprintTitleSupportsSubtitle:(id)arg1;
+ (_Bool)titleHasPortraitContentOption:(id)arg1;
+ (double)minimumAllowedDurationForTitle:(id)arg1;
+ (_Bool)buildInTitle:(id)arg1 forClipLength:(id)arg2;
+ (_Bool)buildOutTitle:(id)arg1 forClipLength:(id)arg2;
+ (id)_randomPortraitSafeTitleForBlueprint:(id)arg1;
+ (id)blueprintWithPortraitSafeTitleForBlueprint:(id)arg1;
+ (id)blueprintForBlueprint:(id)arg1 replaceTitleSettingsEffectIDOnly:(id)arg2;
+ (id)titlePartnerTransitionsFromTransitionSet:(id)arg1 forTitleID:(id)arg2 forClipLength:(id)arg3;
+ (void)logMoodPermutationTallies;

- (id)init;
- (void)dealloc;
- (void)_ingestMoodPartLists;
- (void)_addObserverForAvalaibleSongChange;
- (void)_removeObserverForAvalaibleSongChange;
- (void)_resetSongList;
- (void)_buildSongList;
- (void)updateTitleListsToIncludeOldContent:(id)arg1 titleSettings:(id)arg2 moodMatchList:(id)arg3 moodCommentList:(id)arg4;
- (void)updateEditStyleListsToIncludeAdditionalStyles:(id)arg1 moodMatchList:(id)arg2 moodCommentList:(id)arg3 transitionSetList:(id)arg4 effectSetList:(id)arg5 multiUpTransitionsStyleList:(id)arg6 burstStyleList:(id)arg7;
- (id)_useSet_VtoV:(_Bool)arg1 PtoP:(_Bool)arg2 PtoV:(_Bool)arg3 VtoP:(_Bool)arg4 MultiUp:(_Bool)arg5 Pano:(_Bool)arg6 intoOneUp:(_Bool)arg7 outOfOneUp:(_Bool)arg8;
- (id)_KenBurnsORFXUseSet_UseKB:(_Bool)arg1 fxSway:(_Bool)arg2 fxFS:(_Bool)arg3 fxDrift:(_Bool)arg4 transDir:(_Bool)arg5 kbType:(id)arg6;
- (unsigned long long)_totalTransitionWeightsForEditStyleDict:(id)arg1;
- (id)_updateTransitionDurationsInTransitionDict:(id)arg1 withPacing:(id)arg2 withUsage:(unsigned long long)arg3;
- (unsigned long long)minDurationForTransition:(id)arg1 withPacing:(id)arg2;
- (unsigned long long)maxDurationForTransition:(id)arg1 withPacing:(id)arg2;
- (unsigned long long)candenceForTransition:(id)arg1;
- (id)useWhereSetForTransition:(id)arg1;
- (id)useKenBurnsSetForTransition:(id)arg1;
- (void)_constructTitleList;
- (void)_constructEditStyleList;
- (void)_constructTransitionDetailList;
- (id)_prunedMoodPartList:(id)arg1 forMood:(id)arg2 defaultsOnly:(_Bool)arg3;
- (id)_prunedTitleList:(id)arg1 forMood:(id)arg2 defaultsOnly:(_Bool)arg3;
- (id)defaultTitleFrom:(id)arg1;
- (id)_prunedList:(id)arg1 usingPaceKeywordsInDict:(id)arg2;
- (id)_updateTransitionDurationsInEditSytleDict:(id)arg1 withPacing:(id)arg2;
- (id)_allMoodIDsForMoodPart:(id)arg1 prioritizingMood:(id)arg2;
- (id)_randomBlueprintForMoodID:(id)arg1 keywords:(id)arg2 musicGenreDistribution:(id)arg3 andSongID:(id)arg4 excludingPartsInMood:(id)arg5 defaultsOnly:(_Bool)arg6;
- (id)_prunedTitleList:(id)arg1 forMood:(id)arg2 andClipLength:(id)arg3;
- (id)_availableTransitionsWithPacing:(id)arg1;
- (id)_availableTitleIDsSorted;
- (id)_availableEditStyleIDsSorted;
- (id)_availableTransitionsSortedWithPacing:(id)arg1;
- (id)_prunedList:(id)arg1 usingEffectInDict:(id)arg2;
- (id)_uniqueStringForMoodID:(id)arg1;
- (id)fontToDefaultStyleMap;
- (id)fontToStandardMoodMap;
- (id)_allSongIDsSorted;
- (void)_dumpPartList:(id)arg1 forMood:(id)arg2;
- (void)_dumpProjectFiltersForMood:(id)arg1;
- (void)_loadMoodPartListsFromFiles;
- (id)_prunedTitlesRemovingDuplicateEffects:(id)arg1;
- (id)_availableSongIDsSorted;

@end
