/*
 Image: /System/Library/PrivateFrameworks/LoggingSupport.framework/LoggingSupport
 */

#import <Foundation/NSObject.h>

@class NSString, _OSLogChunkStore, _OSLogIndex;

__attribute__((visibility("hidden")))
@interface _OSLogEnumeratorCatalog : NSObject

{
    struct _NSRange _chunkRange;
    _OSLogIndex *_index;
    struct catalog_s *_catalog;
    struct tracev3_chunk_s *_chunk;
    struct tracev3_chunk_s *_fileHeader;
    _OSLogChunkStore *_store;
    unsigned long long _ot;
    unsigned long long _et;
}

@property (nonatomic, readonly) const char *bootUUID;
@property (nonatomic, readonly) struct catalog_s *catalog;
@property (nonatomic, readonly) struct tracev3_chunk_s *fileHeader;
@property (nonatomic, readonly) struct tracev3_chunk_s *chunk;
@property (weak, nonatomic, readonly) _OSLogIndex *index;
@property (nonatomic, readonly) unsigned long long oldestTime;
@property (nonatomic, readonly) unsigned long long endTime;
@property (nonatomic, readonly) _OSLogChunkStore *store;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (void)unionWithRange:(struct _NSRange)arg1;
- (id)initWithStore:(id)arg1 index:(id)arg2 fileHeader:(struct tracev3_chunk_s *)arg3 range:(struct _NSRange)arg4 chunk:(struct tracev3_chunk_s *)arg5;
- (void)enumerateSubchunksUsingBlock:(CDUnknownBlockType)arg1;

@end
