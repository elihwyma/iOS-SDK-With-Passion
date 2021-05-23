/*
 Image: /System/Library/PrivateFrameworks/CompanionSync.framework/CompanionSync
 */

#import <NSOutputStream.h>

@class NSProgress, NSString, _SYStreamGuts, _SYZlibStreamInternal;

@interface SYCompressingOutputStream : NSOutputStream

{
    NSOutputStream *_stream;
    _SYZlibStreamInternal *_internal;
    CDUnknownBlockType _onOpenComplete;
    CDUnknownBlockType _onBytesAvailable;
    CDUnknownBlockType _onSpaceAvailable;
    CDUnknownBlockType _onEndOfFile;
    CDUnknownBlockType _onError;
    CDUnknownBlockType _onClose;
    NSProgress *_progress;
    unsigned long long _byteCount;
    long long _level;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly, getter=_internal) _SYStreamGuts *internal;
@property (nonatomic) unsigned long long inputBufferSize;
@property (nonatomic) unsigned long long outputBufferSize;
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
- (id)propertyForKey:(id)arg1;
- (_Bool)setProperty:(id)arg1 forKey:(id)arg2;
- (void)scheduleInRunLoop:(id)arg1 forMode:(id)arg2;
- (void)removeFromRunLoop:(id)arg1 forMode:(id)arg2;
- (unsigned long long)streamStatus;
- (id)streamError;
- (id)initWithURL:(id)arg1 append:(_Bool)arg2;
- (id)initToMemory;
- (id)initToBuffer:(char *)arg1 capacity:(unsigned long long)arg2;
- (id)initToFileAtPath:(id)arg1 append:(_Bool)arg2;
- (long long)write:(const char *)arg1 maxLength:(unsigned long long)arg2;
- (_Bool)hasSpaceAvailable;
- (void)stream:(id)arg1 handleEvent:(unsigned long long)arg2;
- (void)_SY_notifyOnQueue:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)_dispatchMyEvent:(unsigned long long)arg1;
- (int)_handlePendingInput;
- (void)_postEventToDelegate:(unsigned long long)arg1;
- (id)initWithDestinationStream:(id)arg1;

@end
