/*
 Image: /System/Library/PrivateFrameworks/MediaServices.framework/MediaServices
 */

#import <Foundation/NSObject.h>

@class NSData, NSFileHandle, NSMutableSet, NSPipe;

@protocol OS_dispatch_queue, OS_dispatch_source;

@interface MSVFileBufferedPipe : NSObject

{
    NSFileHandle *_writeBufferFileHandle;
    NSFileHandle *_readBufferFileHandle;
    NSPipe *_inputPipe;
    NSPipe *_outputPipe;
    NSObject<OS_dispatch_source> *_writeSource;
    NSObject<OS_dispatch_source> *_readSource;
    _Bool _readyForData;
    _Bool _hasBufferedData;
    _Bool _readSourceClosed;
    NSData *_dataPendingWrite;
    unsigned int _dataPendingOffset;
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableSet *_uniqueWriteErrors;
    long long _writeSourceState;
    NSFileHandle *_fileHandleForReading;
    NSFileHandle *_fileHandleForWriting;
}

@property (retain, readonly) NSFileHandle *fileHandleForReading;
@property (retain, readonly) NSFileHandle *fileHandleForWriting;

+ (id)pipe;

- (id)init;
- (void)_outputReadyForWriting:(unsigned long long)arg1;
- (void)_inputReadyForReading:(unsigned long long)arg1;
- (void)_writeBufferedData;
- (void)_createBufferFiles;

@end
