/*
 Image: /System/Library/PrivateFrameworks/LoggingSupport.framework/LoggingSupport
 */

#import <Foundation/NSObject.h>

@class _OSLogEnumeratorCatalogSubchunk;

__attribute__((visibility("hidden")))
@interface _OSLogEnumeratorOversizeChunk : NSObject

{
    _OSLogEnumeratorCatalogSubchunk *_subchunk;
    struct tracev3_chunk_s *_chunk;
}

@property (nonatomic, readonly) unsigned long long timestamp;

- (long long)compare:(id)arg1;
- (id)initWithSubchunk:(id)arg1 chunk:(struct tracev3_chunk_s *)arg2;
- (_Bool)matches:(unsigned int)arg1 procinfo:(struct catalog_procinfo_s *)arg2;
- (void)fillMessage:(struct os_log_message_s *)arg1;
- (void)fillProxy:(id)arg1;

@end
