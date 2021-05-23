/*
 Image: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
 */

#import <NSObject.h>

@class NSString;

@protocol OS_dispatch_io, OS_dispatch_queue, __NSCFLocalDownloadFileOpener;

@interface __NSCFLocalDownloadFile : NSObject

{
    struct stat _stat;
    NSObject<OS_dispatch_io> *_writeIO;
    NSObject<OS_dispatch_queue> *_workQueue;
    _Bool _finished;
    NSString *_path;
    _Bool _skipUnlink;
    _Bool _truncateFile;
    int _error;
    id <__NSCFLocalDownloadFileOpener> _fileProvider;
    CDUnknownBlockType _finishCompletion;
}

@property (retain) NSString *path;
@property _Bool skipUnlink;
@property _Bool truncateFile;
@property int error;
@property id <__NSCFLocalDownloadFileOpener> fileProvider;
@property (copy) CDUnknownBlockType finishCompletion;

- (void)dealloc;
- (id)fileURL;
- (void)truncate;
- (void)finishOnQueue:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)setFinished;
- (void)captureFile:(id *)arg1 outStat:(struct stat *)arg2;
- (void)writeBytes:(id)arg1 completionQueue:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)initWithFullPath:(id)arg1;
- (id)initWithExistingFile:(id)arg1 expectedSize:(long long)arg2;
- (id)initWithExistingUnopenableFile:(id)arg1 fileProvider:(id)arg2;
- (id)initTempFileWithDirectory:(id)arg1;
- (id)initQueues;
- (id)ioChannel;

@end
