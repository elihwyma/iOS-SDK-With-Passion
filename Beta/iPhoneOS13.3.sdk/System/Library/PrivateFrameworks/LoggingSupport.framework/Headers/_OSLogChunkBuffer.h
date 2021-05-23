/*
 Image: /System/Library/PrivateFrameworks/LoggingSupport.framework/LoggingSupport
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface _OSLogChunkBuffer : NSObject

{
    _Bool _allocated;
    const char *_data;
    unsigned long long _sz;
}

@property (nonatomic, readonly) const char *data;
@property (nonatomic, readonly) unsigned long long size;

- (void)dealloc;
- (id)initWithChunk:(struct tracev3_chunk_s *)arg1 subchunk:(struct catalog_subchunk_s *)arg2;

@end
