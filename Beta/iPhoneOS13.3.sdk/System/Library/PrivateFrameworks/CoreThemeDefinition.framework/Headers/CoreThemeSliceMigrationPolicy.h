/*
 Image: /System/Library/PrivateFrameworks/CoreThemeDefinition.framework/CoreThemeDefinition
 */

#import <CoreData/NSEntityMigrationPolicy.h>

@interface CoreThemeSliceMigrationPolicy : NSEntityMigrationPolicy

- (_Bool)beginEntityMapping:(id)arg1 manager:(id)arg2 error:(id *)arg3;
- (_Bool)createDestinationInstancesForSourceInstance:(id)arg1 entityMapping:(id)arg2 manager:(id)arg3 error:(id *)arg4;
- (_Bool)createRelationshipsForDestinationInstance:(id)arg1 entityMapping:(id)arg2 manager:(id)arg3 error:(id *)arg4;
- (_Bool)performCustomValidationForEntityMapping:(id)arg1 manager:(id)arg2 error:(id *)arg3;

@end
