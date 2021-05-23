/*
 Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

#import <Foundation/NSObject.h>

@class NSData, NSFileHandle, NSInputStream, NSMutableArray, NSOutputStream, NSString;

@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface CKDProtobufStreamWriter : NSObject

{
    NSMutableArray *_allObjects;
    NSData *_curData;
    unsigned long long _curDataPos;
    NSInputStream *_inputStream;
    NSOutputStream *_outputStream;
    struct z_stream_s _zlibStream;
    _Bool _haveFlushedZlib;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    _Bool _shouldCompress;
    _Bool _hasInitedCompression;
    _Bool _haveFinishedCompression;
    _Bool _haveFinishedStreaming;
    unsigned long long _bufferSize;
    CDUnknownBlockType _logRequestObjectBlock;
    NSFileHandle *_binaryLogFileHandle;
}

@property (nonatomic) _Bool shouldCompress;
@property (nonatomic) _Bool hasInitedCompression;
@property (nonatomic) _Bool haveFinishedCompression;
@property _Bool haveFinishedStreaming;
@property (nonatomic) unsigned long long bufferSize;
@property (copy, nonatomic) CDUnknownBlockType logRequestObjectBlock;
@property (retain, nonatomic) NSFileHandle *binaryLogFileHandle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (id)open;
- (void)stream:(id)arg1 handleEvent:(unsigned long long)arg2;
- (void)tearDown;
- (id)_dataForMessage:(id)arg1;
- (void)setStreamedObjects:(id)arg1;
- (id)initWithCompression:(_Bool)arg1;
- (void)_tearDownOutputStream;
- (id)_compressBodyData:(id)arg1 shouldFlush:(_Bool)arg2;
- (long long)_streamNextObject:(id)arg1;
- (void)_prepareObjectForStreaming:(id)arg1;
- (long long)_writeDataToStream:(id)arg1;
- (_Bool)_finishStreaming:(id)arg1;

@end
