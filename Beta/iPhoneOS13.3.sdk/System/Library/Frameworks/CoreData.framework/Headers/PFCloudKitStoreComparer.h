/*
 Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <Foundation/NSObject.h>

@class PFCloudKitStoreComparisonCache;

__attribute__((visibility("hidden")))
@interface PFCloudKitStoreComparer : NSObject

{
    _Bool _checkCloudKitMetadata;
    PFCloudKitStoreComparisonCache *_cache;
}

@property (nonatomic, readonly) _Bool checkCloudKitMetadata;
@property (nonatomic, readonly) PFCloudKitStoreComparisonCache *cache;

+ (id)trimExcessiveValuesForLog:(id)arg1;

- (id)init;
- (void)dealloc;
- (_Bool)ensureContentsOfStore:(id)arg1 matchContentsOfStore:(id)arg2 error:(id *)arg3;
- (_Bool)ensureStoresAgreeOnCloudKitTables:(id)arg1 error:(id *)arg2;
- (_Bool)compareContentOfStore:(id)arg1 toStore:(id)arg2 error:(id *)arg3;
- (_Bool)compareCloudKitMetadataOfStore:(id)arg1 toStore:(id)arg2 error:(id *)arg3;
- (id)deriveIdentifierForNonCloudObjectID:(id)arg1;
- (_Bool)populateCacheForStore:(id)arg1 inContext:(id)arg2 error:(id *)arg3;
- (id)getObjectMatchingRecordID:(id)arg1 fromStore:(id)arg2 withManagedObjectContext:(id)arg3;
- (_Bool)compareAttributesOnObject:(id)arg1 toObject:(id)arg2 error:(id *)arg3;
- (_Bool)compareRelationshipsOfRecordID:(id)arg1 withStoreObject:(id)arg2 andOtherObject:(id)arg3 error:(id *)arg4;
- (_Bool)validateValue:(id)arg1 againstOtherValue:(id)arg2 forIgnoredAttribute:(id)arg3;
- (_Bool)isValue:(id)arg1 equalToValue:(id)arg2 forAttribute:(id)arg3;
- (id)getRecordIDsForRelationship:(id)arg1 onObject:(id)arg2;

@end
