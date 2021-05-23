/*
 Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

#import <EmailDaemon/EDSearchableIndexManager.h>

@class EDSearchableIndex, EDSearchableIndexPersistence, EDSearchableIndexScheduler, NSSet, NSString;

@interface MFSearchableIndexManager_iOS : EDSearchableIndexManager

{
    struct os_unfair_lock_s _indexLock;
    EDSearchableIndex *_index;
    EDSearchableIndexPersistence *_persistence;
    EDSearchableIndexScheduler *_scheduler;
}

@property (retain, nonatomic) EDSearchableIndex *index;
@property (retain, nonatomic) EDSearchableIndexPersistence *persistence;
@property (retain, nonatomic) EDSearchableIndexScheduler *scheduler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, nonatomic, readonly) NSSet *dataSourceRefreshReasons;
@property (copy, nonatomic, readonly) NSSet *purgeReasons;
@property (copy, nonatomic, readonly) NSSet *exclusionReasons;
@property (copy, nonatomic, readonly) NSSet *currentReasons;

- (void)enableIndexingAndBeginScheduling:(_Bool)arg1;
- (id)initWithDatabase:(id)arg1 hookResponder:(id)arg2;
- (void)enableIndexingAndBeginScheduling:(_Bool)arg1 budgetConfiguration:(id)arg2;

@end
