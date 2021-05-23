/*
 Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <Foundation/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface _PFPersistentHistoryModel : NSObject

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)ancillaryModelNamespace;
+ (unsigned long long)ancillaryEntityOffset;
+ (unsigned long long)ancillaryEntityCount;
+ (id)_tombstonesForEntity:(id)arg1;
+ (void)resetCaches;
+ (_Bool)_hasTombstonesInUserInfo:(id)arg1;
+ (id)newPersistentHistoryManagedObjectModelForSQLModel:(id)arg1 options:(id)arg2;
+ (id)newPersistentHistorySQLModelForSQLModel:(id)arg1 options:(id)arg2;
+ (unsigned long long)_maxCountOfTombstonesInModel:(id)arg1;
+ (id)_tombstonesColumnsForEntity:(id)arg1;
+ (id)_entitiesWithTooManyTombstonesInModel:(id)arg1;
+ (void)createModelsWithTombstoneCount:(int)arg1 andOptions:(id)arg2;

@end
