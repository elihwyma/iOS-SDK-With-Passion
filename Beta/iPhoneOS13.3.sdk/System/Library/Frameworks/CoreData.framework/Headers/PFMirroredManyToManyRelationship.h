/*
 Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <CoreData/PFMirroredRelationship.h>

@class CKRecordID, NSRelationshipDescription, NSString;

__attribute__((visibility("hidden")))
@interface PFMirroredManyToManyRelationship : PFMirroredRelationship

{
    unsigned long long _type;
    NSRelationshipDescription *_relationshipDescription;
    NSRelationshipDescription *_inverseRelationshipDescription;
    CKRecordID *_manyToManyRecordID;
    NSString *_manyToManyRecordType;
    CKRecordID *_ckRecordID;
    CKRecordID *_relatedCKRecordID;
}

@property (nonatomic, readonly) unsigned long long type;
@property (nonatomic, readonly) NSRelationshipDescription *relationshipDescription;
@property (nonatomic, readonly) NSRelationshipDescription *inverseRelationshipDescription;
@property (nonatomic, readonly) CKRecordID *manyToManyRecordID;
@property (nonatomic, readonly) NSString *manyToManyRecordType;
@property (nonatomic, readonly) CKRecordID *ckRecordID;
@property (nonatomic, readonly) CKRecordID *relatedCKRecordID;

+ (_Bool)_isValidMirroredRelationshipRecord:(id)arg1 values:(id)arg2;
+ (id)orderedRelationshipsForRecordType:(id)arg1 andManagedObjectModel:(id)arg2;
+ (id)recordNamesFromManyToManyCKRecordName:(id)arg1;
+ (id)orderRelationships:(id)arg1;
+ (id)ckRecordTypeForOrderedRelationships:(id)arg1;
+ (id)ckRecordNameForOrderedRecordNames:(id)arg1;

- (void)dealloc;
- (id)description;
- (id)recordTypeToRecordID;
- (id)initWithRecordID:(id)arg1 recordType:(id)arg2 managedObjectModel:(id)arg3 andType:(unsigned long long)arg4;
- (_Bool)updateRelationshipValueUsingImportContext:(id)arg1 andManagedObjectContext:(id)arg2 error:(id *)arg3;
- (void)_setManyToManyRecordID:(id)arg1 manyToManyRecordType:(id)arg2 ckRecordID:(id)arg3 relatedCKRecordID:(id)arg4 relationshipDescription:(id)arg5 inverseRelationshipDescription:(id)arg6 type:(unsigned long long)arg7;

@end
