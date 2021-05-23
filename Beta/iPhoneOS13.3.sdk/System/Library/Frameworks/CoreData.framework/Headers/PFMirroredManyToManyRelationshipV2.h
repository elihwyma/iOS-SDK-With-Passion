/*
 Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <CoreData/PFMirroredManyToManyRelationship.h>

__attribute__((visibility("hidden")))
@interface PFMirroredManyToManyRelationshipV2 : PFMirroredManyToManyRelationship

+ (_Bool)_isValidMirroredRelationshipRecord:(id)arg1 values:(id)arg2;

- (id)initWithRecordID:(id)arg1 forRecordWithID:(id)arg2 relatedToRecordWithID:(id)arg3 byRelationship:(id)arg4 withInverse:(id)arg5 andType:(unsigned long long)arg6;
- (id)initWithRecord:(id)arg1 andValues:(id)arg2 withManagedObjectModel:(id)arg3 andType:(unsigned long long)arg4;
- (void)populateRecordValues:(id)arg1;

@end
