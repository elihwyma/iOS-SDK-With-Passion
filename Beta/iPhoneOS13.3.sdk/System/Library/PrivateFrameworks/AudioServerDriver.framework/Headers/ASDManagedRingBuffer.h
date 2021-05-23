/*
 Image: /System/Library/PrivateFrameworks/AudioServerDriver.framework/AudioServerDriver
 */

#import <AudioServerDriver/ASDRingBuffer.h>

@class ASDStreamFormat, NSObject, NSString;

@protocol OS_dispatch_queue;

@interface ASDManagedRingBuffer : ASDRingBuffer

{
    NSObject<OS_dispatch_queue> *_queue;
    _Bool _readerRunning;
    _Bool _writerRunning;
}

@property (nonatomic) _Bool readerRunning;
@property (nonatomic) _Bool writerRunning;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic) long long frameCapacity;
@property (copy, nonatomic) ASDStreamFormat *writeFormat;
@property (copy, nonatomic) ASDStreamFormat *readFormat;
@property (nonatomic, readonly) CDUnknownBlockType writeBlock;
@property (nonatomic, readonly) CDUnknownBlockType readBlock;
@property (nonatomic, readonly) CDUnknownBlockType readWithZerosBlock;
@property (nonatomic, readonly, getter=isAllocated) _Bool allocated;

- (id)initWithFrameCapacity:(long long)arg1 writeFormat:(id)arg2 readFormat:(id)arg3;
- (void)startReader;
- (void)stopReader;
- (void)startWriter;
- (void)stopWriter;

@end
