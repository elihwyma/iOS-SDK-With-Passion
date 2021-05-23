/*
 Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <Foundation/NSObject.h>

@class NSManagedObjectID, NSMutableDictionary;

@interface NSAtomicStoreCacheNode : NSObject

{
    NSManagedObjectID *_objectID;
    unsigned long long __versionNumber;
    NSMutableDictionary *_propertyCache;
    void *_reserved1;
}

@property (nonatomic, readonly) NSManagedObjectID *objectID;
@property (retain, nonatomic) NSMutableDictionary *propertyCache;

+ (void)initialize;
+ (_Bool)accessInstanceVariablesDirectly;

- (id)init;
- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (void)setValue:(id)arg1 forKey:(id)arg2;
- (id)valueForKey:(id)arg1;
- (const id *)knownKeyValuesPointer;
- (id)_snapshot_;
- (unsigned int)_versionNumber;
- (void)_setVersionNumber:(unsigned int)arg1;
- (id)initWithObjectID:(id)arg1;

@end
