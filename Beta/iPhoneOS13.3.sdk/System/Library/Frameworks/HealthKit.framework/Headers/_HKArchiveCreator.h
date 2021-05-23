/*
 Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

#import <Foundation/NSObject.h>

@class NSFileHandle, NSURL;

@interface _HKArchiveCreator : NSObject

{
    struct archive *_archive;
    NSURL *_archiveURL;
    NSFileHandle *_fileHandle;
}

@property (copy, nonatomic, readonly) NSURL *archiveURL;
@property (nonatomic, readonly) NSFileHandle *fileHandle;

- (void)dealloc;
- (void)closeArchive;
- (id)initWithURL:(id)arg1 fileHandle:(id)arg2 archiveType:(long long)arg3;
- (_Bool)archiveIsValid;
- (long long)writeData:(const void *)arg1 ofLength:(unsigned long long)arg2;
- (void)_addDataOfSize:(long long)arg1 toPathInArchive:(id)arg2 fromByteProvider:(CDUnknownBlockType)arg3;
- (id)initWithURL:(id)arg1 archiveType:(long long)arg2;
- (id)initWithFileHandle:(id)arg1 archiveType:(long long)arg2;
- (void)addFileToArchive:(id)arg1 pathInArchive:(id)arg2;
- (void)addDataToArchive:(id)arg1 pathInArchive:(id)arg2;

@end
