/*
 Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

#import <Foundation/NSObject.h>

@class NSData, NSError, NSString;

@interface _HKZipArchiveExtractor : NSObject

{
    NSString *_pathname;
    NSData *_archiveData;
    struct archive *_archive;
    struct archive_entry *_entry;
    _Bool _dataRead;
    NSData *_data;
    NSError *_lastError;
    _Bool _hasCalculatedNumberOfEntries;
    unsigned long long _numberOfEntries;
}

- (id)initWithURL:(id)arg1;
- (id)initWithData:(id)arg1;
- (id)lastError;
- (void)_clearState;
- (unsigned long long)numberOfEntries;
- (void)_logError:(id)arg1;
- (id)getDataForCurrentEntryWithMaxSizeBytes:(unsigned long long)arg1;
- (id)_getDataForCurrentEntryWithSize:(unsigned long long)arg1;
- (id)_getDataForCurrentEntryWithBufferingWithMaxSizeBytes:(unsigned long long)arg1;
- (void)enumerateEntriesUsingBlock:(CDUnknownBlockType)arg1;
- (_Bool)_enumerateLinesInCurrentEntryWithBlock:(CDUnknownBlockType)arg1;
- (id)initWithPathname:(id)arg1;
- (id)getDataForCurrentEntry;
- (_Bool)enumerateLinesInCurrentEntryWithError:(id *)arg1 block:(CDUnknownBlockType)arg2;

@end
