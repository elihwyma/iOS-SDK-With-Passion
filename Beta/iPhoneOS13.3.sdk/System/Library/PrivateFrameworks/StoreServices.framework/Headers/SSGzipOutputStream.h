/*
 Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import <NSOutputStream.h>

@class NSError;

@interface SSGzipOutputStream : NSOutputStream

{
    NSOutputStream *_backingStream;
    struct z_stream_s _stream;
    unsigned long long _streamContentLength;
    NSError *_streamError;
    char *_streamOutBuffer;
    unsigned long long _streamOutBufferSize;
}

- (void)dealloc;
- (void)open;
- (void)close;
- (id)propertyForKey:(id)arg1;
- (_Bool)setProperty:(id)arg1 forKey:(id)arg2;
- (unsigned long long)streamStatus;
- (id)streamError;
- (id)initToMemory;
- (id)initToFileAtPath:(id)arg1 append:(_Bool)arg2;
- (long long)write:(const char *)arg1 maxLength:(unsigned long long)arg2;
- (_Bool)hasSpaceAvailable;
- (_Bool)_initializeOutputStream;
- (void)_setStreamError:(int)arg1 context:(id)arg2;
- (long long)_consumeStreamOutput:(_Bool)arg1;
- (unsigned long long)streamContentLength;

@end
