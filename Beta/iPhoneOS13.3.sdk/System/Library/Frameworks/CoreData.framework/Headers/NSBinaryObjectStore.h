/*
 Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <CoreData/NSMappedObjectStore.h>

__attribute__((visibility("hidden")))
@interface NSBinaryObjectStore : NSMappedObjectStore

+ (id)metadataForPersistentStoreWithURL:(id)arg1 error:(id *)arg2;
+ (id)metadataForPersistentStoreWithURL:(id)arg1 options:(id)arg2 error:(id *)arg3;
+ (_Bool)setMetadata:(id)arg1 forPersistentStoreWithURL:(id)arg2 options:(id)arg3 error:(id *)arg4;
+ (_Bool)setMetadata:(id)arg1 forPersistentStoreWithURL:(id)arg2 error:(id *)arg3;
+ (id)_classesForPropertyValues;

- (id)type;
- (id)initWithPersistentStoreCoordinator:(id)arg1 configurationName:(id)arg2 URL:(id)arg3 options:(id)arg4;
- (void)saveDocumentToPath:(id)arg1;

@end
