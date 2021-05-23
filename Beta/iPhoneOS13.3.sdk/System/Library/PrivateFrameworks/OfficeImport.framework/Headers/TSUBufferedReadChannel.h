/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <Foundation/NSObject.h>

@class NSArray, NSError, NSString;

@protocol OS_dispatch_data, OS_dispatch_queue, TSUReadChannel, TSUStreamReadChannel;

__attribute__((visibility("hidden")))
@interface TSUBufferedReadChannel : NSObject

{
    NSObject<OS_dispatch_queue> *_readQueue;
    id <TSUReadChannel> _sourceReadChannel;
    unsigned long long _sourceReadBufferSize;
    long long _sourceOffset;
    unsigned long long _sourceLength;
    NSError *_sourceReadChannelError;
    NSArray *_blockInfos;
    CDUnknownBlockType _streamReadChannelBlock;
    id <TSUStreamReadChannel> _streamReadChannel;
    CDUnknownBlockType _streamReadChannelSourceHandler;
    _Bool _isStreamOutputDone;
    long long _streamOutputOffset;
    unsigned long long _streamOutputOutstandingLength;
    unsigned long long _streamOutputLength;
    NSObject<OS_dispatch_data> *_currentStreamOutputData;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) _Bool isValid;

- (void)dealloc;
- (void)close;
- (void)_close;
- (void)setLowWater:(unsigned long long)arg1;
- (void)addBarrier:(CDUnknownBlockType)arg1;
- (void)_closeStreamReadChannel;
- (id)_currentDataIntersectionWithOffset:(long long)arg1 length:(unsigned long long)arg2 isReadDone:(_Bool *)arg3;
- (void)readWithHandler:(CDUnknownBlockType)arg1;
- (void)readFromOffset:(long long)arg1 length:(unsigned long long)arg2 handler:(CDUnknownBlockType)arg3;
- (void)setStreamReadChannelSourceHandler:(CDUnknownBlockType)arg1;
- (id)initWithReadChannel:(id)arg1 blockInfos:(id)arg2 streamReadChannelBlock:(CDUnknownBlockType)arg3;
- (id)initWithReadChannel:(id)arg1 sourceReadBufferSize:(unsigned long long)arg2 blockInfos:(id)arg3 streamReadChannelBlock:(CDUnknownBlockType)arg4;
- (void)_readFromOffset:(long long)arg1 length:(unsigned long long)arg2 handler:(CDUnknownBlockType)arg3;
- (void)_resetStreamReadChannelIfNeededForOffset:(long long)arg1 length:(unsigned long long)arg2;

@end
