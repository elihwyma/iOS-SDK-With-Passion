/*
 Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface PFMirroredRelationship : NSObject

+ (_Bool)isValidMirroredRelationshipRecord:(id)arg1 values:(id)arg2;
+ (id)mirroredRelationshipWithManyToManyRecord:(id)arg1 values:(id)arg2 andManagedObjectModel:(id)arg3;
+ (id)mirroredRelationshipWithDeletedRecordType:(id)arg1 recordID:(id)arg2 andManagedObjectModel:(id)arg3;
+ (id)mirroredRelationshipWithManagedObject:(id)arg1 withRecordID:(id)arg2 relatedToObjectWithRecordID:(id)arg3 byRelationship:(id)arg4;

- (_Bool)updateRelationshipValueUsingImportContext:(id)arg1 andManagedObjectContext:(id)arg2 error:(id *)arg3;

@end
