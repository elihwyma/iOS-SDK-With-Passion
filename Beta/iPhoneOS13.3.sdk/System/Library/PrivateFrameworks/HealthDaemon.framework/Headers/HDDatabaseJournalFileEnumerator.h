/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <Foundation/NSObject.h>

@class NSError, NSMutableArray, NSString;

@protocol HDDatabaseJournalFileEnumeratorTestsDelegate;

@interface HDDatabaseJournalFileEnumerator : NSObject

{
    long long _currentFileIndex;
    _Bool _hasLoadedFiles;
    long long _maxAllowedOpenFileHandleCount;
    long long _totalFilesCount;
    NSError *_cachedError;
    NSString *_path;
    NSMutableArray *_remainingJournalFileNames;
    NSMutableArray *_openJournalFiles;
    id <HDDatabaseJournalFileEnumeratorTestsDelegate> _unitTestDelegate;
}

@property (copy, nonatomic) NSString *path;
@property (retain, nonatomic) NSMutableArray *remainingJournalFileNames;
@property (retain, nonatomic) NSMutableArray *openJournalFiles;
@property (weak, nonatomic) id <HDDatabaseJournalFileEnumeratorTestsDelegate> unitTestDelegate;
@property (nonatomic, readonly) _Bool hasFiles;
@property (nonatomic, readonly) unsigned long long totalJournalFileCount;
@property (nonatomic, readonly) unsigned long long currentJournalFileIndex;
@property (nonatomic, readonly, getter=hasMoreJournalFiles) _Bool moreJournalFiles;

- (void)dealloc;
- (id)initWithPath:(id)arg1;
- (void)closeJournalFiles;
- (_Bool)_updateRollingBufferIfRequiredWithError:(id *)arg1;
- (long long)maxAllowedOpenFileHandleCount;
- (id)_createFileHandlesForFileNames:(id)arg1 error:(id *)arg2;
- (id)_fileHandleForFileName:(id)arg1 path:(id)arg2 error:(id *)arg3;
- (_Bool)loadSortedJournalFilesWithError:(id *)arg1;
- (id)nextJournalFileWithError:(id *)arg1;
- (unsigned long long)_totalOpenFileHandleCount;
- (void)setMaxAllowedOpenFileHandleCount:(long long)arg1;

@end
