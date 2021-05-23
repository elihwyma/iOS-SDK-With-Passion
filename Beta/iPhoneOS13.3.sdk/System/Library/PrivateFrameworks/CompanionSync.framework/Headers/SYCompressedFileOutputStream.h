/*
 Image: /System/Library/PrivateFrameworks/CompanionSync.framework/CompanionSync
 */

#import <NSOutputStream.h>

@class NSProgress, NSString, NSURL, _SYStreamGuts;

@interface SYCompressedFileOutputStream : NSOutputStream

{
    NSURL *_url;
    _Bool _append;
    int _fd;
    int _class;
    struct gzFile_s *_file;
    long long _level;
    struct os_unfair_lock_s _internalLock;
    _SYStreamGuts *_internal;
    CDUnknownBlockType _onOpenComplete;
    CDUnknownBlockType _onBytesAvailable;
    CDUnknownBlockType _onSpaceAvailable;
    CDUnknownBlockType _onEndOfFile;
    CDUnknownBlockType _onError;
    CDUnknownBlockType _onClose;
    NSProgress *_progress;
    unsigned long long _byteCount;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly, getter=_internal) _SYStreamGuts *internal;
@property (nonatomic) long long compressionLevel;
@property (copy, nonatomic) CDUnknownBlockType onOpenComplete;
@property (copy, nonatomic) CDUnknownBlockType onBytesAvailable;
@property (copy, nonatomic) CDUnknownBlockType onSpaceAvailable;
@property (copy, nonatomic) CDUnknownBlockType onEndOfFile;
@property (copy, nonatomic) CDUnknownBlockType onError;
@property (copy, nonatomic) CDUnknownBlockType onClose;
@property (nonatomic, readonly) unsigned long long bytesThroughput;
@property (retain, nonatomic) NSProgress *progress;

- (void)dealloc;
- (void)open;
- (void)close;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)propertyForKey:(id)arg1;
- (_Bool)setProperty:(id)arg1 forKey:(id)arg2;
- (void)scheduleInRunLoop:(id)arg1 forMode:(id)arg2;
- (void)removeFromRunLoop:(id)arg1 forMode:(id)arg2;
- (unsigned long long)streamStatus;
- (id)streamError;
- (id)initWithURL:(id)arg1 append:(_Bool)arg2;
- (id)initToFileAtPath:(id)arg1 append:(_Bool)arg2;
- (long long)write:(const char *)arg1 maxLength:(unsigned long long)arg2;
- (_Bool)hasSpaceAvailable;
- (void)stream:(id)arg1 handleEvent:(unsigned long long)arg2;
- (void)_SY_notifyOnQueue:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)_postEventToDelegate:(unsigned long long)arg1;
- (id)initToCompressedFileAtURL:(id)arg1 shouldAppend:(_Bool)arg2;

@end
