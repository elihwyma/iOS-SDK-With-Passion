/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <Foundation/NSObject.h>

#import <OfficeImport/Swift-Protocol.h>

@class NSString;

@protocol OISFUBufferedInputStream;

__attribute__((visibility("hidden")))
@interface OISFUZipInflateInputStream : NSObject <Swift>

{
    struct z_stream_s mStream;
    long long mOffset;
    id <OISFUBufferedInputStream> mInput;
    char *mOutBuffer;
    unsigned long long mOutBufferSize;
    _Bool mReachedEnd;
    _Bool mIsFromZip;
    unsigned long long mCalculatedCrc;
    unsigned long long mCheckCrc;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (void)close;
- (long long)offset;
- (void)seekToOffset:(long long)arg1;
- (_Bool)canSeek;
- (id)initWithInput:(id)arg1;
- (unsigned long long)readToBuffer:(char *)arg1 size:(unsigned long long)arg2;
- (void)disableSystemCaching;
- (void)enableSystemCaching;
- (id)closeLocalStream;
- (unsigned long long)readToOwnBuffer:(const char **)arg1 size:(unsigned long long)arg2;
- (id)initWithOffset:(long long)arg1 end:(long long)arg2 uncompressedSize:(unsigned long long)arg3 crc:(unsigned long long)arg4 dataRepresentation:(id)arg5;
- (void)setupInflateStream;
- (long long)totalCompressedBytesConsumed;

@end
