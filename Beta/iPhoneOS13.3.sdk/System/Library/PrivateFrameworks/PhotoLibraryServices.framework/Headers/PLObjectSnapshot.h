/*
 Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

#import <Foundation/NSObject.h>

@class NSKnownKeysDictionary, PLManagedObject;

@interface PLObjectSnapshot : NSObject

{
    PLManagedObject *_managedObject;
    NSKnownKeysDictionary *_snapshotValues;
    struct __CFDictionary *_indexMaps;
}

@property (nonatomic, readonly) PLManagedObject *managedObject;

+ (id)snapshotForManagedObject:(id)arg1 changeNotificationCenter:(id)arg2 useCommitedValues:(_Bool)arg3;
+ (struct __CFDictionary *)_createIndexMapsSnapshotForManagedObject:(id)arg1 changeNotificationCenter:(id)arg2;

- (id)init;
- (void)dealloc;
- (id)description;
- (id)initWithManagedObject:(id)arg1 properties:(id)arg2 toOneRelationships:(id)arg3 indexMaps:(struct __CFDictionary *)arg4 useCommitedValues:(_Bool)arg5;
- (id)snapshotValueForProperty:(id)arg1;
- (_Bool)hasSnapshotValueForProperty:(id)arg1;
- (id)indexMapStateForDerivedObject:(id)arg1;
- (id)filteredIndexesForFilter:(id)arg1;
- (id)_snapshotValueForProperty:(id)arg1;
- (id)_allSnapshotValuesDescription;
- (void)setAssetsSnapshot:(id)arg1;

@end
