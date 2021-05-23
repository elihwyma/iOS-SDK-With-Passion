/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <Foundation/NSObject.h>

@class NSString;

@protocol OS_dispatch_io, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface TSUFileIOChannel : NSObject

{
    NSObject<OS_dispatch_queue> *_ioQueue;
    NSObject<OS_dispatch_io> *_channel;
    _Bool _isClosed;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) _Bool isValid;

- (void)dealloc;
- (void)close;
- (void)flushWithCompletion:(CDUnknownBlockType)arg1;
- (void)setLowWater:(unsigned long long)arg1;
- (void)addBarrier:(CDUnknownBlockType)arg1;
- (void)readWithHandler:(CDUnknownBlockType)arg1;
- (void)writeData:(id)arg1 offset:(long long)arg2 handler:(CDUnknownBlockType)arg3;
- (void)readFromOffset:(long long)arg1 length:(unsigned long long)arg2 handler:(CDUnknownBlockType)arg3;
- (id)initForStreamWritingURL:(id)arg1 error:(id *)arg2;
- (void)writeData:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (id)initForReadingDescriptor:(int)arg1 queue:(id)arg2 cleanupHandler:(CDUnknownBlockType)arg3;
- (id)initForRandomWritingURL:(id)arg1 error:(id *)arg2 cleanupHandler:(CDUnknownBlockType)arg3;
- (id)initForRandomReadingWritingURL:(id)arg1 error:(id *)arg2 cleanupHandler:(CDUnknownBlockType)arg3;
- (void)truncateToLength:(long long)arg1 completion:(CDUnknownBlockType)arg2;
- (id)initForReadingURL:(id)arg1 error:(id *)arg2;
- (id)initForReadingURL:(id)arg1 error:(id *)arg2 cleanupHandler:(CDUnknownBlockType)arg3;
- (id)initWithType:(unsigned long long)arg1 URL:(id)arg2 oflag:(int)arg3 mode:(unsigned short)arg4 error:(id *)arg5 cleanupHandler:(CDUnknownBlockType)arg6;
- (id)initWithType:(unsigned long long)arg1 descriptor:(int)arg2 queue:(id)arg3 cleanupHandler:(CDUnknownBlockType)arg4;
- (id)initForStreamWritingURL:(id)arg1 error:(id *)arg2 cleanupHandler:(CDUnknownBlockType)arg3;
- (id)initForRandomWritingURL:(id)arg1 error:(id *)arg2;
- (id)initForRandomReadingWritingURL:(id)arg1 error:(id *)arg2;

@end
