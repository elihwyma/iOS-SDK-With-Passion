/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <OfficeImport/TSUZipWriter.h>

@protocol TSURandomWriteChannel;

__attribute__((visibility("hidden")))
@interface TSUZipFileWriter : TSUZipWriter

{
    id <TSURandomWriteChannel> _writeChannel;
    CDUnknownBlockType _writeChannelCompletionHandler;
}

+ (void)zipDirectoryAtURL:(id)arg1 toURL:(id)arg2 queue:(id)arg3 completion:(CDUnknownBlockType)arg4;
+ (void)zipDirectoryAtURL:(id)arg1 customDirectoryFilename:(id)arg2 toURL:(id)arg3 queue:(id)arg4 progressHandler:(CDUnknownBlockType)arg5;

- (id)initWithURL:(id)arg1 options:(unsigned long long)arg2 error:(id *)arg3;
- (id)initWithURL:(id)arg1 error:(id *)arg2;
- (id)prepareWriteChannelWithCloseCompletionHandler:(CDUnknownBlockType)arg1;
- (void)truncateToOffsetImpl:(long long)arg1 completion:(CDUnknownBlockType)arg2;
- (id)initWithZipFileArchive:(id)arg1 options:(unsigned long long)arg2 error:(id *)arg3;
- (void)copyRemainingEntries:(id)arg1 fromArchive:(id)arg2 progress:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (id)initWithZipFileArchive:(id)arg1 error:(id *)arg2;
- (void)copyEntriesFromZipFileWriter:(id)arg1 readingFromURL:(id)arg2 options:(unsigned long long)arg3 completionHandler:(CDUnknownBlockType)arg4;

@end
