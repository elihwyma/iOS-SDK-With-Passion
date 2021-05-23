/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <Foundation/NSObject.h>

@class NSArray, NSDate, NSError, NSMutableArray, NSMutableDictionary, TSUZipWriterEntry;

@protocol OS_dispatch_data, OS_dispatch_queue, OS_dispatch_semaphore, TSURandomWriteChannel;

__attribute__((visibility("hidden")))
@interface TSUZipWriter : NSObject

{
    unsigned long long _options;
    NSObject<OS_dispatch_queue> *_channelQueue;
    id <TSURandomWriteChannel> _writeChannel;
    NSObject<OS_dispatch_semaphore> *_writeChannelCompletionSemaphore;
    NSMutableArray *_entries;
    NSArray *_sortedEntries;
    NSMutableDictionary *_entriesMap;
    TSUZipWriterEntry *_currentEntry;
    _Bool _isClosed;
    _Bool _calculateSize;
    _Bool _force32BitSize;
    _Bool _calculateCRC;
    unsigned long long _sizeToMatch;
    unsigned int _CRCToMatch;
    NSDate *_lastModificationDateIfSizeAndCRCMatches;
    NSDate *_newEntryLastModificationDate;
    long long _currentOffset;
    NSObject<OS_dispatch_data> *_localFileHeaderData;
    NSMutableArray *_entryDatas;
    unsigned long long _entryDataSize;
    NSObject<OS_dispatch_queue> *_writeQueue;
    long long _writtenOffset;
    NSError *_error;
}

@property (readonly) unsigned long long archiveLength;
@property (readonly) unsigned long long entriesCount;
@property (readonly) NSArray *sortedEntries;
@property (readonly) _Bool isClosed;

- (id)init;
- (id)initWithOptions:(unsigned long long)arg1;
- (void)writeData:(id)arg1;
- (void)addData:(id)arg1;
- (void)enumerateEntriesUsingBlock:(CDUnknownBlockType)arg1;
- (id)entryWithName:(id)arg1;
- (void)finishEntry;
- (void)writeZip64EndOfCentralDirectoryLocatorWithOffset:(long long)arg1;
- (void)closeWithQueue:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)localFileHeaderDataForEntry:(id)arg1;
- (void)flushEntryData;
- (void)writeData:(id)arg1 offset:(long long)arg2;
- (void)handleWriteError:(id)arg1;
- (void)writeCentralDirectory;
- (void)addBarrier:(CDUnknownBlockType)arg1;
- (unsigned long long)entriesCountImpl;
- (id)prepareWriteChannelWithCloseCompletionHandler:(CDUnknownBlockType)arg1;
- (void)beginEntryWithNameImpl:(id)arg1 force32BitSize:(_Bool)arg2 lastModificationDate:(id)arg3 size:(unsigned long long)arg4 CRC:(unsigned int)arg5 forceCalculatingSizeAndCRCForPreservingLastModificationDate:(_Bool)arg6;
- (void)addData:(id)arg1 queue:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)addDataImpl:(id)arg1 queue:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)writeData:(id)arg1 queue:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)p_writeChannel;
- (void)writeEntryWithName:(id)arg1 force32BitSize:(_Bool)arg2 lastModificationDate:(id)arg3 size:(unsigned long long)arg4 CRC:(unsigned int)arg5 fromReadChannel:(id)arg6 writeHandler:(CDUnknownBlockType)arg7;
- (void)writeEntryWithName:(id)arg1 force32BitSize:(_Bool)arg2 lastModificationDate:(id)arg3 size:(unsigned long long)arg4 CRC:(unsigned int)arg5 fromReadChannel:(id)arg6 completion:(CDUnknownBlockType)arg7;
- (void)addExistingEntryImpl:(id)arg1;
- (void)setEntryInsertionOffsetImpl:(long long)arg1;
- (void)writeCentralFileHeaderDataForEntry:(id)arg1;
- (void)writeEndOfCentralDirectoryDataWithOffset:(long long)arg1 size:(long long)arg2 entryCount:(unsigned long long)arg3;
- (void)writeZip64EndOfCentralDirectoryWithOffset:(long long)arg1 size:(long long)arg2 entryCount:(unsigned long long)arg3;
- (void)p_writeData:(id)arg1 offset:(long long)arg2 completion:(CDUnknownBlockType)arg3;
- (id)sortedEntriesImpl;
- (void)truncateToNumberOfEntriesImpl:(unsigned long long)arg1 completion:(CDUnknownBlockType)arg2;
- (void)truncateToOffsetImpl:(long long)arg1 completion:(CDUnknownBlockType)arg2;
- (void)beginEntryWithName:(id)arg1 force32BitSize:(_Bool)arg2 lastModificationDate:(id)arg3 size:(unsigned long long)arg4 CRC:(unsigned int)arg5 forceCalculatingSizeAndCRCForPreservingLastModificationDate:(_Bool)arg6;
- (void)flushCurrentEntryWithQueue:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)writeEntryWithName:(id)arg1 force32BitSize:(_Bool)arg2 fromReadChannel:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)addExistingEntry:(id)arg1;
- (void)setEntryInsertionOffset:(long long)arg1;
- (void)truncateToNumberOfEntries:(unsigned long long)arg1 completion:(CDUnknownBlockType)arg2;
- (void)truncateToOffset:(long long)arg1 completion:(CDUnknownBlockType)arg2;

@end
