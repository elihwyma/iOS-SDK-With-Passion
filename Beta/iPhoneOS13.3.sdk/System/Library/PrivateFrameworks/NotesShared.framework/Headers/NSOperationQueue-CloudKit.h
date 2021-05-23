/*
 Image: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
 */

#import <Foundation/NSOperationQueue.h>

@interface NSOperationQueue (CloudKit)

- (id)existingOperationToDeleteRecordID:(id)arg1;
- (id)existingOperationToFetchRecordID:(id)arg1;
- (id)existingOperationToSaveRecordID:(id)arg1;
- (_Bool)containsOperationToDeleteRecordID:(id)arg1;
- (_Bool)containsOperationToFetchRecordID:(id)arg1;
- (_Bool)containsOperationToSaveRecordID:(id)arg1;

@end
