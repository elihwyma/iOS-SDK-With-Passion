/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <OfficeImport/ESDBlipContext.h>

__attribute__((visibility("hidden")))
@interface ESDMetafileBlipContext : ESDBlipContext

{
    unsigned int mCb;
    unsigned int defaultHeaderSize;
}

@property unsigned int defaultHeaderSize;

- (_Bool)loadDelayedNode:(id)arg1;
- (id)initWithOffset:(unsigned int)arg1 byteCount:(unsigned int)arg2 uncompressed:(unsigned int)arg3 stream:(struct SsrwOOStream *)arg4 streamID:(unsigned int)arg5;

@end
