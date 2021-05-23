/*
 Image: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

#import <MusicLibrary/ML3Entity.h>

@class ML3Predicate, NSArray, NSString;

@interface ML3Container : ML3Entity

@property (readonly) ML3Predicate *smartCriteriaPredicate;
@property (readonly, getter=isLimitedByCount) _Bool limitedByCount;
@property (readonly, getter=isLimitOrderingDescending) _Bool limitOrderingDescending;
@property (copy, readonly) NSString *limitingProperty;
@property (copy, readonly) NSArray *limitOrderingTerms;
@property (readonly) long long limitValue;
@property (copy, readonly) NSArray *cloudDisplayOrderingTerms;
@property (copy, readonly) NSArray *displayOrderingTerms;

+ (void)initialize;
+ (_Bool)deleteFromLibrary:(id)arg1 deletionType:(int)arg2 persistentIDs:(const long long *)arg3 count:(unsigned long long)arg4;
+ (long long)revisionTrackingCode;
+ (id)defaultOrderingTerms;
+ (id)databaseTable;
+ (id)foreignDatabaseTableForProperty:(id)arg1;
+ (id)persistentIDColumnForTable:(id)arg1;
+ (id)joinClausesForProperty:(id)arg1;
+ (id)foreignColumnForProperty:(id)arg1;
+ (_Bool)libraryContentsChangeForProperty:(id)arg1;
+ (_Bool)libraryDynamicChangeForProperty:(id)arg1;
+ (id)extraTablesToDelete;
+ (id)defaultFilterPredicates;
+ (id)sectionPropertyForProperty:(id)arg1;
+ (void)populateSortOrdersOfPropertyValues:(id)arg1 inLibrary:(id)arg2 cachedNameOrders:(id)arg3;
+ (unsigned int)trackOrderFromProtocolSortType:(int)arg1;
+ (void)populateMediaTypesOfStaticContainersInLibrary:(id)arg1;
+ (_Bool)hasCriterionInCriteriaList:(struct SearchCriteriaList *)arg1 forITDBTrackField:(int)arg2;
+ (id)nextFilepathForPlaylistType:(int)arg1 withPersistentID:(unsigned long long)arg2 inLibrary:(id)arg3;
+ (id)predicateForCriteriaList:(struct SearchCriteriaList *)arg1 parentMatchedAny:(_Bool)arg2;
+ (void)_updateContainedMediaTypeInContainerWithPersistentID:(long long)arg1 connection:(id)arg2 itemUpdateBlock:(CDUnknownBlockType)arg3;
+ (void)reloadContainedMediaTypesForContainerWithPersistID:(long long)arg1 usingConnection:(id)arg2;
+ (id)_mediaTypesForTracksWithPersistentIDs:(id)arg1 usingConnection:(id)arg2;
+ (id)_allStaticItemContainersInLibrary:(id)arg1 usingConnection:(id)arg2;
+ (void)removeNonLibraryItemsFromContainer:(id)arg1 usingConnection:(id)arg2;
+ (void)_clearContainerMediaTypeInContainerWithPersistentID:(long long)arg1 connection:(id)arg2;
+ (id)_mediaTypesForTracksInContainerWithPersistentID:(long long)arg1 connection:(id)arg2;
+ (void)_addMediaTypesToContainerWithPersistentID:(long long)arg1 mediaTypes:(id)arg2 connection:(id)arg3;
+ (void)_removeMediaTypesFromContainerWithPersistentID:(long long)arg1 mediaTypes:(id)arg2 connection:(id)arg3;
+ (_Bool)smartCriteriaCanBeEvaluated:(id)arg1;
+ (_Bool)updateBuiltInSmartPlaylistNamesForCurrentLanguage:(id)arg1;
+ (id)autoCreatedBuiltInSmartPlaylistsPIDs:(id)arg1;
+ (void)deleteAutoCreatedBuiltInSmartPlaylistsPIDs:(id)arg1 inLibrary:(id)arg2;
+ (void)removeAnyNonLibraryItemsInPersistentIDs:(id)arg1 fromContainersInLibrary:(id)arg2 usingConnection:(id)arg3;
+ (void)removeNonLibraryItemsFromContainersInLibrary:(id)arg1 usingConnection:(id)arg2;
+ (void)_insertNewSmartPlaylist:(id)arg1 criteriaBlob:(id)arg2 evaluationOrder:(unsigned int)arg3 limited:(_Bool)arg4 trackOrder:(unsigned int)arg5 distinguishedKind:(int)arg6 inLibrary:(id)arg7 cachedNameOrders:(id)arg8;
+ (int)protocolSortTypeFromTrackOrder:(unsigned int)arg1;

- (void)setValues:(id)arg1 forProperties:(id)arg2 async:(_Bool)arg3 withCompletionBlock:(CDUnknownBlockType)arg4;
- (id)multiverseIdentifier;
- (_Bool)moveTrackFromIndex:(unsigned long long)arg1 toIndex:(unsigned long long)arg2;
- (_Bool)setTracksWithPersistentIDs:(id)arg1 notify:(_Bool)arg2;
- (_Bool)removeFirstTrack;
- (_Bool)removeAllTracks;
- (_Bool)removeTracksAtIndexes:(id)arg1 notify:(_Bool)arg2;
- (_Bool)appendTracksWithPersistentIDs:(id)arg1 notify:(_Bool)arg2;
- (id)initWithDictionary:(id)arg1 inLibrary:(id)arg2 cachedNameOrders:(id)arg3 usingConnection:(id)arg4;
- (void)_setContainerSeedItemPersistentIDValue:(id)arg1;
- (struct SearchCriteriaList *)importedCriteriaList;
- (_Bool)isEvaluationOrderingDescending;
- (id)evaluationOrderingTerms;
- (_Bool)_setItemPersistentIDs:(id)arg1 reloadContainedMediaTypes:(_Bool)arg2 removedMediaTypes:(id)arg3 addedMediaTypes:(id)arg4 notify:(_Bool)arg5 incrementEntityRevision:(_Bool)arg6 usingConnection:(id)arg7;
- (_Bool)_supportsOrderedTrackOperations;
- (long long)_maxPositionForTracksUsingConnection:(id)arg1;
- (_Bool)_reloadContainedMediaTypes:(_Bool)arg1 removedMediaTypes:(id)arg2 addedMediaTypes:(id)arg3 notify:(_Bool)arg4 incrementEntityRevision:(_Bool)arg5 usingConnection:(id)arg6;
- (_Bool)_removeTracksAtIndexes:(id)arg1 notify:(_Bool)arg2 usingConnection:(id)arg3;
- (id)trackPersistentIds;
- (id)childPlaylistPersistentIds;
- (_Bool)isBuiltInSmartPlaylist;
- (id)protocolItem;
- (id)_criteriaListDescription:(struct SearchCriteriaList *)arg1 level:(long long)arg2;
- (id)_stringForCriterionMatchKey:(CDStruct_ca99c6a1)arg1;
- (id)_stringForCriterionMatchType:(CDStruct_ca99c6a1)arg1;
- (id)_stringForCriterionBuffer:(CDStruct_ca99c6a1)arg1;
- (id)_addUnitesForCriterionInfo:(CDStruct_ca99c6a1)arg1;
- (id)_booleanStringForCriteriaInfo:(CDStruct_ca99c6a1)arg1;
- (id)_stringForTrackFieldMediaKind:(long long)arg1;
- (id)_stringForTrackFieldCloudStatus:(long long)arg1;
- (id)_convertNumericValueFromCriterionMatchKey:(unsigned int)arg1 criteriaValue:(long long)arg2;
- (id)_formatTime:(long long)arg1;
- (id)_stringStringForCriteriaInfo:(CDStruct_ca99c6a1)arg1;
- (id)_numericStringForCriteriaInfo:(CDStruct_ca99c6a1)arg1;
- (id)_nonzeroStringForCriteriaInfo:(CDStruct_ca99c6a1)arg1;
- (id)_dateStringForCriteriaInfo:(CDStruct_ca99c6a1)arg1;
- (id)criteriaListDescription;

@end
