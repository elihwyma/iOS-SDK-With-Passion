/*
 Image: /System/Library/PrivateFrameworks/CompanionSync.framework/CompanionSync
 */

#import <CompanionSync/_SYStreamGuts.h>

@interface _SYZlibStreamInternal : _SYStreamGuts

{
    struct z_stream_s _zStream;
    unsigned long long _inputSize;
    unsigned long long _outputSize;
    char *_input;
    char *_output;
    unsigned long long _writeOffset;
    unsigned long long _readOffset;
    struct os_unfair_lock_s _lock;
}

@property (nonatomic, readonly) long long inputRoom;
@property (nonatomic, readonly) void *inputPtr;
@property (nonatomic, readonly) long long outputAvailable;
@property (nonatomic, readonly) const void *outputPtr;

- (id)init;
- (void)dealloc;
- (void)lock;
- (void)unlock;
- (void)setInputSize:(long long)arg1;
- (void)setOutputSize:(long long)arg1;
- (void)synchronized:(CDUnknownBlockType)arg1;
- (void)setZlibError:(int)arg1 forStream:(id)arg2;
- (void)setStatusForStream:(id)arg1;
- (long long)writeInputFromBuffer:(const void *)arg1 length:(long long)arg2;
- (long long)writeInputFromStream:(id)arg1;
- (long long)readOutputToBuffer:(void *)arg1 length:(long long)arg2;
- (long long)readOutputToStream:(id)arg1;

@end
