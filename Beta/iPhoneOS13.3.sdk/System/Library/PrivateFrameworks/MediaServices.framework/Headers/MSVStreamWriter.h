/*
 Image: /System/Library/PrivateFrameworks/MediaServices.framework/MediaServices
 */

#import <Foundation/NSObject.h>

@class NSInputStream, NSMutableArray, NSOutputStream, NSString;

@protocol OS_dispatch_queue;

@interface MSVStreamWriter : NSObject

{
    NSMutableArray *_pendingWriteDataList;
    _Bool _stopped;
    _Bool _closeOnStop;
    struct z_stream_s *_zstreamp;
    _Bool _compressed;
    unsigned long long _maximumBufferSize;
    double _timestamp;
    unsigned long long _bytesWritten;
    CDUnknownBlockType _canWriteDataBlock;
    CDUnknownBlockType _didFinishWritingBlock;
    CDUnknownBlockType _didEncounterErrorBlock;
    NSOutputStream *_outputStream;
    NSInputStream *_inputStream;
    NSObject<OS_dispatch_queue> *_queue;
}

@property (retain, nonatomic) NSOutputStream *outputStream;
@property (retain, nonatomic) NSInputStream *inputStream;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic) double timestamp;
@property (nonatomic) unsigned long long bytesWritten;
@property (nonatomic) unsigned long long maximumBufferSize;
@property (nonatomic, getter=isCompressed) _Bool compressed;
@property (copy, nonatomic) CDUnknownBlockType canWriteDataBlock;
@property (copy, nonatomic) CDUnknownBlockType didFinishWritingBlock;
@property (copy, nonatomic) CDUnknownBlockType didEncounterErrorBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)stream:(id)arg1 handleEvent:(unsigned long long)arg2;
- (void)stop;
- (void)start;
- (id)initWithQueue:(id)arg1;
- (void)stopWithCompletion:(CDUnknownBlockType)arg1;
- (void)_onQueue_stop;
- (void)_writeAvailablePendingData;
- (id)_decompressData:(id)arg1;
- (_Bool)writeAllData:(id)arg1 error:(id *)arg2;
- (id)initWithOutputStream:(id)arg1 queue:(id)arg2;
- (void)writeAllData:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)writeData:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)writeStreamError:(CDStruct_87dc826d)arg1;

@end
