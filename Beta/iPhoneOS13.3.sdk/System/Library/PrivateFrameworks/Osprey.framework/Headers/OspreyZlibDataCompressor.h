/*
 Image: /System/Library/PrivateFrameworks/Osprey.framework/Osprey
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface OspreyZlibDataCompressor : NSObject

{
    struct z_stream_s _deflateStream;
    unsigned char _deflateBuffer[8192];
}

- (id)init;
- (void)dealloc;
- (id)initWithOptions:(long long)arg1;
- (id)compressedDataForData:(id)arg1 error:(id *)arg2;

@end
