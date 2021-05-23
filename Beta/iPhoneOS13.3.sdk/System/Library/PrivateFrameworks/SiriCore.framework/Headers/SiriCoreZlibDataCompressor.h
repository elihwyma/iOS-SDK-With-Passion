/*
 Image: /System/Library/PrivateFrameworks/SiriCore.framework/SiriCore
 */

#import <SiriCore/SiriCoreDataCompressor.h>

@interface SiriCoreZlibDataCompressor : SiriCoreDataCompressor

{
    struct z_stream_s _deflateStream;
    unsigned char _deflateBuffer[8192];
}

- (id)init;
- (void)dealloc;
- (id)compressedDataForData:(id)arg1 error:(id *)arg2;

@end
