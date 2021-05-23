/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <OfficeImport/TSUZipArchive.h>

@class TSUZipEntry;

__attribute__((visibility("hidden")))
@interface TSUContainedZipArchive : TSUZipArchive

{
    TSUZipArchive *_zipArchive;
    TSUZipEntry *_entry;
}

+ (id)zipArchiveFromEntry:(id)arg1 zipArchive:(id)arg2 options:(unsigned long long)arg3 error:(id *)arg4;

- (_Bool)isValid;
- (unsigned long long)archiveLength;
- (id)newArchiveReadChannel;
- (id)readChannelForEntry:(id)arg1 validateCRC:(_Bool)arg2;
- (id)streamReadChannelForEntry:(id)arg1 validateCRC:(_Bool)arg2;
- (id)initWithEntry:(id)arg1 zipArchive:(id)arg2 options:(unsigned long long)arg3;

@end
