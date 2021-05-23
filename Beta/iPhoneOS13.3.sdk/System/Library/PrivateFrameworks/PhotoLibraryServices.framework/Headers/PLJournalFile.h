/*
 Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

#import <Foundation/NSObject.h>

@class NSURL, PLJournal;

@interface PLJournalFile : NSObject

{
    NSURL *_url;
    PLJournal *_journal;
}

@property (weak, nonatomic) PLJournal *journal;
@property (nonatomic, readonly) NSURL *url;
@property (nonatomic, readonly) unsigned long long fileSize;
@property (nonatomic, readonly) unsigned long long allocatedFileSize;

+ (_Bool)fileExistsAtURL:(id)arg1;
+ (_Bool)moveURL:(id)arg1 toURL:(id)arg2 error:(id *)arg3;
+ (_Bool)createEmptyURL:(id)arg1 error:(id *)arg2;
+ (_Bool)removeURL:(id)arg1 error:(id *)arg2;
+ (_Bool)writeData:(id)arg1 toURL:(id)arg2 atomically:(_Bool)arg3 error:(id *)arg4;

- (_Bool)fileExists;
- (id)initWithURL:(id)arg1 journal:(id)arg2;
- (_Bool)openForReadingUsingBlock:(CDUnknownBlockType)arg1 error:(id *)arg2;
- (_Bool)enumerateEntriesUsingBlock:(CDUnknownBlockType)arg1 decodePayload:(_Bool)arg2 error:(id *)arg3;
- (_Bool)openForWritingUsingBlock:(CDUnknownBlockType)arg1 error:(id *)arg2;
- (_Bool)appendEntries:(id)arg1 error:(id *)arg2;
- (_Bool)removeFileWithError:(id *)arg1;
- (_Bool)createEmptyFileWithError:(id *)arg1;
- (_Bool)moveToURL:(id)arg1 error:(id *)arg2;

@end
