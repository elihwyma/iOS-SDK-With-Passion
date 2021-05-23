/*
 Image: /System/Library/PrivateFrameworks/QuickLookSupport.framework/QuickLookSupport
 */

#import <Foundation/NSObject.h>

@class NSData, NSError, NSURL, QLZipArchive;

@interface QLZipArchiveEntry : NSObject

{
    struct archive_entry *_entry;
    QLZipArchive *_archive;
    NSData *_data;
    NSError *_error;
}

@property struct archive_entry *entry;
@property (weak) QLZipArchive *archive;
@property (retain) NSData *data;
@property (nonatomic, readonly) NSURL *url;

- (id)readDataWithError:(id *)arg1;

@end
