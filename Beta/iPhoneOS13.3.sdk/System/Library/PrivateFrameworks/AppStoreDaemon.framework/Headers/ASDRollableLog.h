/*
 Image: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/AppStoreDaemon
 */

#import <Foundation/NSObject.h>

@class ASDLogFileOptions, NSFileHandle;

@protocol OS_dispatch_queue, OS_dispatch_source;

@interface ASDRollableLog : NSObject

{
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    double _lastFileStatTime;
    NSFileHandle *_fileHandle;
    NSObject<OS_dispatch_source> *_fileObserverSource;
    ASDLogFileOptions *_options;
}

@property (readonly) ASDLogFileOptions *logOptions;

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
