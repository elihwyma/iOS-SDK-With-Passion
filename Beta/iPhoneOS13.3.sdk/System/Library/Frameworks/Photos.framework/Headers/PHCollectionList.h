/*
 Image: /System/Library/Frameworks/Photos.framework/Photos
 */

#import <Photos/PHCollection.h>

@class NSArray, NSDate, NSManagedObjectID, NSString, PHQuery;

@interface PHCollectionList : PHCollection

{
    long long _collectionListType;
    long long _collectionListSubtype;
    NSString *_localizedTitle;
    NSDate *_startDate;
    NSDate *_endDate;
    NSArray *_localizedLocationNames;
    NSArray *_collections;
    PHQuery *_query;
    NSString *_transientIdentifier;
    NSManagedObjectID *_parentFolderObjectID;
    int _plAlbumKind;
    CDUnknownBlockType _childCollectionsSortingComparator;
    unsigned long long _unreadAssetCollectionsCount;
    unsigned long long _estimatedChildCollectionCount;
}

@property (nonatomic, readonly) NSArray *collections;
@property (nonatomic, readonly) PHQuery *query;
@property (copy, nonatomic, readonly) CDUnknownBlockType childCollectionsSortingComparator;
@property (nonatomic, readonly) unsigned long long unreadAssetCollectionsCount;
@property (nonatomic, readonly) unsigned long long estimatedChildCollectionCount;
@property (nonatomic, readonly) _Bool keyCollectionsAtEnd;
@property (nonatomic, readonly) NSString *transientIdentifier;
@property (nonatomic, readonly) long long collectionListType;
@property (nonatomic, readonly) long long collectionListSubtype;
@property (nonatomic, readonly) NSDate *startDate;
@property (nonatomic, readonly) NSDate *endDate;
@property (nonatomic, readonly) NSArray *localizedLocationNames;

+ (id)managedEntityName;
+ (id)fetchType;
+ (id)propertiesToFetchWithHint:(unsigned long long)arg1;
+ (id)identifierCode;
+ (_Bool)managedObjectSupportsTrashedState;
+ (id)entityKeyMap;
+ (id)fetchPredicateFromComparisonPredicate:(id)arg1 options:(id)arg2;
+ (id)fetchCollectionListsContainingCollection:(id)arg1 options:(id)arg2;
+ (id)fetchCollectionListsWithLocalIdentifiers:(id)arg1 options:(id)arg2;
+ (id)fetchCollectionListsWithCloudIdentifiers:(id)arg1 options:(id)arg2;
+ (id)fetchCollectionListsWithType:(long long)arg1 localIdentifiers:(id)arg2 options:(id)arg3;
+ (id)fetchCollectionListsWithType:(long long)arg1 subtype:(long long)arg2 options:(id)arg3;
+ (id)fetchRootAlbumCollectionListWithOptions:(id)arg1;
+ (id)fetchRootProjectCollectionListWithOptions:(id)arg1;
+ (id)fetchMomentListsWithSubtype:(long long)arg1 containingMoment:(id)arg2 options:(id)arg3;
+ (id)fetchMomentListsWithSubtype:(long long)arg1 options:(id)arg2;
+ (id)transientCollectionListWithCollections:(id)arg1 title:(id)arg2 identifier:(id)arg3 photoLibrary:(id)arg4;
+ (id)transientCollectionListWithCollections:(id)arg1 title:(id)arg2;
+ (id)transientCollectionListWithCollectionsFetchResult:(id)arg1 title:(id)arg2;
+ (id)transientCollectionListWithCollections:(id)arg1 title:(id)arg2 identifier:(id)arg3;
+ (id)transientCollectionListWithCollectionsFetchResult:(id)arg1 title:(id)arg2 identifier:(id)arg3;
+ (id)transientCollectionListWithAssetCollections:(id)arg1 title:(id)arg2;
+ (id)transientCollectionListWithAssetCollectionsFetchResult:(id)arg1 title:(id)arg2;
+ (id)transientCollectionListWithAssetCollections:(id)arg1 title:(id)arg2 identifier:(id)arg3;
+ (id)transientCollectionListWithAssetCollectionsFetchResult:(id)arg1 title:(id)arg2 identifier:(id)arg3;
+ (id)fetchCollectionListsForReferences:(id)arg1 photoLibrary:(id)arg2;

- (id)description;
- (id)localizedTitle;
- (_Bool)hasLocationInfo;
- (_Bool)canPerformEditOperation:(long long)arg1;
- (_Bool)collectionHasFixedOrder;
- (id)initWithFetchDictionary:(id)arg1 propertyHint:(unsigned long long)arg2 photoLibrary:(id)arg3;
- (Class)changeRequestClass;
- (unsigned long long)collectionFixedOrderPriority;
- (id)parentFolderID;
- (id)effectiveCustomSortKey;
- (_Bool)canContainCollections;
- (id)initTransientWithCollections:(id)arg1 orQuery:(id)arg2 title:(id)arg3 identifier:(id)arg4 photoLibrary:(id)arg5;
- (id)pl_assetContainerList;
- (id)objectReference;

@end
