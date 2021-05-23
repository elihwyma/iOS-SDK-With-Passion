/*
 Image: /System/Library/PrivateFrameworks/LoggingSupport.framework/LoggingSupport
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary, NSString, _OSLogEnumeratorCatalog;

__attribute__((visibility("hidden")))
@interface _OSLogEnumeratorCatalogSubchunk : NSObject

{
    NSMutableDictionary *_decompressedChunks;
    struct catalog_subchunk_s *_subchunk;
    struct _NSRange _range;
    _OSLogEnumeratorCatalog *_catalog;
    unsigned long long _ot;
    unsigned long long _et;
}

@property (nonatomic, readonly) _OSLogEnumeratorCatalog *catalog;
@property (nonatomic, readonly) unsigned long long oldestTime;
@property (nonatomic, readonly) unsigned long long endTime;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)enumerateChunksUsingBlock:(CDUnknownBlockType)arg1;
- (id)initWithCatalog:(id)arg1 subchunk:(struct catalog_subchunk_s *)arg2 range:(struct _NSRange)arg3;
- (id)initWithCatalog:(id)arg1 subchunk:(struct catalog_subchunk_s *)arg2 range:(struct _NSRange)arg3 oldestTime:(unsigned long long)arg4 endTime:(unsigned long long)arg5;
- (long long)oldestTimeCompare:(id)arg1;
- (long long)endTimeCompare:(id)arg1;
- (id)_decompressedBufferForChunk:(struct tracev3_chunk_s *)arg1 subchunk:(struct catalog_subchunk_s *)arg2;

@end
