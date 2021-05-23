/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <Foundation/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface OISFUMoveableFileOutputStream : NSObject

{
    int mFd;
    NSString *mPath;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (void)close;
- (id)path;
- (id)initWithPath:(id)arg1;
- (long long)offset;
- (void)flush;
- (id)inputStream;
- (_Bool)canSeek;
- (void)writeBuffer:(const char *)arg1 size:(unsigned long long)arg2;
- (id)closeLocalStream;
- (void)seekToOffset:(long long)arg1 whence:(int)arg2;
- (_Bool)canCreateInputStream;
- (id)initWithTemporaryFile:(id)arg1;
- (_Bool)moveToPath:(id)arg1;
- (void)truncateToLength:(long long)arg1;

@end
