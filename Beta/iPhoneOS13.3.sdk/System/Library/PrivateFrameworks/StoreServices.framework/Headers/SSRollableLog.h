/*
 Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import <NSObject.h>

@class NSFileHandle, SSLogFileOptions;

@protocol OS_dispatch_queue, OS_dispatch_source;

@interface SSRollableLog : NSObject

{
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    double _lastFileStatTime;
    NSFileHandle *_fileHandle;
    NSObject<OS_dispatch_source> *_fileObserverSource;
    SSLogFileOptions *_options;
}

@property (readonly) SSLogFileOptions *logOptions;

- (void)dealloc;
- (void)writeString:(id)arg1;
- (id)initWithLogOptions:(id)arg1;
- (void)_openLogFile;
- (void)_checkLogFileSize;
- (void)_closeLogFile;
- (id)_logFilePathWithIndex:(long long)arg1;
- (id)_activeLogFilePath;
- (void)_rollLogFiles;

@end
