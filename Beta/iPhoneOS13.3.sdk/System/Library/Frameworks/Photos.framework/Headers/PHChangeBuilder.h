/*
 Image: /System/Library/Frameworks/Photos.framework/Photos
 */

#import <Foundation/NSObject.h>

@class NSManagedObjectContext, NSMutableDictionary, NSMutableSet, PHPersistentChangeToken;

@interface PHChangeBuilder : NSObject

{
    NSManagedObjectContext *_context;
    PHPersistentChangeToken *_changeToken;
    unsigned long long _maximumChangeThreshold;
    NSMutableSet *_insertedObjectIDs;
    NSMutableSet *_updatedObjectIDs;
    NSMutableSet *_deletedObjectIDs;
    NSMutableDictionary *_deletedUuidsByObjectId;
    NSMutableDictionary *_attributesByOID;
    NSMutableDictionary *_relationshipsByOID;
    _Bool _unknownMergeEvent;
}

+ (id)changeWithManagedObjectContext:(id)arg1 maximumChangeThreshold:(unsigned long long)arg2 transaction:(id)arg3;

- (void)recordTransaction:(id)arg1;
- (void)recordChange:(id)arg1;
- (id)initWithManagedObjectContext:(id)arg1 maximumChangeThreshold:(unsigned long long)arg2;
- (_Bool)changeCountExeedsThreshold:(unsigned long long)arg1;
- (void)recordNonIncrementalChanges;
- (void)recordChanges:(id)arg1;
- (void)_recordInsertChange:(id)arg1 withUniquedObjectID:(id)arg2;
- (void)_recordUpdateChange:(id)arg1 withUniquedObjectID:(id)arg2;
- (void)_recordChangedProperties:(id)arg1 forObjectID:(id)arg2;
- (void)_recordDeleteChange:(id)arg1 withUniquedObjectID:(id)arg2;
- (id)_uuidForDeleteChange:(id)arg1 uniquedObjectID:(id)arg2;
- (id)buildChange;

@end
