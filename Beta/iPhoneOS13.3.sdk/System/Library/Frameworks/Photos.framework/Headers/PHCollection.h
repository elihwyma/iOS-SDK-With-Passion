/*
 Image: /System/Library/Frameworks/Photos.framework/Photos
 */

#import <Photos/PHObject.h>

@class NSArray, NSDate, NSManagedObjectID, NSSortDescriptor, NSString;

@interface PHCollection : PHObject

{
    _Bool _customSortAscending;
    unsigned int _customSortKey;
    unsigned long long _estimatedPhotosCount;
    unsigned long long _estimatedVideosCount;
    NSDate *_creationDate;
    NSString *_localizedSubtitle;
}

@property (nonatomic, readonly) NSManagedObjectID *parentFolderID;
@property (copy, nonatomic, readonly) NSString *effectiveCustomSortKey;
@property (copy, nonatomic, readonly) NSSortDescriptor *defaultSortDescriptor;
@property (nonatomic, readonly) _Bool isAlbumContentSort;
@property (nonatomic, readonly) _Bool isAlbumContentTitleSort;
@property (nonatomic, readonly) _Bool isUserSmartAlbum;
@property (nonatomic, readonly) unsigned long long estimatedPhotosCount;
@property (nonatomic, readonly) unsigned long long estimatedVideosCount;
@property (nonatomic, readonly) _Bool hasLocalizedTitle;
@property (nonatomic, readonly) _Bool hasLocationInfo;
@property (nonatomic, readonly) NSDate *creationDate;
@property (nonatomic, readonly) NSString *localizedSubtitle;
@property (nonatomic, readonly, getter=isTrashed) _Bool trashed;
@property (nonatomic, readonly) _Bool customSortAscending;
@property (nonatomic, readonly) unsigned int customSortKey;
@property (copy, nonatomic, readonly) NSArray *effectiveCustomSortDescriptors;
@property (nonatomic, readonly) _Bool canContainAssets;
@property (nonatomic, readonly) _Bool canContainCollections;
@property (nonatomic, readonly) NSString *localizedTitle;

+ (id)managedEntityName;
+ (id)fetchType;
+ (_Bool)managedObjectSupportsTrashedState;
+ (id)entityKeyMap;
+ (id)transformValueExpression:(id)arg1 forKeyPath:(id)arg2;
+ (id)fetchCollectionsInCollectionList:(id)arg1 options:(id)arg2;
+ (id)fetchTopLevelUserCollectionsWithOptions:(id)arg1;
+ (id)fetchMomentsForAssetsWithLocalIdentifiers:(id)arg1 options:(id)arg2;
+ (id)fetchMomentsForFacesWithLocalIdentifiers:(id)arg1 options:(id)arg2;
+ (id)fetchMomentsForPersonsWithLocalIdentifiers:(id)arg1 options:(id)arg2;

- (id)description;
- (_Bool)canPerformEditOperation:(long long)arg1;
- (_Bool)collectionHasFixedOrder;
- (id)initWithFetchDictionary:(id)arg1 propertyHint:(unsigned long long)arg2 photoLibrary:(id)arg3;
- (unsigned long long)collectionFixedOrderPriority;
- (id)objectReference;
- (unsigned long long)ancestryIndexOfCollectionList:(id)arg1 context:(id)arg2;
- (id)_effectiveSortDescriptorsFromCustomSortKey:(id)arg1;

@end
