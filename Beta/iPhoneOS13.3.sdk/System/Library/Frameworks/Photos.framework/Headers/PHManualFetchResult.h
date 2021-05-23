/*
 Image: /System/Library/Frameworks/Photos.framework/Photos
 */

@class NSArray, NSOrderedSet, NSString, PHPhotoLibrary;

@interface PHManualFetchResult

{
    NSOrderedSet *_objectIDs;
    PHPhotoLibrary *_photoLibrary;
    NSArray *_objects;
    NSString *_identifier;
}

@property (readonly) NSArray *objects;
@property (readonly) NSOrderedSet *objectIDs;
@property (readonly) NSString *identifier;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)fetchRequest;
- (id)containerIdentifier;
- (id)fetchedObjects;
- (id)photoLibrary;
- (long long)collectionFetchType;
- (void)prefetchObjectsAtIndexes:(id)arg1;
- (id)copyWithOptions:(id)arg1;
- (id)changeHandlingKey;
- (id)changeHandlingValueUsingSeedOids:(id)arg1 withChange:(id)arg2 usingManagedObjectContext:(id)arg3;
- (id)fetchedObjectIDs;
- (id)fetchedObjectIDsSet;
- (id)objectIDAtIndex:(unsigned long long)arg1;
- (void)updateRegistrationForChangeNotificationDeltas;
- (unsigned long long)possibleChangesForChange:(id)arg1;
- (id)fetchResultWithChangeHandlingValue:(id)arg1;
- (void)getMediaTypeCounts;
- (_Bool)isFullyBackedByObjectIDs;
- (id)initWithObjects:(id)arg1 photoLibrary:(id)arg2 fetchType:(id)arg3 fetchPropertySets:(id)arg4 identifier:(id)arg5 registerIfNeeded:(_Bool)arg6;
- (id)initWithOids:(id)arg1 photoLibrary:(id)arg2 fetchType:(id)arg3 fetchPropertySets:(id)arg4 identifier:(id)arg5 registerIfNeeded:(_Bool)arg6;
- (id)initWithOids:(id)arg1 photoLibrary:(id)arg2 fetchType:(id)arg3 fetchPropertySets:(id)arg4 identifier:(id)arg5 registerIfNeeded:(_Bool)arg6 photosCount:(unsigned long long)arg7 videosCount:(unsigned long long)arg8 audiosCount:(unsigned long long)arg9;
- (id)fetchUpdatedObjects;

@end
