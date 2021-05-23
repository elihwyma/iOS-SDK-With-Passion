/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <Foundation/NSObject.h>

@class NSString;

@protocol SFUOutputStream;

__attribute__((visibility("hidden")))
@interface OISFUZipDeflateOutputStream : NSObject

{
    id <SFUOutputStream> mOutputStream;
    struct z_stream_s mDeflateStream;
    char *mOutBuffer;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (void)close;
- (long long)offset;
- (id)initWithOutputStream:(id)arg1;
- (id)inputStream;
- (_Bool)canSeek;
- (void)writeBuffer:(const char *)arg1 size:(unsigned long long)arg2;
- (id)closeLocalStream;
- (void)seekToOffset:(long long)arg1 whence:(int)arg2;
- (_Bool)canCreateInputStream;

@end
