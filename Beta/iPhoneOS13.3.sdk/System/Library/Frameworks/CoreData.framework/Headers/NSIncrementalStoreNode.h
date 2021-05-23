/*
 Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <Foundation/NSObject.h>

@class NSManagedObjectID;

@interface NSIncrementalStoreNode : NSObject

{
    NSManagedObjectID *_objectID;
    unsigned long long _versionNumber;
    id _propertyCache;
    void *_reserved1;
}

@property (nonatomic, readonly) NSManagedObjectID *objectID;
@property (nonatomic, readonly) unsigned long long version;

+ (void)initialize;

- (void)dealloc;
- (id)description;
- (const id *)knownKeyValuesPointer;
- (id)initWithObjectID:(id)arg1 withValues:(id)arg2 version:(unsigned long long)arg3;
- (id)valueForPropertyDescription:(id)arg1;
- (id)initWithObjectID:(id)arg1 fromSQLRow:(id)arg2;
- (id)_snapshot_;
- (unsigned int)_versionNumber;
- (id)_propertyCache;
- (void)updateWithValues:(id)arg1 version:(unsigned long long)arg2;
- (void)updateFromSQLRow:(id)arg1;

@end
