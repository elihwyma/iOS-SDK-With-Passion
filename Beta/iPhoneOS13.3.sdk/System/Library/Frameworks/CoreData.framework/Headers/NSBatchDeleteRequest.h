/*
 Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <CoreData/NSPersistentStoreRequest.h>

@class NSFetchRequest;

@interface NSBatchDeleteRequest : NSPersistentStoreRequest

{
    unsigned long long _resultType;
    NSFetchRequest *_deleteTarget;
    long long _flags;
}

@property unsigned long long resultType;
@property (copy, readonly) NSFetchRequest *fetchRequest;

+ (id)decodeFromXPCArchive:(id)arg1 withContext:(id)arg2;

- (void)dealloc;
- (id)description;
- (id)initWithFetchRequest:(id)arg1;
- (unsigned long long)requestType;
- (id)encodeForXPC;
- (_Bool)_secureOperation;
- (void)_setSecureOperation:(_Bool)arg1;
- (void)_resolveEntityWithContext:(id)arg1;
- (void)setShouldPerformSecureOperation:(_Bool)arg1;
- (_Bool)shouldPerformSecureOperation;
- (id)initWithObjectIDs:(id)arg1;

@end
