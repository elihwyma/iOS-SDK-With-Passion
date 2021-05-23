/*
 Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <Foundation/NSObject.h>

@class NSManagedObjectModel, NSMutableDictionary, NSRecursiveLock;

__attribute__((visibility("hidden")))
@interface PFUbiquityMetadataFactory : NSObject

{
    NSMutableDictionary *_rootLocationToPeerIDToEntry;
    NSRecursiveLock *_rootLocationToPeerIDToEntryLock;
    NSManagedObjectModel *_cachedModel;
}

+ (void)initialize;
+ (id)sharedFactory;

- (id)init;
- (void)dealloc;
- (id)description;
- (id)newMetadataManagedObjectModel;
- (id)newStackForLocalPeerID:(id)arg1 storeName:(id)arg2 andUbiquityRootLocation:(id)arg3 error:(id *)arg4;
- (id)entryForLocalPeerID:(id)arg1 storeName:(id)arg2 andUbiquityRootLocation:(id)arg3;
- (void)removeCachedCoordinatorsForLocalPeerID:(id)arg1 storeName:(id)arg2 andUbiquityRootLocation:(id)arg3;
- (_Bool)cacheEntryForLocalPeerID:(id)arg1 storeName:(id)arg2 andUbiquityRootLocation:(id)arg3 error:(id *)arg4;
- (id)newMetadataEntryForLocalPeerID:(id)arg1 storeName:(id)arg2 andUbiquityRootLocation:(id)arg3 error:(id *)arg4;
- (id)createMetadataModel;
- (id)newEntityForName:(id)arg1;
- (id)newAttributeNamed:(id)arg1 attributeType:(unsigned long long)arg2 isOptional:(_Bool)arg3 isTransient:(_Bool)arg4 withDefaultValue:(id)arg5 andMinValue:(id)arg6 andMaxValue:(id)arg7;
- (id)newRelationshipNamed:(id)arg1 withDestinationEntity:(id)arg2 andInverseRelationship:(id)arg3 isOptional:(_Bool)arg4 isToMany:(_Bool)arg5 andDeleteRule:(unsigned long long)arg6;
- (void)addModelingToolUserInfoToEntity:(id)arg1;
- (void)addModelingToolUserInfoToProperty:(id)arg1;
- (void)removeAllCoordinatorsForRootLocation:(id)arg1;

@end
