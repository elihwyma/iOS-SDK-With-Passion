/*
 Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

#import <Foundation/NSObject.h>

@class FCKeyValueStore, NSArray, NSHashTable;

@interface FCOfflineIssueList : NSObject

{
    FCKeyValueStore *_localStore;
    NSHashTable *_observers;
}

@property (nonatomic, readonly) FCKeyValueStore *localStore;
@property (nonatomic, readonly) NSHashTable *observers;
@property (nonatomic, readonly) NSArray *issueIDs;

- (id)init;
- (void)addObserver:(id)arg1;
- (void)removeObserver:(id)arg1;
- (id)initWithStoreDirectoryFileURL:(id)arg1;
- (_Bool)containsIssueID:(id)arg1;
- (void)removeIssueIDs:(id)arg1;
- (void)addIssueID:(id)arg1 source:(long long)arg2;
- (_Bool)everContainedIssueID:(id)arg1;
- (long long)sourceForIssueID:(id)arg1;
- (id)dateAddedForIssueID:(id)arg1;
- (id)dateRemovedForIssueID:(id)arg1;
- (void)removeAllIssues;

@end
