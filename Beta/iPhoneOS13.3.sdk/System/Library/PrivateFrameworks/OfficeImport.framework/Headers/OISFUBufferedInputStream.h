/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <Foundation/NSObject.h>

@class NSString;

@protocol SFUInputStream;

__attribute__((visibility("hidden")))
@interface OISFUBufferedInputStream : NSObject

{
    id <SFUInputStream> mStream;
    char *mBuffer;
    unsigned long long mBufferSize;
    long long mBufferOffset;
    long long mBufferStart;
    long long mBufferEnd;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (void)close;
- (id)initWithStream:(id)arg1;
- (long long)offset;
- (void)seekToOffset:(long long)arg1;
- (_Bool)canSeek;
- (unsigned long long)readToBuffer:(char *)arg1 size:(unsigned long long)arg2;
- (void)disableSystemCaching;
- (void)enableSystemCaching;
- (id)closeLocalStream;
- (unsigned long long)readToOwnBuffer:(const char **)arg1 size:(unsigned long long)arg2;
- (id)initWithStream:(id)arg1 bufferSize:(unsigned long long)arg2;
- (_Bool)seekWithinBufferToOffset:(long long)arg1;
- (id)initWithStream:(id)arg1 dataLength:(long long)arg2;

@end
