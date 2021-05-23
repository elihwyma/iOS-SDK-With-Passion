/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <OfficeImport/TSUZipArchive.h>

@class NSObject, NSURL, TSUZipFileDescriptorWrapper;

@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface TSUZipFileArchive : TSUZipArchive

{
    NSObject<OS_dispatch_queue> *_accessQueue;
    unsigned long long _archiveLength;
    TSUZipFileDescriptorWrapper *_fdWrapper;
    NSURL *_temporaryDirectoryURL;
    NSURL *_URL;
}

+ (void)readArchiveFromURL:(id)arg1 options:(unsigned long long)arg2 queue:(id)arg3 completion:(CDUnknownBlockType)arg4;
+ (_Bool)isZipArchiveAtFD:(int)arg1;
+ (_Bool)isZipArchiveAtURL:(id)arg1 error:(id *)arg2;
+ (id)zipArchiveFromURL:(id)arg1 options:(unsigned long long)arg2 error:(id *)arg3;

- (void)dealloc;
- (id)debugDescription;
- (_Bool)isValid;
- (id)URL;
- (void)removeTemporaryDirectory;
- (unsigned long long)archiveLength;
- (void)createTemporaryDirectoryRelativeToURL:(id)arg1;
- (id)initForReadingFromURL:(id)arg1 options:(unsigned long long)arg2 error:(id *)arg3;
- (_Bool)openWithURL:(id)arg1 error:(id *)arg2;
- (_Bool)reopenWithTemporaryURL:(id)arg1 error:(id *)arg2;
- (id)initWithWriter:(id)arg1 forReadingFromURL:(id)arg2 options:(unsigned long long)arg3 error:(id *)arg4;
- (_Bool)copyToTemporaryLocationRelativeToURL:(id)arg1 error:(id *)arg2;
- (id)newArchiveReadChannel;

@end
