/*
 Image: /System/Library/Frameworks/Photos.framework/Photos
 */

@class NSArray, NSOrderedSet, NSString, PHFetchOptions;

@interface PHUnauthorizedFetchResult

{
    CDUnknownBlockType _fetchBlock;
    PHFetchOptions *_options;
    NSArray *_objects;
    NSOrderedSet *_objectIDs;
    NSString *_identifier;
}

@property (copy, readonly) CDUnknownBlockType fetchBlock;
@property (copy, readonly) PHFetchOptions *options;
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
- (id)objectIDAtIndex:(unsigned long long)arg1;
- (void)updateRegistrationForChangeNotificationDeltas;
- (unsigned long long)possibleChangesForChange:(id)arg1;
- (id)fetchResultWithChangeHandlingValue:(id)arg1;
- (void)getMediaTypeCounts;
- (_Bool)isFullyBackedByObjectIDs;
- (id)initWithOptions:(id)arg1 fetchBlock:(CDUnknownBlockType)arg2;

@end
