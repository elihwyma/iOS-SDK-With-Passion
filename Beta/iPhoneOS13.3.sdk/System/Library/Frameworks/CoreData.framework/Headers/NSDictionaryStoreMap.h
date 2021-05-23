/*
 Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <CoreData/NSPersistentStoreMap.h>

@class NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface NSDictionaryStoreMap : NSPersistentStoreMap

{
    NSMutableDictionary *_theMap;
}

+ (void)initialize;

- (void)dealloc;
- (id)dataForKey:(id)arg1;
- (id)initWithStore:(id)arg1;
- (id)initWithStore:(id)arg1 fromPath:(id)arg2;
- (void)saveToPath:(id)arg1;
- (id)_nodeFromObject:(id)arg1 objectIDMap:(id)arg2;
- (void)removeObject:(id)arg1 objectIDMap:(id)arg2;
- (void)addObject:(id)arg1 objectIDMap:(id)arg2;
- (id)initWithStore:(id)arg1 fromArchivedData:(id)arg2;
- (id)_theDictionary;
- (void)updateObject:(id)arg1 objectIDMap:(id)arg2;
- (id)retainedObjectIDsForRelationship:(id)arg1 forObjectID:(id)arg2;
- (id)handleFetchRequest:(id)arg1;
- (id)_archivedData;

@end
