/*
 Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <Foundation/NSFileHandle.h>

@class NSObject;

@protocol OS_dispatch_data, OS_dispatch_io, OS_dispatch_queue, OS_dispatch_source;

__attribute__((visibility("hidden")))
@interface NSConcreteFileHandle : NSFileHandle

{
    struct os_unfair_lock_s _lock;
    _Atomic int _error;
    _Atomic int _resultSocket;
    NSObject<OS_dispatch_source> *_dsrc;
    NSObject<OS_dispatch_data> *_resultData;
    NSObject<OS_dispatch_queue> *_fhQueue;
    NSObject<OS_dispatch_io> *_readChannel;
    CDUnknownBlockType _readabilityHandler;
    CDUnknownBlockType _writeabilityHandler;
    NSObject<OS_dispatch_source> *_readMonitoringSource;
    NSObject<OS_dispatch_source> *_writeMonitoringSource;
    NSObject<OS_dispatch_queue> *_monitoringQueue;
    int _fd;
    _Atomic unsigned short _flags;
}

- (id)init;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)port;
- (int)fileDescriptor;
- (_Bool)writeData:(id)arg1 error:(out id *)arg2;
- (void)writeData:(id)arg1;
- (id)initWithFileDescriptor:(int)arg1 closeOnDealloc:(_Bool)arg2;
- (id)initWithPath:(id)arg1 flags:(long long)arg2 createMode:(long long)arg3 error:(id *)arg4;
- (id)initWithPath:(id)arg1 flags:(long long)arg2 createMode:(long long)arg3;
- (id)initWithURL:(id)arg1 flags:(long long)arg2 createMode:(long long)arg3 error:(id *)arg4;
- (id)readDataToEndOfFile;
- (id)readDataOfLength:(unsigned long long)arg1;
- (unsigned long long)offsetInFile;
- (unsigned long long)seekToEndOfFile;
- (void)seekToFileOffset:(unsigned long long)arg1;
- (void)truncateFileAtOffset:(unsigned long long)arg1;
- (void)synchronizeFile;
- (void)closeFile;
- (id)initWithFileDescriptor:(int)arg1;
- (id)availableData;
- (id)readDataToEndOfFileAndReturnError:(out id *)arg1;
- (id)readDataUpToLength:(unsigned long long)arg1 error:(out id *)arg2;
- (_Bool)getOffset:(out unsigned long long *)arg1 error:(out id *)arg2;
- (_Bool)seekToEndReturningOffset:(out unsigned long long *)arg1 error:(out id *)arg2;
- (_Bool)seekToOffset:(unsigned long long)arg1 error:(out id *)arg2;
- (_Bool)truncateAtOffset:(unsigned long long)arg1 error:(out id *)arg2;
- (_Bool)synchronizeAndReturnError:(out id *)arg1;
- (_Bool)closeAndReturnError:(out id *)arg1;
- (CDUnknownBlockType)writeabilityHandler;
- (void)setWriteabilityHandler:(CDUnknownBlockType)arg1;
- (CDUnknownBlockType)readabilityHandler;
- (void)setReadabilityHandler:(CDUnknownBlockType)arg1;
- (void)_closeOnDealloc;
- (void)_locked_clearHandler:(CDUnknownBlockType *)arg1 forSource:(id *)arg2;
- (void)_cancelDispatchSources;
- (void)performActivity:(long long)arg1 modes:(id)arg2;
- (void)readInBackgroundAndNotifyForModes:(id)arg1;
- (void)readToEndOfFileInBackgroundAndNotifyForModes:(id)arg1;
- (void)acceptConnectionInBackgroundAndNotifyForModes:(id)arg1;
- (void)waitForDataInBackgroundAndNotifyForModes:(id)arg1;
- (id)_monitor:(int)arg1;
- (unsigned long long)readDataOfLength:(unsigned long long)arg1 buffer:(char *)arg2;
- (void)setPort:(id)arg1;
- (void)readInBackgroundAndNotify;
- (void)readToEndOfFileInBackgroundAndNotify;
- (void)acceptConnectionInBackgroundAndNotify;
- (void)waitForDataInBackgroundAndNotify;

@end
