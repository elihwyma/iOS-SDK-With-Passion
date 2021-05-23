/*
 Image: /System/Library/PrivateFrameworks/ProactiveSupport.framework/ProactiveSupport
 */

#import <Foundation/NSObject.h>

@class NSString, _PASDatabaseJournalFile;

@protocol OS_dispatch_queue;

@interface _PASDatabaseJournal : NSObject

{
    NSObject<OS_dispatch_queue> *_queue;
    NSString *_directoryPath;
    unsigned long long _serialNumber;
    NSString *_uuid;
    _Bool _journaling;
    _Bool _inMemory;
    _PASDatabaseJournalFile *_currentFile;
}

@property (nonatomic, readonly) _Bool journaling;

+ (CDUnknownBlockType)_binderForDictionary:(id)arg1;
+ (id)_journalPathForDbPath:(id)arg1;
+ (id)journalWithDbPath:(id)arg1;
+ (id)journalForInMemoryDb;

- (id)description;
- (id)_getCurrentFile;
- (void)_clearCurrentFile;
- (void)_addCurrentFileToLog;
- (void)_closeCurrentFile;
- (void)runQuery:(id)arg1 values:(id)arg2 onDb:(id)arg3;
- (_Bool)_executeNextRecordFromFile:(id)arg1 onDb:(id)arg2 becameLocked:(_Bool *)arg3 deleteFile:(_Bool *)arg4;
- (_Bool)_executeFile:(id)arg1 onDb:(id)arg2 becameLocked:(_Bool *)arg3;
- (_Bool)executeQueriesOnDatabase:(id)arg1;
- (_Bool)deleteAllJournaledQueries;
- (_Bool)startJournaling;
- (_Bool)stopJournaling;
- (id)directoryPath;

@end
