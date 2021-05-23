/*
 Image: /System/Library/PrivateFrameworks/EmailDaemon.framework/EmailDaemon
 */

#import <Foundation/NSObject.h>

@class EDPersistenceDatabaseJournal, NSMapTable, NSMutableIndexSet, NSString;

@protocol OS_dispatch_queue;

@interface EDPersistenceDatabaseJournalManager : NSObject

{
    struct os_unfair_lock_s _journalLock;
    EDPersistenceDatabaseJournal *_currentJournal;
    _Bool _shouldDeleteCurrentJournal;
    NSMutableIndexSet *_journalNumbers;
    NSMutableIndexSet *_pendingDeleteJournalNumbers;
    NSMapTable *_journalsByIndexes;
    NSString *_journalDirectoryPath;
    NSObject<OS_dispatch_queue> *_checkExistingQueue;
    NSObject<OS_dispatch_queue> *_deleteQueue;
}

@property (copy, nonatomic, readonly) NSString *journalDirectoryPath;
@property (retain, nonatomic, readonly) NSObject<OS_dispatch_queue> *checkExistingQueue;
@property (retain, nonatomic, readonly) NSObject<OS_dispatch_queue> *deleteQueue;
@property (nonatomic, readonly) EDPersistenceDatabaseJournal *oldestJournal;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)log;

- (id)initWithBasePath:(id)arg1;
- (void)_journalNoLongerReferenced:(id)arg1;
- (id)_getJournalWithBlock:(CDUnknownBlockType)arg1;
- (void)_deleteJournalNumber:(unsigned long long)arg1;
- (id)currentJournalCreateIfNeeded:(_Bool)arg1;
- (void)mergedJournal:(id)arg1;
- (void)waitForDeletes;

@end
