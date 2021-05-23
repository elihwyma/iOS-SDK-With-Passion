/*
 Image: /System/Library/PrivateFrameworks/AirTraffic.framework/AirTraffic
 */

#import <Foundation/NSObject.h>

@class NSDate, NSFileHandle, NSString;

@protocol OS_dispatch_queue, OS_dispatch_source;

@interface ATRollableLog : NSObject

{
    NSDate *_lastStatDate;
    NSString *_directory;
    NSString *_baseFilename;
    NSString *_generationalFilenameFormat;
    NSFileHandle *_fh;
    NSObject<OS_dispatch_source> *_fdWatcher;
    NSObject<OS_dispatch_queue> *_logQueue;
    NSObject<OS_dispatch_queue> *_logRequestQueue;
}

@property (retain) NSDate *lastStatDate;
@property (retain) NSFileHandle *fh;

+ (id)_filenameWithBase:(id)arg1 generationalFormat:(id)arg2 generation:(int)arg3;
+ (id)_generationalFormatFromBase:(id)arg1;
+ (void)enableLogRolling;
+ (id)allLogFilesForFilename:(id)arg1;
+ (id)loggerWithFilename:(id)arg1;

- (void)logString:(id)arg1;
- (id)initWithFilename:(id)arg1;
- (id)_filenameWithGenerationNumber:(int)arg1;
- (id)_fullFilePathWithGenerationNumber:(int)arg1;
- (void)_setFilePermissions:(id)arg1;
- (void)_loadUpHandle;
- (id)_fullCompressedFilePathWithGenerationNumber:(int)arg1;
- (id)compressFile:(id)arg1;
- (void)_rollLogs;
- (void)_statFileIfNecessaryForRollingCheck;
- (void)logData:(id)arg1;
- (void)logLine:(id)arg1 withPrefix:(id)arg2;
- (void)slurpDataFromFile:(id)arg1;

@end
