/*
 Image: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
 */

#import <CoreData/NSManagedObject.h>

@interface NSManagedObject (IC)

+ (id)ic_objectsMatchingPredicate:(id)arg1 context:(id)arg2;
+ (id)ic_objectFromObjectID:(id)arg1 context:(id)arg2;
+ (id)ic_objectsFromObjectIDs:(id)arg1 relationshipKeyPathsForPrefetching:(id)arg2 context:(id)arg3;
+ (id)ic_objectIDsFromObjects:(id)arg1;
+ (id)ic_objectsMatchingPredicate:(id)arg1 sortDescriptors:(id)arg2 relationshipKeyPathsForPrefetching:(id)arg3 context:(id)arg4;
+ (id)ic_resultsMatchingPredicate:(id)arg1 sortDescriptors:(id)arg2 resultType:(unsigned long long)arg3 relationshipKeyPathsForPrefetching:(id)arg4 context:(id)arg5;
+ (id)ic_objectsMatchingPredicate:(id)arg1 sortDescriptors:(id)arg2 context:(id)arg3;
+ (id)ic_objectIDsMatchingPredicate:(id)arg1 sortDescriptors:(id)arg2 context:(id)arg3;
+ (_Bool)ic_containsFaultingManagedObjects:(id)arg1;
+ (id)ic_objectsFromObjectIDs:(id)arg1 context:(id)arg2;
+ (id)ic_permanentObjectIDsFromObjects:(id)arg1;
+ (id)ic_objectIDsMatchingPredicate:(id)arg1 context:(id)arg2;

- (void)ic_postNotificationOnMainThreadWithName:(id)arg1;
- (_Bool)ic_obtainPermanentObjectIDIfNecessary;
- (id)ic_permanentObjectID;
- (id)ic_postNotificationOnMainThreadAfterSaveWithName:(id)arg1;

@end
