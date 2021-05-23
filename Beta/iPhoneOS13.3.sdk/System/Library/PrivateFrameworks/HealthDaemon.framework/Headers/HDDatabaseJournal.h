/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <Foundation/NSObject.h>

@class NSFileHandle, NSLock, NSProgress, NSString;

@protocol HDDatabaseJournalDelegate;

@interface HDDatabaseJournal : NSObject

{
    struct os_unfair_lock_s _progressLock;
    long long _type;
    id <HDDatabaseJournalDelegate> _delegate;
    NSString *_path;
    NSLock *_journalLock;
    NSFileHandle *_fileHandle;
    NSProgress *_parentProgress;
}

@property (copy, nonatomic) NSString *path;
@property (retain, nonatomic) NSLock *journalLock;
@property (retain, nonatomic) NSFileHandle *fileHandle;
@property (retain, nonatomic) NSProgress *parentProgress;
@property (nonatomic, readonly) long long type;
@property (weak, nonatomic) id <HDDatabaseJournalDelegate> delegate;

- (id)init;
- (void)dealloc;
- (void)lock;
- (void)unlock;
- (_Bool)addJournalEntries:(id)arg1 error:(id *)arg2;
- (id)initWithType:(long long)arg1 path:(id)arg2;
- (id)progressForJournalMerge;
- (_Bool)mergeWithProfile:(id)arg1;
- (_Bool)performMergeTransactionWithProfile:(id)arg1 transactionContext:(id)arg2 error:(id *)arg3 block:(CDUnknownBlockType)arg4;
- (unsigned long long)journalFileCount;
- (_Bool)_appendData:(id)arg1 error:(id *)arg2;
- (id)_mergeTransactionContextWithContext:(id)arg1;
- (_Bool)_processJournalFilesWithProfile:(id)arg1;
- (void)_executeAtomically:(CDUnknownBlockType)arg1;
- (id)_journalFiles;
- (_Bool)_processJournalFile:(id)arg1 profile:(id)arg2 accessibilityAssertion:(id)arg3;
- (unsigned int)_processJournalFile:(id)arg1 profile:(id)arg2 transaction:(id)arg3 fileHandle:(id)arg4 fileSize:(unsigned long long *)arg5 error:(id *)arg6;
- (id)_nameOfNextJournalFile;
- (_Bool)_openNextJournalFileWithError:(id *)arg1;
- (id)_sortedListOfJournalFiles;
- (id)_loadJournalEntry:(id)arg1;
- (unsigned int)_processJournalFile:(id)arg1 profile:(id)arg2 transaction:(id)arg3 fileHandle:(id)arg4 mapping:(void *)arg5 length:(unsigned long long)arg6 error:(id *)arg7;
- (unsigned int)_processOkemoJournalWithVersion:(unsigned int)arg1 fileHandle:(id)arg2 mapping:(void *)arg3 size:(unsigned long long)arg4 headerLength:(unsigned long long)arg5 profile:(id)arg6 transaction:(id)arg7 error:(id *)arg8;
- (unsigned int)_processMonarchJournalWithVersion:(unsigned int)arg1 fileHandle:(id)arg2 mapping:(void *)arg3 size:(unsigned long long)arg4 headerLength:(unsigned long long)arg5 profile:(id)arg6 transaction:(id)arg7 error:(id *)arg8;
- (_Bool)_loadJournalFromMapping:(void *)arg1 size:(unsigned long long)arg2 headerLength:(unsigned long long)arg3 journalEntries:(id *)arg4 error:(id *)arg5;
- (_Bool)_loadJournalWithFileHandle:(id)arg1 journalEntries:(id *)arg2 error:(id *)arg3;
- (void)_mergeJournalEntries:(id)arg1 profile:(id)arg2;
- (_Bool)_performPostJournalMergeWithVersion:(unsigned int)arg1 profile:(id)arg2 transaction:(id)arg3 error:(id *)arg4;
- (void)_unitTesting_closeCurrentJournalFile;
- (id)_unitTesting_journalFiles;

@end
