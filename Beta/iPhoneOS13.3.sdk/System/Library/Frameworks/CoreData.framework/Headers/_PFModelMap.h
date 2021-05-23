/*
 Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <Foundation/NSObject.h>

@class NSArray, NSDictionary, NSManagedObjectModel;

__attribute__((visibility("hidden")))
@interface _PFModelMap : NSObject

{
    NSManagedObjectModel *_clientModel;
    NSArray *_allEntities;
    NSArray *_models;
    id *_indexedEntities;
    unsigned long long _clientEntityCount;
    unsigned long long _entityCount;
    NSDictionary *_entitiesByPath;
    unsigned long long *_modelEntityCounts;
}

@property (nonatomic, readonly) NSManagedObjectModel *clientModel;
@property (nonatomic, readonly) NSArray *allEntities;
@property (nonatomic, readonly) NSDictionary *entitiesByPath;
@property (nonatomic, readonly) unsigned long long clientEntityCount;
@property (nonatomic, readonly) NSArray *models;
@property (nonatomic, readonly) unsigned long long entityCount;

+ (id)ancillaryModelFactoryClasses;

- (void)dealloc;
- (void)addManagedObjectModel:(id)arg1;
- (id)entityForPath:(id)arg1;
- (id)entityForClassName:(id)arg1 inContext:(id)arg2;
- (id)entitiesForContext:(id)arg1 configuration:(id)arg2;
- (id)initWithClientModel:(id)arg1;
- (unsigned long long)slotForEntity:(id)arg1;
- (id)entityForSlot:(unsigned long long)arg1;

@end
