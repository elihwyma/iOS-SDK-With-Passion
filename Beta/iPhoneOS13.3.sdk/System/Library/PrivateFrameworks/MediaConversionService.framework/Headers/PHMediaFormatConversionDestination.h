/*
 Image: /System/Library/PrivateFrameworks/MediaConversionService.framework/MediaConversionService
 */

#import <MediaConversionService/PHMediaFormatConversionContent.h>

@class NSString, NSURL, PFVideoExportRangeCoordinator;

@interface PHMediaFormatConversionDestination : PHMediaFormatConversionContent

{
    NSURL *_temporaryFilesURLToDelete;
    NSURL *_temporaryOutputDirectoryURL;
    NSURL *_temporaryOutputFileURL;
    PFVideoExportRangeCoordinator *_singlePassVideoExportRangeCoordinator;
    NSString *_outputPathExtension;
    unsigned long long _singlePassVideoConversionTargetLength;
}

@property (retain) PFVideoExportRangeCoordinator *singlePassVideoExportRangeCoordinator;
@property (retain) NSString *outputPathExtension;
@property (readonly) NSURL *temporaryOutputDirectoryURL;
@property (readonly) NSURL *temporaryOutputFileURL;
@property (readonly) _Bool usesSinglePassVideoConversion;
@property unsigned long long singlePassVideoConversionTargetLength;

+ (id)sharedCleanupQueue;
+ (id)destinationForConversionReturningUnchangedSource:(id)arg1;

- (void)dealloc;
- (unsigned long long)length;
- (_Bool)waitForAvailabilityOfRange:(struct _NSRange)arg1 timeout:(unsigned long long)arg2 error:(id *)arg3;
- (void)removeTemporaryFiles;
- (void)addAvailableRange:(struct _NSRange)arg1;
- (_Bool)padToLength:(unsigned long long)arg1 error:(id *)arg2;
- (_Bool)createTemporaryOutputDirectoryWithError:(id *)arg1;
- (void)generateTemporaryOutputFileURLForRequest:(id)arg1;
- (id)temporaryDirectoryPrefix;
- (_Bool)createTemporaryOutputFileWithErrorError:(id *)arg1;
- (void)removeTemporaryFilesWithCompletionHandler:(CDUnknownBlockType)arg1;
- (_Bool)padVideoToLength:(unsigned long long)arg1 fileHandle:(id)arg2 error:(id *)arg3;
- (_Bool)padImageToLength:(unsigned long long)arg1 fileHandle:(id)arg2 error:(id *)arg3;
- (void)enableSinglePassVideoConversionWithTargetLength:(unsigned long long)arg1;
- (id)errorForSinglePassVideoConversionError:(id)arg1;

@end
