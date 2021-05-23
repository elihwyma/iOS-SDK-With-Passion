/*
 Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <Foundation/NSObject.h>

@class NSEntityDescription, NSManagedObjectID;

__attribute__((visibility("hidden")))
@interface _CDSnapshot : NSObject

{
    int _cd_rc;
    int _cd_version;
    NSManagedObjectID *_cd_objectID;
    struct _snapshotFlags_st {
        unsigned int _readOnly:1;
        unsigned int _reservedFlags:7;
    } _cd_flags;
    unsigned char _cd_nullFlags_;
}

@property (nonatomic, readonly) NSEntityDescription *entity;
@property (nonatomic, readonly) NSManagedObjectID *objectID;

+ (id)alloc;
+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (void)initialize;
+ (void)_entityDeallocated;
+ (Class)classForEntity:(id)arg1;
+ (unsigned int)newBatchAllocation:(id *)arg1 count:(unsigned int)arg2 withOwnedObjectIDs:(id *)arg3;
+ (void)resetGeneratedClasses;

- (unsigned long long)retainCount;
- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (id)retain;
- (oneway void)release;
- (unsigned long long)hash;
- (id)description;
- (_Bool)_tryRetain;
- (_Bool)_isDeallocating;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)copy;
- (id)mutableCopy;
- (void)finalize;
- (void)setValue:(id)arg1 forKey:(id)arg2;
- (id)valueForKey:(id)arg1;
- (id)_snapshot_;
- (id)initWithObjectID:(id)arg1;
- (id)_descriptionValues;

@end
