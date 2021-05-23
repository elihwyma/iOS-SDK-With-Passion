/*
 Image: /System/Library/PrivateFrameworks/DataAccessExpress.framework/DataAccessExpress
 */

#import <Foundation/NSObject.h>

@class NSString;

@protocol OS_dispatch_source;

@interface DACPLogDFile : NSObject

{
    NSString *_folder;
    NSString *_baseName;
    NSString *_UUID;
    NSString *_path;
    int _fd;
    NSObject<OS_dispatch_source> *_fileEventDispatchSource;
    _Bool _fileWasDeleted;
}

@property (retain, nonatomic, readonly) NSString *folder;
@property (retain, nonatomic, readonly) NSString *baseName;
@property (retain, nonatomic, readonly) NSString *UUID;

- (id)_filePathsMatchingPattern:(id)arg1;
- (id)_getLatestMatchingFilePath;
- (void)_beginWatchingFile;
- (id)_startNewFile;
- (void)_closeFileWithFileEventDispatchSource:(id)arg1;
- (void)_openFileOutDidCreateNewFile:(_Bool *)arg1 outNewFilePath:(id *)arg2;
- (id)initWithFolder:(id)arg1 baseName:(id)arg2;
- (_Bool)logData:(id)arg1 outDidCreateNewFile:(_Bool *)arg2 outNewFilePath:(id *)arg3;
- (id)startNewFile;
- (void)checkForMaximumFileSize:(long long)arg1 wantsCompressed:(_Bool)arg2 outDidCreateNewFile:(_Bool *)arg3 outNewFilePath:(id *)arg4;
- (void)cullFilesMaxFileCount:(long long)arg1;

@end
