/*
 Image: /System/Library/PrivateFrameworks/Notes.framework/Notes
 */

#import <CoreData/NSEntityMigrationPolicy.h>

@interface ExternalSequenceNumberToAttachmentNoteBodyToAttachmentMigrationPolicy : NSEntityMigrationPolicy

- (_Bool)createDestinationInstancesForSourceInstance:(id)arg1 entityMapping:(id)arg2 manager:(id)arg3 error:(id *)arg4;
- (_Bool)createRelationshipsForDestinationInstance:(id)arg1 entityMapping:(id)arg2 manager:(id)arg3 error:(id *)arg4;
- (_Bool)endEntityMapping:(id)arg1 manager:(id)arg2 error:(id *)arg3;
- (id)unarchiveObjectWithExternalRepresentation:(id)arg1;

@end
