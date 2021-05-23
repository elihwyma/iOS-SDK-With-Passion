/*
 Image: /System/Library/PrivateFrameworks/CompanionSync.framework/CompanionSync
 */

#import <NSInputStream.h>

@class NSProgress, NSString, NSURL, _SYStreamGuts;

@interface SYCompressedFileInputStream : NSInputStream

{
    NSURL *_url;
    struct gzFile_s *_file;
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
@property (copy, nonatomic) CDUnknownBlockType onOpenComplete;
@property (copy, nonatomic) CDUnknownBlockType onBytesAvailable;
@property (copy, nonatomic) CDUnknownBlockType onSpaceAvailable;
@property (copy, nonatomic) CDUnknownBlockType onEndOfFile;
@property (copy, nonatomic) CDUnknownBlockType onError;
@property (copy, nonatomic) CDUnknownBlockType onClose;
@property (nonatomic, readonly) unsigned long long bytesThroughput;
@property (retain, nonatomic) NSProgress *progress;

- (void)dealloc;
- (id)initWithURL:(id)arg1;
- (id)initWithData:(id)arg1;
- (id)initWithFileAtPath:(id)arg1;
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
- (long long)read:(char *)arg1 maxLength:(unsigned long long)arg2;
- (_Bool)getBuffer:(char **)arg1 length:(unsigned long long *)arg2;
- (_Bool)hasBytesAvailable;
- (void)stream:(id)arg1 handleEvent:(unsigned long long)arg2;
- (void)_SY_notifyOnQueue:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (id)initWithCompressedFileAtURL:(id)arg1;
- (void)_postEventToDelegate:(unsigned long long)arg1;

@end
