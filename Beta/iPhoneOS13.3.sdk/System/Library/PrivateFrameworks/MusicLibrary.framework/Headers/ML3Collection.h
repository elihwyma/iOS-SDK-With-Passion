/*
 Image: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

#import <MusicLibrary/ML3Entity.h>

@interface ML3Collection : ML3Entity

+ (void)initialize;
+ (id)trackForeignPersistentID;
+ (_Bool)libraryContentsChangeForProperty:(id)arg1;
+ (_Bool)deleteFromLibrary:(id)arg1 deletionType:(int)arg2 persistentIDs:(const long long *)arg3 count:(unsigned long long)arg4 usingConnection:(id)arg5;
+ (_Bool)canonicalizeCollectionRepresentativeItemsInLibrary:(id)arg1 usingConnection:(id)arg2;
+ (id)foreignPropertyForProperty:(id)arg1 entityClass:(Class)arg2;
+ (id)propertiesForGroupingKey;
+ (id)propertiesForGroupingUniqueCollections;
+ (_Bool)removeOrphanedCollectionsInLibrary:(id)arg1 usingConnection:(id)arg2;
+ (id)collectionEntityClasses;
+ (_Bool)_updateRepresentativeItemsForPersistentIDs:(id)arg1 usingConnection:(id)arg2;
+ (id)artworkCacheIDProperty;
+ (_Bool)updateRepresentativeItemPersistentIDsInLibrary:(id)arg1 persistentIDs:(id)arg2 usingConnection:(id)arg3;

- (id)initWithDictionary:(id)arg1 inLibrary:(id)arg2 cachedNameOrders:(id)arg3 usingConnection:(id)arg4;
- (void)updateCloudStatus;
- (void)updateRepresentativeCollectionValues:(id)arg1 existingRepresentativePersistentID:(unsigned long long)arg2 forUpdateTrackValues:(id)arg3;
- (void)updateTrackValues:(id)arg1;

@end
