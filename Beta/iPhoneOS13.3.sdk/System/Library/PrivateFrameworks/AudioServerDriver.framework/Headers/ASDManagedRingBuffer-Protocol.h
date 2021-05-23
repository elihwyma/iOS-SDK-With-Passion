/*
 Image: /System/Library/PrivateFrameworks/AudioServerDriver.framework/AudioServerDriver
 */

#import <AudioServerDriver/Swift-Protocol.h>

@protocol ASDManagedRingBuffer <Swift>

@property (nonatomic, readonly) _Bool readerRunning;
@property (nonatomic, readonly) _Bool writerRunning;

- (unsigned short)startReader;
- (unsigned short)stopReader;
- (unsigned short)startWriter;
- (unsigned short)stopWriter;

@end
