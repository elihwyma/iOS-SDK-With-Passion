/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <Foundation/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface OISFUGZipFileOutputStream : NSObject

{
    struct gzFile_s *_file;
    long long _offset;
    NSString *_path;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)gzipExtension;

- (void)dealloc;
- (void)close;
- (id)path;
- (id)initWithPath:(id)arg1;
- (long long)offset;
- (id)inputStream;
- (_Bool)canSeek;
- (void)writeBuffer:(const char *)arg1 size:(unsigned long long)arg2;
- (id)closeLocalStream;
- (void)seekToOffset:(long long)arg1 whence:(int)arg2;
- (_Bool)canCreateInputStream;

@end
