/*
 Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <CoreData/PFMirroredRelationship.h>

@class CKRecordID, NSManagedObjectID, NSRelationshipDescription;

__attribute__((visibility("hidden")))
@interface PFMirroredOneToManyRelationship : PFMirroredRelationship

{
    NSRelationshipDescription *_relationshipDescription;
    NSRelationshipDescription *_inverseRelationshipDescription;
    NSManagedObjectID *_objectID;
    CKRecordID *_relatedRecordID;
    CKRecordID *_recordID;
}

@property (nonatomic, readonly) NSRelationshipDescription *relationshipDescription;
@property (nonatomic, readonly) NSRelationshipDescription *inverseRelationshipDescription;
@property (nonatomic, readonly) NSManagedObjectID *objectID;
@property (nonatomic, readonly) CKRecordID *recordID;
@property (nonatomic, readonly) CKRecordID *relatedObjectRecordID;

- (void)dealloc;
- (id)recordTypesToRecordIDs;
- (id)initWithManagedObject:(id)arg1 withRecordName:(id)arg2 relatedToRecordWithRecordName:(id)arg3 byRelationship:(id)arg4;
- (_Bool)updateRelationshipValueUsingImportContext:(id)arg1 andManagedObjectContext:(id)arg2 error:(id *)arg3;

@end
