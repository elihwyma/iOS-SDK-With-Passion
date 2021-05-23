/*
 Image: /System/Library/PrivateFrameworks/Notes.framework/Notes
 */

#import <Notes/ICBaseSearchIndexerDataSource.h>

@interface ICHTMLSearchIndexerDataSource : ICBaseSearchIndexerDataSource

- (id)persistentStoreCoordinator;
- (id)dataSourceIdentifier;
- (id)newManagedObjectContext;
- (void)contextWillSave:(id)arg1;
- (id)allIndexableObjectIDsInReversedReindexingOrder;
- (unsigned long long)indexingPriority;
- (id)indexableObjectIDsMatchingPredicate:(id)arg1 sortByReversedReindexingOrder:(_Bool)arg2;

@end
