/*
 Image: /System/Library/PrivateFrameworks/Notes.framework/Notes
 */

#import <CoreData/NSMergePolicy.h>

@interface NoteResurrectionMergePolicy : NSMergePolicy

+ (id)sharedNoteResurrectionMergePolicy;

- (_Bool)resolveConflicts:(id)arg1 error:(id *)arg2;
- (id)snapshotFromRecord:(id)arg1;
- (id)localStoreForNote:(id)arg1;
- (_Bool)accountExists:(id)arg1;

@end
