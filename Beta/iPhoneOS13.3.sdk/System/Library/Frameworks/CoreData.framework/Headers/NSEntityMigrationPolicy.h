/*
 Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <Foundation/NSObject.h>

@interface NSEntityMigrationPolicy : NSObject

- (_Bool)beginEntityMapping:(id)arg1 manager:(id)arg2 error:(id *)arg3;
- (_Bool)createDestinationInstancesForSourceInstance:(id)arg1 entityMapping:(id)arg2 manager:(id)arg3 error:(id *)arg4;
- (_Bool)endInstanceCreationForEntityMapping:(id)arg1 manager:(id)arg2 error:(id *)arg3;
- (_Bool)createRelationshipsForDestinationInstance:(id)arg1 entityMapping:(id)arg2 manager:(id)arg3 error:(id *)arg4;
- (_Bool)endRelationshipCreationForEntityMapping:(id)arg1 manager:(id)arg2 error:(id *)arg3;
- (_Bool)performCustomValidationForEntityMapping:(id)arg1 manager:(id)arg2 error:(id *)arg3;
- (_Bool)endEntityMapping:(id)arg1 manager:(id)arg2 error:(id *)arg3;
- (id)_nonNilValueOrDefaultValueForAttribute:(id)arg1 source:(id)arg2 destination:(id)arg3;

@end
