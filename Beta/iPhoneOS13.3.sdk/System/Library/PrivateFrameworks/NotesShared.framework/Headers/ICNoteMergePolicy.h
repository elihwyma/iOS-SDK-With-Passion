/*
 Image: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
 */

#import <CoreData/NSMergePolicy.h>

@interface ICNoteMergePolicy : NSMergePolicy

- (id)init;
- (_Bool)resolveConflicts:(id)arg1 error:(id *)arg2;
- (id)initWithMergeType:(unsigned long long)arg1;
- (_Bool)resolveConstraintConflicts:(id)arg1 error:(id *)arg2;
- (void)mergeEncryptedData:(id)arg1 forNote:(id)arg2 mergeConflict:(id)arg3;

@end
