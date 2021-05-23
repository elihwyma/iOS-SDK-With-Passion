/*
 Image: /System/Library/PrivateFrameworks/NanoMailKitServer.framework/NanoMailKitServer
 */

#import <Foundation/NSObject.h>

@class NSMutableData, NSString;

@protocol OS_dispatch_queue;

@interface NNMKSQLJournal : NSObject

{
    NSString *_directoryPath;
    NSMutableData *_currentFileData;
    NSObject<OS_dispatch_queue> *_journalQueue;
    unsigned long long _filesCount;
}

@property (retain, nonatomic) NSString *directoryPath;
@property (retain, nonatomic) NSMutableData *currentFileData;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *journalQueue;
@property (nonatomic) unsigned long long filesCount;

- (void)dealloc;
- (id)initWithPath:(id)arg1;
- (void)_flush;
- (unsigned long long)_currentFilesCount;
- (_Bool)isJournalOverflow;
- (void)flushIfNeeded;
- (id)_sortedJournalFiles;
- (id)_journalFilesEnumerator;
- (id)_nextFilePath;
- (_Bool)appendSQLStatement:(id)arg1;
- (void)mergeUsingBlock:(CDUnknownBlockType)arg1;
- (void)deleteJournalFiles;

@end
