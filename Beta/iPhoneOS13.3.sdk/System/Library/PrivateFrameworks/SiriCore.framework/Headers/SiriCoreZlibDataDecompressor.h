/*
 Image: /System/Library/PrivateFrameworks/SiriCore.framework/SiriCore
 */

#import <SiriCore/SiriCoreDataDecompressor.h>

@interface SiriCoreZlibDataDecompressor : SiriCoreDataDecompressor

{
    struct z_stream_s _inflateStream;
    unsigned char _inflateBuffer[8192];
}

- (id)init;
- (void)dealloc;
- (id)decompressedDataForData:(id)arg1 error:(id *)arg2;

@end
