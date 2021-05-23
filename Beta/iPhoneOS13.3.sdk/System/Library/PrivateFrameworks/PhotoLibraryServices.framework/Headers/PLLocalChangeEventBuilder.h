/*
 Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

#import <Foundation/NSObject.h>

@class NSMutableArray, NSMutableDictionary, NSMutableSet;

@interface PLLocalChangeEventBuilder : NSObject

{
    NSMutableSet *_insertedObjectIDs;
    NSMutableSet *_updatedObjectIDs;
    NSMutableSet *_deletedObjectIDs;
    NSMutableDictionary *_attributesByOID;
    NSMutableDictionary *_relationshipsByOID;
    NSMutableArray *_deletedAssetCloudGUIDs;
    NSMutableArray *_deletedAlbumCloudGUIDs;
    NSMutableArray *_deletedMemoryCloudGUIDs;
    NSMutableArray *_deletedPersonCloudGUIDs;
    NSMutableArray *_deletedFaceCropCloudGUIDs;
    NSMutableArray *_deletedOwnedMomentShareCloudGUIDs;
    NSMutableArray *_deletedSubscribedMomentShareCloudGUIDs;
    NSMutableArray *_deletedSuggestionCloudGUIDs;
    NSMutableArray *_deletedInternalResourceUUIDToResourceTypeMappings;
    _Bool _coalescedEvent;
    _Bool _syncChange;
    CDUnknownBlockType _transactionFilter;
    CDUnknownBlockType _updatedPropertyFilter;
}

@property (nonatomic, getter=isCoalescedEvent) _Bool coalescedEvent;
@property (nonatomic, getter=isSyncChange) _Bool syncChange;
@property (copy, nonatomic) CDUnknownBlockType transactionFilter;
@property (copy, nonatomic) CDUnknownBlockType updatedPropertyFilter;
@property (nonatomic, readonly, getter=isEmpty) _Bool empty;

+ (id)localEventWithBuilderBlock:(CDUnknownBlockType)arg1;
+ (id)localEventFromTransaction:(id)arg1;

- (id)init;
- (void)recordInsertedObjectID:(id)arg1;
- (void)recordUpdatedObjectID:(id)arg1;
- (void)recordDeletedObjectID:(id)arg1;
- (void)recordDeletedCloudGUID:(id)arg1 forType:(long long)arg2;
- (void)recordUpdatedAttributes:(unsigned long long)arg1 andRelationships:(unsigned long long)arg2 forObjectID:(id)arg3;
- (void)recordAllTransactionsFromIterator:(id)arg1;
- (void)recordTransaction:(id)arg1;
- (_Bool)_shouldRecordTransaction:(id)arg1;
- (void)recordChange:(id)arg1;
- (void)_recordInsertChange:(id)arg1;
- (void)_recordUpdateChange:(id)arg1;
- (id)_filteredUpdatedPropertiesFromChange:(id)arg1;
- (void)_recordDeleteChange:(id)arg1;
- (void)_recordCloudDeleteForChange:(id)arg1;
- (Class)_cloudDeletableEntityFromObjectID:(id)arg1;
- (_Bool)_isCloudStateDeletedOnTombstone:(id)arg1;
- (CDUnknownBlockType)recordChangedObjectIDBlockForChangeKey:(id)arg1;
- (CDUnknownBlockType)recordDeletedCloudGUIDBlockForChangeKey:(id)arg1;
- (id)buildLocalEvent;

@end
