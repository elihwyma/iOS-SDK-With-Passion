/*
 Image: /System/Library/PrivateFrameworks/MediaServices.framework/MediaServices
 */

#import <Foundation/NSObject.h>

@class NSInputStream, NSString;

@protocol OS_dispatch_queue;

@interface MSVStreamReader : NSObject

{
    _Bool _closeOnStop;
    _Bool _stopped;
    struct z_stream_s *_zstreamp;
    _Bool _compress;
    CDUnknownBlockType _didReadDataBlock;
    CDUnknownBlockType _didFinishReadingBlock;
    CDUnknownBlockType _didEncounterErrorBlock;
    unsigned long long _maximumBufferSize;
    double _timestamp;
    NSInputStream *_stream;
    NSObject<OS_dispatch_queue> *_queue;
}

@property (retain, nonatomic) NSInputStream *stream;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (copy, nonatomic) CDUnknownBlockType didReadDataBlock;
@property (copy, nonatomic) CDUnknownBlockType didFinishReadingBlock;
@property (copy, nonatomic) CDUnknownBlockType didEncounterErrorBlock;
@property (nonatomic) unsigned long long maximumBufferSize;
@property (nonatomic, getter=shouldCompress) _Bool compress;
@property (nonatomic, readonly) double timestamp;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (void)stream:(id)arg1 handleEvent:(unsigned long long)arg2;
- (void)stop;
- (void)start;
- (void)_stop;
- (id)initWithInputStream:(id)arg1 queue:(id)arg2;
- (_Bool)_shouldHandleEvent;
- (void)stopWithCompletion:(CDUnknownBlockType)arg1;
- (void)readAllDataWithCompletion:(CDUnknownBlockType)arg1;
- (id)_compressedDataForData:(id)arg1;
- (id)readAllDataWithError:(id *)arg1;
- (void)readAllDataIntoFileHandle:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;

@end
