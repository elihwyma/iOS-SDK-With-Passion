/*
 Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface NSPersistentStoreCache : NSObject

{
    id _externalData;
    unsigned long long _capacity;
    struct {
        long long _field1;
        CDUnknownFunctionPointerType _field2;
        CDUnknownFunctionPointerType _field3;
        CDUnknownFunctionPointerType _field4;
        CDUnknownFunctionPointerType _field5;
    } *_externalDataValueCallbacks;
    struct persistentStoreCacheFlags _persistentStoreCacheFlags;
    int _lock;
}

+ (void)initialize;

- (id)init;
- (void)dealloc;
- (void)registerToMany:(id)arg1 withOrderKeys:(id)arg2 forSourceObjectID:(id)arg3 forProperty:(id)arg4 options:(unsigned int)arg5 andTimestamp:(double)arg6;
- (void)incrementRefCountForObjectID:(id)arg1;
- (void)decrementRefCountForObjectID:(id)arg1;
- (id)rowForObjectID:(id)arg1 afterTimestamp:(double)arg2;
- (void)registerRow:(id)arg1 forObjectID:(id)arg2 options:(unsigned int)arg3;
- (void)forgetRowForObjectID:(id)arg1;
- (id)toManyForSourceObjectID:(id)arg1 forProperty:(id)arg2 afterTimestamp:(double)arg3;
- (void)_createExternalDataDictWithValueCallbacks:(void *)arg1;
- (id)initWithValueCallbacks:(void *)arg1 preserveToManyRelationships:(_Bool)arg2;
- (void)_forgetRowForObjectID:(id)arg1;
- (void)_registerRow:(id)arg1 forObjectID:(id)arg2 options:(unsigned int)arg3;
- (void)_registerToMany:(id)arg1 withOrderKeys:(id)arg2 forSourceObjectID:(id)arg3 forProperty:(id)arg4 options:(unsigned int)arg5 andTimestamp:(double)arg6;
- (id)initWithPersistentStore:(id)arg1;
- (void)growRegistrationCollectionTo:(unsigned long long)arg1;
- (void)forgetAllExternalData;
- (int)refCountForObjectID:(id)arg1;
- (void)registerRow:(id)arg1 forObjectID:(id)arg2;
- (id)rowForObjectID:(id)arg1;
- (void)registerToMany:(id)arg1 withOrderKeys:(id)arg2 forSourceObjectID:(id)arg3 forProperty:(id)arg4 andTimestamp:(double)arg5;
- (id)toManyInformationForSourceObjectID:(id)arg1 forProperty:(id)arg2 afterTimestamp:(double)arg3;
- (id)ancillaryOrderKeysForSourceObjectID:(id)arg1 forProperty:(id)arg2 afterTimestamp:(double)arg3;

@end
