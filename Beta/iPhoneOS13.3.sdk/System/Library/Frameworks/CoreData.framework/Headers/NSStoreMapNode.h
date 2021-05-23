/*
 Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <Foundation/NSObject.h>

@class NSManagedObjectID, NSMutableDictionary, NSPersistentStoreMap, NSString;

__attribute__((visibility("hidden")))
@interface NSStoreMapNode : NSObject

{
    NSPersistentStoreMap *_map;
    NSManagedObjectID *_objectID;
    NSMutableDictionary *_relatedNodes;
    NSString *_entityName;
    unsigned int _version;
}

+ (void)initialize;
+ (_Bool)supportsSecureCoding;

- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (id)key;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)objectID;
- (id)entity;
- (id)configurationName;
- (const id *)knownKeyValuesPointer;
- (id)_snapshot_;
- (unsigned int)_versionNumber;
- (void)_setVersionNumber:(unsigned int)arg1;
- (id)initWithObjectID:(id)arg1;
- (void)_setMap:(id)arg1;
- (void)setDestinations:(id)arg1 forRelationship:(id)arg2;
- (id)destinationsForRelationship:(id)arg1;
- (id)_relatedNodes;

@end
