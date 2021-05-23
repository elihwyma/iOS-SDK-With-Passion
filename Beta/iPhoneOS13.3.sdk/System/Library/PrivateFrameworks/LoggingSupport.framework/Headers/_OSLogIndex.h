/*
 Image: /System/Library/PrivateFrameworks/LoggingSupport.framework/LoggingSupport
 */

#import <Foundation/NSObject.h>

@class NSMutableArray, NSString, _OSLogCollectionReference, _OSLogEventStoreMetadata;

__attribute__((visibility("hidden")))
@interface _OSLogIndex : NSObject

{
    NSMutableArray *_fileq;
    _OSLogCollectionReference *_lcr;
    NSString *_file;
    CDStruct_42ec109f _metadata;
    _Bool _metadataValid;
    _OSLogEventStoreMetadata *_metadata2;
    struct _os_timesync_db_s *_tsdb;
}

@property (nonatomic, readonly) struct _os_timesync_db_s *timesync;
@property (nonatomic, readonly) unsigned long long persistStartWalltime;
@property (nonatomic, readonly) unsigned long long specialStartWalltime;
@property (nonatomic, readonly) unsigned long long endWalltime;

- (id)init;
- (void)dealloc;
- (void)enumerateEntriesUsingBlock:(CDUnknownBlockType)arg1;
- (id)initWithCollection:(id)arg1 buildLocalIndex:(_Bool)arg2;
- (id)initWithCollection:(id)arg1 timesync:(struct _os_timesync_db_s *)arg2 metadata:(id)arg3;
- (_Bool)_readArchiveMetadata:(id *)arg1;
- (_Bool)_openTimesyncDatabase;
- (_Bool)addReferenceToIndex:(id)arg1 error:(id *)arg2;
- (_Bool)_addFileToIndex:(const char *)arg1 error:(id *)arg2;
- (void)_foreachIndexFile:(CDUnknownBlockType)arg1;
- (void)insertChunkStore:(id)arg1;
- (void)insertIndexFile:(id)arg1;
- (_Bool)_buildFileIndex;
- (_Bool)_buildSingleFileIndex:(id *)arg1;
- (void)enumerateEntriesFrom:(unsigned long long)arg1 to:(unsigned long long)arg2 options:(unsigned int)arg3 usingBlock:(CDUnknownBlockType)arg4;
- (void)enumerateEntriesFromLastBootWithOptions:(unsigned int)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (void)_enumerateEntriesInRange:(struct os_timesync_range_s *)arg1 options:(unsigned int)arg2 usingBlock:(CDUnknownBlockType)arg3;
- (void)enumerateEntriesInRange:(struct os_timesync_range_s *)arg1 options:(unsigned int)arg2 usingCatalogFilter:(id)arg3 usingBlock:(CDUnknownBlockType)arg4;
- (void)enumerateFilesUsingBlock:(CDUnknownBlockType)arg1;

@end
