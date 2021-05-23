/*
 Image: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
 */

#import <Notes/ICBaseSearchIndexerDataSource.h>

@interface ICModernSearchIndexerDataSource : ICBaseSearchIndexerDataSource

- (id)persistentStoreCoordinator;
- (id)dataSourceIdentifier;
- (id)newManagedObjectContext;
- (void)contextWillSave:(id)arg1;
- (id)allIndexableObjectIDsInReversedReindexingOrder;
- (unsigned long long)indexingPriority;

@end
