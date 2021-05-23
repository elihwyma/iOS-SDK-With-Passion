/*
 Image: /System/Library/PrivateFrameworks/AudioServerDriver.framework/AudioServerDriver
 */

#import <Foundation/NSObject.h>

#import <AudioServerDriver/Swift-Protocol.h>

@class ASDStreamFormat, NSString;

@interface ASDRingBuffer : NSObject <Swift>

{
    struct unique_ptr<AudioRingBuffer, std::__1::default_delete<AudioRingBuffer>> _ringBuffer;
    _Bool _allocated;
    long long _frameCapacity;
    ASDStreamFormat *_writeFormat;
    ASDStreamFormat *_readFormat;
}

@property (nonatomic, getter=isAllocated) _Bool allocated;
@property (nonatomic) long long frameCapacity;
@property (copy, nonatomic) ASDStreamFormat *writeFormat;
@property (copy, nonatomic) ASDStreamFormat *readFormat;
@property (nonatomic, readonly) CDUnknownBlockType writeBlock;
@property (nonatomic, readonly) CDUnknownBlockType readBlock;
@property (nonatomic, readonly) CDUnknownBlockType readWithZerosBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)clear;
- (id).cxx_construct;
- (id)initWithFrameCapacity:(long long)arg1 writeFormat:(id)arg2 readFormat:(id)arg3;
- (void)allocate;
- (void)deallocate;
- (id)initWithFrameCapacity:(long long)arg1;

@end
