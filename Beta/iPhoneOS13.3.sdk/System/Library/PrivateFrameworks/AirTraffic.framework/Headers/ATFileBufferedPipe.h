/*
 Image: /System/Library/PrivateFrameworks/AirTraffic.framework/AirTraffic
 */

#import <Foundation/NSObject.h>

@class ATFileBuffer, NSFileHandle, NSPipe;

@protocol OS_dispatch_queue, OS_dispatch_source;

@interface ATFileBufferedPipe : NSObject

{
    ATFileBuffer *_buffer;
    NSObject<OS_dispatch_queue> *_queue;
    NSPipe *_inputPipe;
    NSPipe *_outputPipe;
    NSObject<OS_dispatch_source> *_writeSource;
    NSObject<OS_dispatch_source> *_readSource;
    _Bool _readyForData;
    _Bool _readyToClose;
    NSFileHandle *_fileHandleForReading;
    NSFileHandle *_fileHandleForWriting;
}

@property (retain, readonly) NSFileHandle *fileHandleForReading;
@property (retain, readonly) NSFileHandle *fileHandleForWriting;

+ (id)pipe;

- (id)init;
- (void)_outputReadyForWriting:(unsigned long long)arg1;
- (void)_inputReadyForReading:(unsigned long long)arg1;
- (id)_bufferedWrite:(id)arg1;

@end
