/*
 Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <CoreData/NSPersistentStoreRequest.h>

@class NSArray, NSEntityDescription, NSString;

@interface NSBatchInsertRequest : NSPersistentStoreRequest

{
    id _entity;
    NSArray *_objectsToInsert;
    CDUnknownBlockType _insertDictionaryHandler;
    CDUnknownBlockType _insertManagedObjectHandler;
    struct _insertRequestFlags {
        unsigned int resultType:2;
        unsigned int entityIsName:1;
        unsigned int secureOperation:1;
        unsigned int _RESERVED:28;
    } _flags;
}

@property (copy) CDUnknownBlockType insertDictionaryHandler;
@property (copy) CDUnknownBlockType insertManagedObjectHandler;
@property (copy, readonly) NSString *entityName;
@property (readonly) NSEntityDescription *entity;
@property (copy) NSArray *objectsToInsert;
@property unsigned long long resultType;

+ (id)decodeFromXPCArchive:(id)arg1 withContext:(id)arg2;
+ (id)stringForResultType:(unsigned long long)arg1;
+ (id)batchInsertRequestWithEntityName:(id)arg1 objects:(id)arg2;
+ (id)shortStringForResultType:(unsigned long long)arg1;
+ (id)batchInsertRequestWithEntityName:(id)arg1 dictionaryHandler:(CDUnknownBlockType)arg2;
+ (id)batchInsertRequestWithEntityName:(id)arg1 managedObjectHandler:(CDUnknownBlockType)arg2;

- (id)init;
- (void)dealloc;
- (id)description;
- (unsigned long long)requestType;
- (id)encodeForXPC;
- (id)initWithEntityName:(id)arg1 objects:(id)arg2;
- (void)_resolveEntityWithSQLCore:(id)arg1;
- (id)initWithEntity:(id)arg1 objects:(id)arg2;
- (id)initWithEntityName:(id)arg1 dictionaryHandler:(CDUnknownBlockType)arg2;
- (id)initWithEntityName:(id)arg1 managedObjectHandler:(CDUnknownBlockType)arg2;
- (id)initWithEntity:(id)arg1 dictionaryHandler:(CDUnknownBlockType)arg2;
- (id)initWithEntity:(id)arg1 managedObjectHandler:(CDUnknownBlockType)arg2;

@end
