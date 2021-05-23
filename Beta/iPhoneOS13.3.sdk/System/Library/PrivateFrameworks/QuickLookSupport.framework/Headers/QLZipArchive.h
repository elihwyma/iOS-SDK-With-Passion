/*
 Image: /System/Library/PrivateFrameworks/QuickLookSupport.framework/QuickLookSupport
 */

#import <Foundation/NSObject.h>

@class NSData, NSFileWrapper, NSURL;

@interface QLZipArchive : NSObject

{
    struct archive *_archive;
    NSURL *_url;
    NSData *_data;
    NSFileWrapper *_fileWrapper;
}

- (void)dealloc;
- (id)initWithData:(id)arg1 error:(id *)arg2;
- (id)initWithURL:(id)arg1 error:(id *)arg2;
- (id)fileWrapper;
- (void)enumerateEntriesWithHandler:(CDUnknownBlockType)arg1;
- (id)readCurrentDataWithEntry:(struct archive_entry *)arg1 error:(id *)arg2;
- (_Bool)_reopenWithError:(id *)arg1;
- (id)libarchiveError;

@end
