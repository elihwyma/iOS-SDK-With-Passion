/*
 Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <CoreData/NSPersistentStoreRequest.h>

@class NSDictionary, NSEntityDescription, NSPredicate, NSString;

@interface NSBatchUpdateRequest : NSPersistentStoreRequest

{
    id _entity;
    NSPredicate *_predicate;
    struct _requestFlags {
        unsigned int includesSubentities:1;
        unsigned int resultType:2;
        unsigned int entityIsName:1;
        unsigned int secureOperation:1;
        unsigned int _RESERVED:27;
    } _flags;
    NSDictionary *_columnsToUpdate;
}

@property (nonatomic, getter=_secureOperation, setter=_setSecureOperation:) _Bool shouldPerformSecureOperation;
@property (copy, readonly) NSString *entityName;
@property (readonly) NSEntityDescription *entity;
@property (retain) NSPredicate *predicate;
@property _Bool includesSubentities;
@property unsigned long long resultType;
@property (copy) NSDictionary *propertiesToUpdate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)decodeFromXPCArchive:(id)arg1 withContext:(id)arg2;
+ (id)batchUpdateRequestWithEntityName:(id)arg1;

- (id)init;
- (void)dealloc;
- (id)initWithEntityName:(id)arg1;
- (unsigned long long)requestType;
- (id)encodeForXPC;
- (void)_resolveEntityWithContext:(id)arg1;
- (id)initWithEntity:(id)arg1;
- (void)setShouldPerformSecureOperation:(_Bool)arg1;
- (_Bool)shouldPerformSecureOperation;
- (id)_newValidatedPropertiesToUpdate:(id)arg1 error:(id *)arg2;
- (void)_setValidatedPropertiesToUpdate:(id)arg1;

@end
