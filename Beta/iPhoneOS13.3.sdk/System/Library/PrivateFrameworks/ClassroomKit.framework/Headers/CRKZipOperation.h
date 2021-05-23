/*
 Image: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
 */

#import <CATOperation.h>

@class NSURL;

@interface CRKZipOperation : CATOperation

{
    NSURL *_directoryURL;
    NSURL *_destinationZipFileURL;
}

@property (nonatomic, readonly) NSURL *directoryURL;
@property (nonatomic, readonly) NSURL *destinationZipFileURL;

- (void)main;
- (id)initWithDirectoryURL:(id)arg1;
- (id)initWithDirectoryURL:(id)arg1 destinationZipName:(id)arg2;
- (id)initWithDirectoryURL:(id)arg1 destinationZipURL:(id)arg2;
- (_Bool)validateParametersWithError:(id *)arg1;
- (_Bool)createDestinationDirectoryWithError:(id *)arg1;
- (_Bool)writeArchiveOfDirectoryAtURL:(id)arg1 toURL:(id)arg2 error:(id *)arg3;
- (struct archive *)makeArchiveWithError:(id *)arg1;
- (_Bool)populateArchive:(struct archive *)arg1 error:(id *)arg2;
- (void)finalizeArchive:(struct archive *)arg1;
- (id)errorFromArchive:(struct archive *)arg1;
- (_Bool)populateArchive:(struct archive *)arg1 usingDisk:(struct archive *)arg2 error:(id *)arg3;
- (_Bool)writeFTSEntry:(id)arg1 toArchive:(struct archive *)arg2 usingDisk:(struct archive *)arg3 error:(id *)arg4;
- (_Bool)writeHeaderForFTSEntry:(id)arg1 toArchive:(struct archive *)arg2 usingDisk:(struct archive *)arg3 fileDescriptor:(int)arg4 error:(id *)arg5;
- (_Bool)writeDataForFTSEntry:(id)arg1 toArchive:(struct archive *)arg2 fileDescriptor:(int)arg3 error:(id *)arg4;
- (const char *)relativePathForPathOnDisk:(id)arg1;
- (long long)lengthOfBufferForFileDescriptor:(int)arg1 stat:(struct stat)arg2;
- (_Bool)writeDataFromFileDescriptor:(int)arg1 toArchive:(struct archive *)arg2 usingBuffer:(id)arg3 error:(id *)arg4;

@end
