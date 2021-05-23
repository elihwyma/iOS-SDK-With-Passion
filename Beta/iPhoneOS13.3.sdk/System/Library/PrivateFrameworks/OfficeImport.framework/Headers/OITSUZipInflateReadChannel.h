/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <Foundation/NSObject.h>

#import <OfficeImport/Swift-Protocol.h>

@class NSString;

@protocol TSUStreamReadChannel;

__attribute__((visibility("hidden")))
@interface OITSUZipInflateReadChannel : NSObject <Swift>

{
    id <TSUStreamReadChannel> _readChannel;
    unsigned long long _remainingUncompressedSize;
    unsigned int _CRC;
    _Bool _validateCRC;
    struct z_stream_s _stream;
    unsigned long long _outBufferSize;
    char *_outBuffer;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (void)close;
- (void)readWithHandler:(CDUnknownBlockType)arg1;
- (id)initWithReadChannel:(id)arg1 uncompressedSize:(unsigned long long)arg2 CRC:(unsigned int)arg3 validateCRC:(_Bool)arg4;
- (void)handleFailureWithHandler:(CDUnknownBlockType)arg1 error:(id)arg2;
- (void)prepareBuffer;
- (_Bool)processData:(id)arg1 inflateResult:(int *)arg2 CRC:(unsigned int *)arg3 isDone:(_Bool)arg4 handler:(CDUnknownBlockType)arg5;

@end
