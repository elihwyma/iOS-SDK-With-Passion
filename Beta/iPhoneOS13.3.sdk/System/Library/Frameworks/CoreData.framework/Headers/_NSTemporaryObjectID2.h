/*
 Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <CoreData/NSTemporaryObjectID.h>

@class _NS128bitWrapper;

__attribute__((visibility("hidden")))
@interface _NSTemporaryObjectID2 : NSTemporaryObjectID

{
    id _store;
    _NS128bitWrapper *_uuid128;
}

+ (id)initWithEntity:(id)arg1 andUUIDString:(id)arg2;

- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)finalize;
- (id)persistentStore;
- (id)_storeIdentifier;
- (id)_referenceData;
- (void)_setPersistentStore:(id)arg1;
- (_Bool)_isPersistentStoreAlive;

@end
