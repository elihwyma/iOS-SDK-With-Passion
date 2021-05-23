/*
 Image: /System/Library/PrivateFrameworks/AudioServerDriver.framework/AudioServerDriver
 */

#import <AudioServerDriver/Swift-Protocol.h>

@class ASDStreamFormat;

@protocol ASDRingBuffer <Swift>

@property (nonatomic) long long frameCapacity;
@property (copy, nonatomic) ASDStreamFormat *writeFormat;
@property (copy, nonatomic) ASDStreamFormat *readFormat;
@property (nonatomic, readonly) CDUnknownBlockType writeBlock;
@property (nonatomic, readonly) CDUnknownBlockType readBlock;
@property (nonatomic, readonly) CDUnknownBlockType readWithZerosBlock;
@property (nonatomic, readonly, getter=isAllocated) _Bool allocated;

- (unsigned short)clear;
- (unsigned short)allocate;
- (unsigned short)deallocate;

@end
