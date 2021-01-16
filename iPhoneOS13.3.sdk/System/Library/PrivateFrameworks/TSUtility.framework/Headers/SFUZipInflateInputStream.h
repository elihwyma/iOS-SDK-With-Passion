//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <TSUtility/SFUInputStream-Protocol.h>

@protocol SFUBufferedInputStream;

@interface SFUZipInflateInputStream : NSObject <SFUInputStream>
{
    struct z_stream_s mStream;
    long long mOffset;
    id <SFUBufferedInputStream> mInput;
    char mOutBuffer;
    NSUInteger mOutBufferSize;
    BOOL mReachedEnd;
    BOOL mIsFromZip;
    NSUInteger mCalculatedCrc;
    NSUInteger mCheckCrc;
}

- (long long)totalCompressedBytesConsumed;
- (id)closeLocalStream;
- (void)close;
- (void)enableSystemCaching;
- (void)disableSystemCaching;
- (long long)offset;
- (BOOL)canSeek;
- (void)seekToOffset:(long long)arg1;
- (NSUInteger)readToBuffer:(char )arg1 size:(NSUInteger)arg2;
- (NSUInteger)readToOwnBuffer:(const char )arg1 size:(NSUInteger)arg2;
- (void)dealloc;
- (id)initWithInput:(id)arg1;
- (id)initWithOffset:(long long)arg1 end:(long long)arg2 uncompressedSize:(NSUInteger)arg3 crc:(NSUInteger)arg4 dataRepresentation:(id)arg5;
- (void)setupInflateStream;

@end
